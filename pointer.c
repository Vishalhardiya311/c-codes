#include<stdio.h>
int main()
{
    {
    int a=5;
    int b;
    b=&a;
    printf("value of a =%d\n",a);
     printf("value of a =%d\n", * (&a)); 
     printf("value of a =%d\n", *(b));
     printf(" address of a =%u\n",&a);
     printf("address of a = %d\n", b);
     printf("address of b = %u\n",&b);
     printf("value of b = adress of a = %u",b);
  return 0;
}
    }