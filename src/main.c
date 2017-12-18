#include "stdio.h"
#include "test.h"

void test(const char* str)
{
  printf("hello %s\n",str);
}

int main(int argc, char const *argv[]) {
  test("world");
  testtest(1,2,3);
  return 0;
}


void testtest(int a,int b,int c)
{
    printf("hello testtest %d,%d,%d\n",a,b,c);
}
