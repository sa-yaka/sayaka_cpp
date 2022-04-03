# VSCode 使用 clangd 来实现代码提示、补全

前天写了 [C++ 成员函数作 C 回调函数（模板）](https://zsien.cn/cpp-member-function-as-c-callback-function/) 后，VSCode 的 C/C++ 插件一直报 `incomplete type is not allowed`，所以决定换到 clangd 试试，结果发现效果超出预期～

## 配置 CMake

与 C/C++ 插件一样，clang 插件需要使用 compile_commands.json 文件，但它并不支持 configuration provider，所以需要手动配置 compile_commands.json 的路径。

然而，我的 CMake 是生成路径是通过构建工具和构建类型来生成的，而 clangd 插件并不支持使用这些变量，所以得让 CMake 插件复制下 compile_commands.json：

```
{
    "cmake.copyCompileCommands": "${workspaceFolder}/build/compile_commands.json",
}
```

## 配置 clangd

因为我的系统默认安装的 clangd-9 还有些问题：调用函数的实参有使用到模板时，无法跳转到函数定义。所以装了 clangd-10，需要手动指定下 clangd-10 的路径。

```
{
    "clangd.path": "/usr/bin/clangd-10",
    "clangd.arguments": [
        "--compile-commands-dir=${workspaceFolder}/build",
        "--background-index",
        "--clang-tidy",
        "--log=verbose",
        "--pretty",
    ],
}
```

## 关闭 C/C++ 插件冲突的功能

因为还需要 Debug，所以不能完全禁用掉 C/C++ 插件。不过，像智能提示、自动补全、错误提示就都可以禁掉啦。

```
{
    "C_Cpp.intelliSenseEngine": "Disabled",
    "C_Cpp.autocomplete": "Disabled",
    "C_Cpp.errorSquiggles": "Disabled",
}
```

### 依赖关系
c/c++
clangd
