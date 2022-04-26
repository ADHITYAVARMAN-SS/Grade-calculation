#include<stdio.h>

int main(){
	//to get input of mark 
	printf("enter the mark:");
	int mark;
	scanf("%d",&mark);
	
	printf("The given mark %d\n",mark);

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
