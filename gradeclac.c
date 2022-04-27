#include<stdio.h>

int main(){
	//to get input of mark 
	printf("enter the mark:");
	float mark,m1,m2,m3,m4,m5;
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
	mark = (m1+m2+m3+m4+m5)/5;

	if(mark>=85 && mark<=100) {
		printf("The kid got 'Grade-A'");
	}
	else if(mark>=70 && mark<=84){
		printf("The kid got 'Grade B'");
	}
	else if(mark>=55 && mark<=69){
		printf("The kid got 'Grade-C'");
	}
	else if (mark>40 && mark<=54){
		printf("The kid got 'Grade-D'");
	}
	else if (mark>=0 && mark<=39){
		printf("The kid got 'Grade-F'");
	}
	else{
		printf("enter a valid mark ");
	}
}
