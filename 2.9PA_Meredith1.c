//Charles Meredith
//2.9PA
//05-19-2024


#include<stdio.h>

int main(){
	
	int passcode=11862;
	int userpasscode=0;
	int count;
	
	

	while(userpasscode<=3){
		
			printf("What is the password (You get three tries) numbers only:");
			scanf("%d",&userpasscode);
		
	if(userpasscode==passcode){
	
			printf("\nYou have entered the correct passcode, welcome user.");break;	
	}
		else if(userpasscode!=passcode);{
			
			printf("\nYou have entered the incorrect passcode, try again.\n");
		
		
	}
		
			printf("\nWhat is the password (You get three tries) numbers only:");
			scanf("%d",&userpasscode);
	
	if(userpasscode==passcode){
	
			printf("\nYou have entered the correct passcode,welcome user. ");break;	
	}
		else if(userpasscode!=passcode);{
			
			printf("\nYou have entered the incorrect passcode, try again.\n");
		}
		
			printf("\nWhat is the password (You get three tries) numbers only:");
			scanf("%d",&userpasscode);
		
	if(userpasscode==passcode){
	
			printf("\nYou have entered the correct passcode, welcome user.");break;	
	}
		else if(userpasscode!=passcode){
			
			printf("\nYou have entered the incorrect passcode, try again.\n");
		
		
	}

		
	}
	

	
	
	
	
	
	
	
	
	
	
	return 0;
}
