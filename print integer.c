//c program to print 
// integer value


int main() {
    //delaring integer
    int x=5;

    //printing values

    printf("printing ineteger value %d",x);
    return 0;
}

// c program to add two number

#include<stdio.h>

int main()  {

    int A,B,sum=0;

    //ask user to enter the two number 
    printf("Enter two number A and B: \n");

    //read two number from the user || A = 2,B =3
    scanf("%d%d",&A,&B);

    //Calculate the addition of A and B 
    //USING '+' Opertor

    sum = A + B;

    //print the sum
    printf("sum ofA and B is:%d",sum);
    
    return 0;
}
