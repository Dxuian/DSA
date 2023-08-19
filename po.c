// Online C compiler to run C program online
#include <stdio.h>
void f(char **ptr)
{
  char *ptr1;
  ptr1 = (ptr += 2)[-2];
  printf("%s", ptr1);
}
int main()
{
  // Write C code here
   char *arr[] = {"ant", "bat", "cat", "dog", "egg", "fly"};
  f(arr);
  return 0;
}