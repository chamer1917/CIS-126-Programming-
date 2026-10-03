//Charles Meredith
//2.3GP
//05/13/2024



#include<stdio.h>


int main(){
	
	int num1,num2;
	
	printf("Enter the first number: ");
	scanf("%d", &num1);
	
	printf("Enter the second number: ");
	scanf("%d", &num2);
	
	if (num1 > num2)		//checks to see if the first number is greater than the second
	
	{	printf("%d is greater than %d\n", num1, num2);
	}
	
	else if (num1 < num2)	//checks to see if the first number is less than the second
	
	{	printf("%d is less than %d\n", num1, num2);
	}
	
	else					//if all other decisions are false- the numbers are equal
	
	{	printf("%d is equal to %d\n", num1, num2);
	}
	
	return 0;
}
