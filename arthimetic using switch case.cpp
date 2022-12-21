#include <stdio.h>
float x;
int sum(int a,int b)
{
	x=a+b;
	return(x);
}
int mul(int a,int b)
{
	x=a*b;
	return(x);
}
int sub(int a,int b)
{
	x=a-b;
	return(x);
}
int div(int a,int b)
{
	x=a/b;
	return(x);
}
int mod(int a,int b)
{
	x=a%b;
	return(x);
}
int main(){
	int p,q,choice;
	printf("Enter the number1 : ");
	scanf("%d",&p);
	printf("Enter the number2 : ");
	scanf("%d",&q);
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice){
		case 1: 
		sum(p,q);
		printf("The sum of two numbers is %f",x);
		break;
		case 2:
		sub(p,q);
		printf("The subtraction of two numbers is %f",x);
		break;
		case 3:
		mul(p,q); 
		printf("The sum of two numbers is %f",x);
		break;
		case 4: 
		div(p,q);
		printf("The sum of two numbers is %f",x);
		break;
		case 5: 
		mod(p,q);
		printf("The sum of two numbers is %f",x);
		break;
		default : printf("Invalid choice");
		break;
	}
}
