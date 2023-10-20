#include<stdio.h>
#include<conio.h>

int main()
{
    float side;
    int side;
    printf("enter the side of square ");
    scanf("%d", side);
    printf("The side of square is %d",side);
    float perimeter = (float)(4 * side);
    printf("The perimeter of given square is %f", perimeter);
    return 0;
}