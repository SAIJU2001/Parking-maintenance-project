//creat a mini project to maintain parking.
//charge for every vehicle.
//bus = 100Rs; car = 50Rs; auto = 40Rs; toto = 30Rs; bike = 20Rs; cycle = 10Rs; 

#include<stdio.h>
#include<conio.h>

int nauto=0,ncar=0,nbus=0,ncycle=0,ntoto=0,nbike=0,count=0,amount=0; //glodal variable 

void Auto()
{
	nauto++;
	amount=amount+40;
	count++;
	printf("Entry sucessfull.\n");
	printf("Thank you for parking the AUTO.\n");	
}
void Car()
{
	ncar++;
	amount=amount+50;
	count++;
	printf("Entry sucessfull.\n");
	printf("Thank you for parking the CAR.\n");	
}
void Bus()
{
	nbus++;
	amount=amount+100;
	count++;
	printf("Entry sucessfull.\n");
	printf("Thank you for parking the BUS.\n");	
}
void Bike()
{
	nbike++;
	amount=amount+20;
	count++;
	printf("Entry sucessfull.\n");
	printf("Thank you for parking the BIKE.\n");	
}
void Cycle()
{
	ncycle++;
	amount=amount+10;
	count++;
	printf("Entry sucessfull.\n");
	printf("Thank you for parking the CYCLE.\n");	
}
void Toto()
{
	ntoto++;
	amount=amount+30;
	count++;
	printf("Entry sucessfull.\n");
	printf("Thank you for parking the TOTO.\n");
}
void amt()
{
	printf("The total amount colleted is : %dRs.\n",amount);
}
void status()
{
	printf("\nThe number of bus is : %d.",nbus);
	printf("\nThe number of car is : %d.",ncar);
	printf("\nThe number of auto is : %d.",nauto);
	printf("\nThe number of toto is : %d.",ntoto);
	printf("\nThe number of bike is : %d.",nbike);
	printf("\nThe number of cycle is : %d.",ncycle);
	printf("\nThe number of total vehicle is : %d.",count);
	printf("\nThe gain of total amount is : %dRs.",amount);
	printf("\n");
}
void delete_data()
{
	nauto=0,ncar=0,nbus=0,ncycle=0,ntoto=0,nbike=0,count=0,amount=0;
	printf("Sucessfully deleted the data.\n");
	printf("Thank you for using my program.\n");
}

void main()
{
	int n;
	do
	{
		printf("\nFor exit the server press 0.\nParking the BUS press 1.\nParking the CAR press 2.\n");
		printf("Parking the AUTO press 3.\nParking the TOTO press 4.\nParking the BIKE press 5.\n");
		printf("Parking the CYCLE press 6.\nView the present status press 7.\n");
		printf("Delete the data press 8.\nCheck the total amount press 9.\n");
		printf("\n");
		scanf("%d",&n);
		switch(n)
		{
			case 0 :
				printf("Program Terminated !!\n");
				break;
			case 1 :
				Bus();
				break;
			case 2 :
				Car();
				break;
			case 3 :
				Auto();
				break;
			case 4 :
				Toto();
				break;
			case 5 :
				Bike();
				break;
			case 6 :
				Cycle();
				break;
			case 7 :
				status();
				break;
			case 8 :
				delete_data();
				break;
			case 9 :
				amt();
				break;
			default :
				printf("Invalid Entry !!\n");
				break;
					
		}
	}while(n!=0);
	
printf("\nThank you for using my parking.\n");
printf("Created and Designed by saikat.\n");	
		
}
