#include <stdio.h>

int fun(int n) {
  if (n > 10) {
    return n - 10;
  }
  fun(fun(n + 11));
}

int main() {
  int a;
  a = fun(99);
  printf("%d\n", a);
  return 0;
}
