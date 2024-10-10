//Electricity bill calculator
/*
Author: Owaya Augustine
REG: CT101/G/23524/24
Date:09/10/2024
*/

#include <stdio.h>
int main(){
	int customerID,units;
	char customerName [50];
	float chargesperunit,totalAmount,surcharges;
	
	printf("Enter customer ID = ");
	scanf("%d",&customerID);
	printf("Enter customer Name : ");
	scanf("%s",customerName);
	printf("Enter units consumed = ");
	scanf("%d",&units);
	
	if (units<=199) {
		chargesperunit=1.20;
	}else if(units >=200&& units<400)
	{
		chargesperunit=1.50;
	}else if(units>=400 && units<600)
	{
		chargesperunit=1.80;
	}else
	{
		chargesperunit=2.00;
	}
	
	totalAmount = units * chargesperunit;
	
	if (totalAmount>400) {
		surcharges= totalAmount*0.15;
	}
	
	totalAmount += surcharges;
	
	if (totalAmount<100){
		totalAmount=100;
	}
	
	printf("\nCustomer ID      :%d",customerID);
	printf("\nCustomer Name    :%s",customerName);
	printf("\nUnits Consumed   :%d",units);
	printf("\nCharges per Unit :%.2f",chargesperunit);
	printf("\nTotal Amount     :%.2f",totalAmount);
	
	return 0;
}