//Charles Meredith
//2.5GP
//05/15/2024



#include<stdio.h>

int main(){
	
	char ans; //sentinel value to allow the user to end the loop when they wish
	
	do
	{
		printf("C is fun\n");
		printf("Do you want to see the message again (Y/N):"); //prompt the user to continue or not
		scanf(" %c", &ans);	
		
		
		
		
	}while(ans=='Y' || ans=='y');	//condition to continue- || is the OR operator and == means equality
	
	
	printf("\nThats all for now.");
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
