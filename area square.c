#include<stdio.h>
#include<conio.h>

int main(){
    float side;
    int side;
    printf("enter the side of squar :");
    scanf("%d", side);
    printf("The side of the square is %d\n", side);
    float area = (float) (side *side);
    printf("The area of given square is %f", area);
    return 0;
}