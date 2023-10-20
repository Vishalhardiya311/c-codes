#include<stdio.h>

void main()
{
 char name[4];    
float maths, physics,chemistry,Hindi,english;
float per , avg;
float total;

printf("\nstudent marksheet");
printf("\nenter marks of maths :");
scanf("%f", &maths);
printf("\nenter marks of physics :");
scanf("%f", &physics);
printf("\nenter marks of chemistry :");
scanf("%f ", &chemistry);
printf("\nenter marks of Hindi :");
scanf("%f", &Hindi);
printf("\nenter marks of english :");
scanf("%f",&english);
printf("Total marks obtained :");
total= maths + physics + chemistry + Hindi + english ;
	printf("\nThe total mark : %.2f ",total);
	per = (total/400)*100;
	avg = (total/3);
	printf("\nThe percentage mark : %.2f ", per);
	printf("\nThe average mark : %.2f", avg);


// Grade calculation 
	if(per>=80) 
	printf("\nGrade : A");
	else if(per>=60) printf("\nGrade : B");
	else if(per>=45) printf("\nGrade : C");
	else if(per>=35) printf("\nGrade : D");
	else if(per<35) printf("\nFail   : E");

}