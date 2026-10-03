//Charles Meredith
//Assignment:1.8GP
//Date: 05\07\2024


#include<stdio.h>

int main(){
	
//Declare Variables

	float realSalesAmount;
	float taxRate;
	float salesTax;
	float totalSales;
	
	
	//Get numbers from users
	
	printf("Enter the sales amount:");
	scanf("%f",&realSalesAmount); 	
	
	taxRate=0.20;
	
	salesTax= realSalesAmount*taxRate;
	
	printf("The salesTax is:%.2f\n",salesTax);
	
	totalSales= salesTax + realSalesAmount;
	
	printf("The total sales amount is:%.2f",totalSales);
	
	
	
	
	
	return 0;
}
