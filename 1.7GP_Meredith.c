//Charles Meredith
//1.7GP
//05/08/2024

int main(){
	
	//declare variables
	
	int yearlyPay;
	int weeklyPay;
	
	//get users yearly pay
	
	printf("Enter your yearly pay: ");
	scanf("%d", &yearlyPay);
	
	//calculate weekly pay
	weeklyPay= yearlyPay /52;
	
	printf("Your weekly pay is: %.2d",weeklyPay);
	
	//check if > 1000
	
	if(weeklyPay > 1000){
		
		printf("\nYou are doing a \"great\" job.");
		printf("Spend your money well.");
		
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
