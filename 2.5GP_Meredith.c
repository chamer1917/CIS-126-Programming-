//Charles Meredith
//2.5GP 
//05/15/2024


#include<stdio.h>

int main(){
	//declare variables
	float sum=0;
	float temperature;
	float average;
	int count=1;
	
	//output headers
	
	printf("Enter five temperatures to average:\n");
	
	//loop to get temp from users
	while (count <=5){
		
		printf("What is temperature %d: ",count);
		scanf("%f", &temperature);

		//calculate running sum
		sum= sum + temperature;
		
		//update looping variable
		count++;
		
		
	}
	
	//calculate average
	average= sum / 5;
	
	printf("\nThe average temperature is %.2f degrees:",average);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
