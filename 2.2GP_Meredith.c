//Charles Meredith
//2.2GP
//05/13/2024


#include<stdio.h>

int main(){
	
	
	int number;
	printf("Enter an integer:");
	scanf("%d",&number);
	
	//true if number is divisble by 2
	if(number %2==0)
	
	printf("%d is even.", number);
	
	else
	
	printf("%d is odd.", number);
	
	return 0;
}
