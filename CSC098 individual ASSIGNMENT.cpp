#include <stdio.h>

int main()
{
	//declare all variables
	char char1;
	int value, value2, value3, beverage, sugar, ice, top, cup;
	float sum=0, priceBeverage, priceTop, priceGst, grandTotal, totalOrder; 
	const float taxRate=0.06;
	
	//display welcome sign and requires input '1' to continue to the program
	printf("\t\t----- Welcome to Rara Cafe, Cybersouth -----\n\n");
	printf("To continue, enter '1': ");
	scanf("%d", &value);
	
	while(value!=1)
	{
		//if enter value else than 1, it will leave the program
		printf("\n\n\t\t\tThank you, come again!\n");
		return 0;
	}
	
		//decision program to order hot or cold beverages
		menu:
		printf("\n\nTo order hot beverages, enter 1");
		printf("\nTo order cold beverages, enter 2: ");
		scanf("%d", &value2);
	
	if(value2==1)
	{
		//display hot menu
		printf("\n\n\tHOT BEVERAGES\n");
		printf("\n[1] Espresso\t\tRM 6.50\n");
		printf("[2] Americano\t\tRM 6.00\n");
		printf("[3] Cappucino\t\tRM 7.00\n");
		printf("[4] Caffe Latte\t\tRM 7.50\n");
		printf("[5] Chocolate\t\tRM 8.50\n");
		printf("[6] Teh Tarik\t\tRM 5.00\n");
		printf("[7] Matcha Latte\tRM 7.30\n\n");
	}
	
	else if(value2==2)
	{
		//display cold menu		
		printf("\n\n\tCOLD BEVERAGES\n");
		printf("\n[8] Americano\t\tRM 9.00\n");
		printf("[9] Mochaccino\t\tRM 10.00\n");
		printf("[10] Milk Tea\t\tRM 7.00\n");
		printf("[11] Fruit Juice\tRM 9.50\n");
		printf("[12] Fruity Smoothie\tRM 10.50\n");
		printf("[13] Signature Coco\tRM 11.00\n\n");
	}
	
	else
	{
		//error display if a valid number is not entered
		printf("\nERROR// please enter a valid number");
		goto menu; //re-enter a valid number
	}
	
	//choose beverage by choosing beverage number
	beverage:	
	printf("Enter beverage number: ");
	scanf("%d", &beverage);	
	
	switch (beverage)
	{
		case 1:
		priceBeverage = 6.5; //espresso price
		break;
		
		case 2:
		priceBeverage = 6.0; // hot americano price
		break;
		
		case 3:
		priceBeverage = 7.0; // cappuccino price
		break;
		
		case 4:
		priceBeverage = 7.5; // caffe latte price
		break;
		
		case 5:
		priceBeverage = 8.5; // chocolate price
		break;
		
		case 6:
		priceBeverage = 5.0; // teh tarik price
		break;
		
		case 7:
		priceBeverage = 7.3; // matcha latte price
		break;
		
		case 8:
		priceBeverage = 9.0; // cold americano price
		break;
		
		case 9:
		priceBeverage = 10.0; // mochaccino price
		break;
		
		case 10:
		priceBeverage = 7.0; // milk tea price
		break;
		
		case 11:
		priceBeverage = 9.5; // fruit juice price
		break;
		
		case 12:
		priceBeverage = 10.5; // fruity smoothie price
		break;
		
		case 13:
		priceBeverage = 11.0; // signature coco price
		break;
		
		default: 
		printf("\nERROR// please enter a valid number\n\n"); //error display if a valid number is not entered
		goto beverage; //re-enter beverage number
	}
	
	
	//display sugar level choices
	printf("\n\tSUGAR LEVEL\n\n");
	printf("[1] normal\n[2] half\n[3] slight\n[4] none\n\n");
	
	//choose sugar level by choosing number 1-4	
	do
	{
	printf("Enter sugar level number: ");
	scanf("%d", &sugar);
		if((sugar<1 || sugar>4))
		{
			//error display if a valid number is not entered
			printf("\nERROR// please choose between 1-4\n\n");
		}
	}
	while((sugar<1 || sugar>4));
		
	//display ice level choices (only applicable for cold beverages)
	if((beverage>7 && beverage<14))
	{
		do
		{
		printf("\n\tICE LEVEL\n");
		printf("\n[1] normal\n[2] half\n[3] none\n\n");
		//choose sugar level by choosing number 1-3
		printf("Enter ice level number: ");
		scanf("%d", &ice);
			if((ice<1 || ice>3))
			printf("\nERROR// please choose between 1-3\n\n");
			//error display if a valid number is not entered
		}
		while((ice<1 || ice>3));
	}
			
	//display topping menu
	printf("\n\n\tADD TOPPINGS\n");
	printf("\n[1] Pearl\t\tRM 1.30\n");
	printf("[2] Grass Jelly\t\tRM 1.30\n");
	printf("[3] Oreo Cookie\t\tRM 1.30\n");
	printf("[4] Aloe Verra\t\tRM 1.50\n");
	printf("[5] Red Bean\t\tRM 1.50\n");
	printf("[6] None\n\n");
	
	//choose topping by choosing 1-6
	topping:
	printf("Enter topping number: ");
	scanf("%d", &top);

	switch (top)
	{
		case 1:
		priceTop = 1.3; // pearl price
		break;
		
		case 2:
		priceTop = 1.3; // grass jelly price
		break;

		case 3:
		priceTop = 1.3; // oreo cookie price
		break;
		
		case 4:
		priceTop = 1.5; // aloe verra price
		break;
		
		case 5:
		priceTop = 1.5; // red bean price
		break;
		
		case 6:
		priceTop = 0; // if the user doesnt want to add topping
		break;
			
		default:
		printf("\nERROR// please choose between 1-6\n\n"); 	//display error message if a valid number is not entered
		goto topping; //re-enter topping number
	}
	
	//choose how many cups of the selected beverage to order
	cups:
	printf("\n\nHow many cups of this selected beverage would you like to order?: ");
	scanf("%d", &cup);
	
	if(cup<1)
	{
		//display error message if a number less than 1 is entered
		printf("\nERROR// please choose a valid number");
		goto cups; //re-enter number of cups
	}
	
	//calculation of price for one type of order
	totalOrder = (priceBeverage + priceTop) * cup; 

	//calculation to update the total price if new order is placed
		sum = totalOrder + sum;

	//diplay current total price
	printf("\nCurrent Total = RM%.2f\n\n", sum);
	
	//decision program to add another order
	add:
	printf("\nWould you like to add another beverage?\n");
	printf("If yes, enter '1', If no, enter '2': ");
	scanf("%d", &value3);
	
	//if user enter '1'
	if(value3==1)
		goto menu; //it will bring user to enter a new order
	
	//if user enter '2'
	if(value3==2)
	{
		priceGst = sum * taxRate; //tax charge calculation
		grandTotal = sum + (priceGst); //final total price calculation (including tax price)
		
		
				//display subtotal, tax charge and nett price in the customer receipt
		printf("\t\t\n----- Welcome to Rara Cafe, Cybersouth -----\n");
		printf("\n _______________________________________\n");
		printf("|\t--- CUSTOMER RECEIPT ---\t|");
		printf("\n|_______________________________________|\n");
		printf("| Subtotal = RM %.2f\t\t\t|\n", sum);
		printf("|                                       |\n");
		printf("| include 6%% government tax:\t\t|\n");
		printf("| Tax charge = RM%.2f\t\t\t|\n", priceGst);
		printf("| Nett Price = RM %.2f\t\t\t|", grandTotal);
		printf("\n|_______________________________________|\n\n");
	}
		
	else
	{
		//display error message if a valid number is not entered
		printf("\nERROR// please enter a valid number\n");
		goto add;
	}
	
	//closure (asks user to confirm payment)
	printf("Confirm payment?, enter any key: ");
	scanf("%d", &char1);
	if(char1>0)
		printf("\nThank you for your purchase, come again!\n");
	else
		printf("\nThank you for your purchase, come again!\n");
	
	return 0;
}