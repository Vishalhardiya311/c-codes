#include <stdio.h>

int main() {
    char operator;
    double first, second;
    printf("enter the operator ( + , - , * , /):");
    scanf("%c",&operator);
    printf("enter the two number one by one :");
scanf("%lf %lf" ,&first, &second);
switch(operator){
      case'+':
      printf("%.2lf + %.2lf = %.2lf",first,second,(first+second));
      break;
      case'-':
      printf("%.2lf - %.2lf = %.2lf",first,second,(first-second));
      break; 
       case'*':
      printf("%.2lf * %.2lf = %.2lf",first,second,(first*second));
      break;
      case'/':
      if(second  != 0.0)
      printf("%.2lf / %.2lf = %.2lf",first,second,(first/second));
      else 
      printf("Divide by zero situation.");
      break;
       
       default:
       printf("%c is not valid operator",operator);
 return 0;
}
}