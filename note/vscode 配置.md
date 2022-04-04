# VSCode 使用 clangd 来实现代码提示、补全

## 配置 CMake

与 C/C++ 插件一样，clang 插件需要使用 compile_commands.json 文件，但它并不支持 configuration provider，所以需要手动配置 compile_commands.json 的路径。

然而，我的 CMake 是生成路径是通过构建工具和构建类型来生成的，而 clangd 插件并不支持使用这些变量，所以得让 CMake 插件复制下 compile_commands.json：

```
{
    "cmake.copyCompileCommands": "${workspaceFolder}/build/compile_commands.json",
}
```

## 配置 clangd

```shell
sudo pacman -S clang
```

然后在 vscode 中安装插件 clangd。

## 关闭 C/C++ 插件冲突的功能

因为还需要 Debug，所以不能完全禁用掉 C/C++ 插件。不过，像智能提示、自动补全、错误提示就都可以禁掉啦。

```
    "C_Cpp.intelliSenseEngine": "Disabled",
    "C_Cpp.autocomplete": "Disabled",
    "C_Cpp.errorSquiggles": "Disabled",
```

### 依赖关系
c/c++
clangd
