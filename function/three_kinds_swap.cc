#include <iostream>

void ValueSwap(int a, int b);
void PointerSwap(int *a, int *b);
void CitationSwap(int &a, int &b);

int main() {
  using namespace std;

  int a = 10;
  int b = 20;

  ValueSwap(a, b);
  cout << "ValueSwap: a = " << a << "\tb = " << b << endl;

  a = 10;
  b = 20;
  PointerSwap(&a, &b);
  cout << "PointerSwap: a = " << a << "\tb = " << b << endl;

  a = 10;
  b = 20;
  CitationSwap(a, b);
  cout << "CitationSwap: a = " << a << "\tb = " << b << endl;

  return 0;
}

void ValueSwap(int a, int b) {
  int temp = a;

  a = b;
  b = temp;
}

void PointerSwap(int *a, int *b) {
  int temp = *a;

  *a = *b;
  *b = temp;
}

void CitationSwap(int &a, int &b) {
  int temp = a;

  a = b;
  b = temp;
}