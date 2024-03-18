// WAP To demonstrate the local, global and static variable//

#include <stdio.h>

// Global variable
int G = 6.62;
int main()
{
  // local variable//
  int a = 5;

  printf("%d is the local vaiable\n", a);

  // static variable//
  static int b = 8;

  printf("%d is the static vaiable", b);
  return 0;
}
