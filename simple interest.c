//c program to implement 
 // the above approach
 #include<stdio.h>

 //drive code
 int main(){
    //we can change values here for
    //different inputs
    float P =1,R =1,T =1;

    //CALCULATE SIMPLE INTEREST
    float SI =(P * T * R) /100;

    //PRINT SIMPLE INTEREST 
    printf("simple interest=%f\n",SI);

    return 0;
 }