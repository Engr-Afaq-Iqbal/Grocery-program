#include<iostream>
#include<stdio.h>  
#include <string.h> 
#include <stdlib.h> 
using namespace std;
float stdprice;
	
struct Grocery
{
    int item_ID;
    string item_Name[10];
    float price;
};

void Additem()
{
	printf("1.    Add new Item\n");
	printf("2.    Find the costly items\n");
	printf("3.    Exit...\n");
	
}

void FindCostlyItems(struct Grocery gro[])
{
	int j;
	printf("Enter any standard price :  ");
	scanf("%f",&stdprice);
	printf("Listing the costlier items");
	printf("\n------------------------------\n");
	for (j=0;j<50;j++)
	{
		if (gro[j].price > stdprice)
		{
			fflush(stdout);
			printf("%s   %0.2f   KWD \n",gro[j].item_Name,gro[j].price);
			fflush(stdout);
		}
	}
	printf("\n------------------------------\n");
						
}


int main()
{
	struct	Grocery groc[50];
	int	c = 0,opt,i;

	
	for(i=0;;i++)
	{
		if(i<50)
		{
		
			Additem();
			wrong:
			printf("Choose any option:  ");
			scanf("%d",&opt);
			switch(opt)
			{
				case 1:
				{
					printf("Enter the Item Name:   ");
					fflush(stdin);
					scanf("%s",&groc[i].item_Name);
					
					
					
					printf("Enter the Item ID:   ");
					fflush(stdin);
					scanf("%d",&groc[i].item_ID);
					
					printf("Enter the price:   ");
					fflush(stdin);
					scanf("%f",&groc[i].price);
				
					printf("The item is added !\n\n");
					break;
				}
				
				case 2:
				{
					FindCostlyItems(groc);
					break;
				}
					
				case 3:
				{
					exit(0);
					break;
				}
				default:
				{
					printf("Enter correct choice");
					goto wrong;
					
				}
			}
		}
		else
		{
			printf("Sorry ! Cannot add more items ");
			exit(0);
		}
	}
}
