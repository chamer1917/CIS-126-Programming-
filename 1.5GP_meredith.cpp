// Charles Meredith
// Assignment: 1.5 GP
// Date 05/06/2024

#include<stdio.h> 

	int main (){
	//declare variables
	int num1, num2, result;
	
	//get numbers from user
	printf("Enter two numbers \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	result = num1 * num2;
	
	printf("The numbers multiplied together are %d", result);

	return 0;
}
