//Charles Meredith
//2.4GP
//05/13/2024



#include<stdio.h>

int main(){
	
	int userNum;
	int count;
	
	//prompt user for number
	printf("Enter any number to find factors:");
	scanf("%d",&userNum);
	
	//printing header
	printf("The factors of %d are:\n",userNum);
	
	//loop through to find factors
	
	for (count=1; count <= userNum; count++){
		if(userNum % count==0){
		printf("%d\n",count);
		}
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
