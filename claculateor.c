#include<stdio.h>
int main(){
    char op;
    double first,second ,out;

    printf("enter the condition(+,-,*,/):");
    scanf("%c",op);
    printf("enter the two number one by one:");
    scanf("%f %f" ,&first ,&second );
        if(op =='+')
        {
            printf("%f + %f = %f",("out = first + second"));
        }
        else if(op =='-')
        {
            printf("%f - %f = %f",("out = first - second"));
        }  
        else if(op =='*')
        {
            printf("%f * %f = %f",("out = first * second"));
        }
        else if(op =='/')
        {
            printf("%f / %f = %f",(out = first / second));
        }
         else {
      printf("Divide by zero situation.");}
 return 0;
   
}