#include<stdio.h>       
                                                        
                                                                                
int main()                                                                     
{                                                                               
    int length1, length2, length3, perimeter=0;                                 
    printf("\nFinds perimeter of a triangle\n");        
    printf("\nEnter Length1: ");                                                
    scanf("%d", &length1);                                                      
    printf("\nEnter Length2: ");                                                
    scanf("%d", &length2);                                                      
    printf("\nEnter Length3: ");                                                
    scanf("%d", &length3);                                                      
                                                                                
    perimeter = length1+length2+length3;                                        
                                                                                
    printf("Perimeter of a triangle is: %d", perimeter);

}  
