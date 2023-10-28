#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int QProductA, QProductB, QProductC, amount=0, choice, discount, sum1, sum2, sum3;
	int rate, totalquantity=0, gift_fee=0, min=15, max=30;
	float total, shipping_charge;

	setbuf(stdout,NULL);
	printf("Welcome our store. The product details are \n Product A - $20 \n Product B - $40 \n Product C - $50\n");
	printf("Enter the Quantity of your purchase\n");
	printf("Enter the Quantity of Product A you want to buy\n");
	scanf("%d",&QProductA);
	printf("Enter the Quantity of Product B you want to buy\n");
	scanf("%d",&QProductB);
	printf("Enter the Quantity of Product C you want to buy\n");
	scanf("%d",&QProductC);



	printf("Do you wish to wrap this as a gift\n type 1 for yes \n 2 for no\n");
	scanf("%d", &choice);

	if (choice == 1)
	{
		gift_fee=QProductA+QProductB+QProductC;
		printf("Gift wrap fees: $ %d.\n",gift_fee);


	}
	else if (choice == 2)
		printf("Gift wrap charge: $0\n");
	else
	{
		printf("you need to choose 1 or 2 to confirm gift wrapping\n");
	}


	totalquantity = QProductA + QProductB + QProductC;
	printf("total Quantity:%d\n",totalquantity);

    sum1=QProductA*20;
    sum2=QProductB*40;
    sum3=QProductC*50;

	amount=sum1+sum2+sum3;

	printf("Your purchase amount is $ %d\n", amount);



	if (totalquantity > 20)
	{
		discount=0.1*amount;
		rate=amount-discount;
		printf("After apply bulk_10_discount . Rate = $ %d\n",rate);
	}




	else if (QProductA > 10){
			discount=sum1*0.05;
			rate=amount-discount;
	        printf("After apply bulk_5_discount . Rate = $ %d\n",rate);}
	else if (QProductB >10){
	    	discount = sum2 * 0.05;
	    	rate=amount-discount;
	    	printf("After apply bulk_5_discount . Rate = $ %d\n",rate);}
    else if (QProductC > 10){
        	discount = 0.05* sum3;
        	rate=amount-discount;
        	printf("After apply bulk_5_discount . Rate = $ %d\n",rate);}


    else if (amount>200)
			{
				printf("you save $ 10");
				rate=amount-10;
				printf("\nAfter reducing Flat_10_Discount . Rate = $ %d\n",rate);
			}
    else
			{
			 rate=amount;
			 printf("No discount Applicable. Rate = $ %d\n", rate);
			}



shipping_charge=totalquantity/2;
printf("Shipping charge for this purchase :$ %f\n",shipping_charge);



total=gift_fee+rate+shipping_charge;
printf("total amount needed to pay : $ %f\n",total);



return EXIT_SUCCESS;
}
