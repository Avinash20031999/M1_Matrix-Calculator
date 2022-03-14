#include<stdio.h>
#include<math.h> //just put here in case of error
#include<string.h>//i don't know where i use this...
#include<stdlib.h>//same here
int main(void)
{
	int c,p;
	int i;
	int j;
	int s[10]={};
    printf("\t\t\t\t\t*** Welcome to Air India ***\n\n\n");
	printf("**Welcome to Air India official ticket booking system**\n\n");
	for (j=0; j<10; j++)
	{
		printf("Choose 1 for Business Class and 2 for Economy class\t");
		scanf("%i",&c);
		//system("cls");
		switch(c)
		{
		case 1:
			printf("\nBusiness class\n");
			printf("Seats available are\n1\t2\t\t3\t4\n5\t6\t\t7\t8\n9\t10\t\t11\t12\n");
			do
			{
                printf("Select your preferred seat:\n\n");
                scanf("%i",&p);
                s[j]=p;
                //system("cls");
			    for (i=0; i<j; i++)
			    {
                    if (s[j]==s[i])
                    {
                        printf("\n\nSeat confirmed.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
                if(s[j] <= 12)
                {
                    printf("\n");
                    printf("--------------------------\n");
                    printf("Class: Business class\n");
                    printf("Seat no : %i\n",s[j]);
                    printf("Seat Confirmed\n");
                    printf("--------------------------\n\n");
                    printf("THANK YOU\n\n");
                    printf("Wishing you a *Happy and safe journey*\n");
                }
                else
                printf("\nNot available\t *Flight booked!*\n\n");
            break;
		case 2:
			printf("\nEconomy class\n");
			printf("Seats available are\n20\t21\t22\t\t23\t24\t25\n26\t27\t28\t\t29\t30\t31\n32\t33\t34\t\t35\t36\t37\n38\t39\t40\t\t41\t42\t43\n");
			do
			{
                printf("Select your preferred seat:\n\n");
                scanf("%i",&p);
                s[j]=p;
                //system("cls");
			    for (i=0; i<j; i++)
			    {
                    if (s[j]==s[i])
                    {
                        printf("\n\nSeat confirmed.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
                if(s[j] >= 43)
                {
                    printf("\n");
                    printf("--------------------------\n");
                    printf("Class: Economy class\n");
                    printf("Seat no : %i\n",s[j]);
                    printf("Seat Confirmed\n");
                    printf("--------------------------\n\n");
			
                }
                else
                printf("\nNot available\t *Flight booked!*\n\n");
            break;
        default:
                break;
        }//end switch case
    }//end counting people*/

	return 0;
}
