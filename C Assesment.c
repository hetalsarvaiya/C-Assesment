#include<stdio.h>
#include<conio.h>
main()
{
	int qty,code;
	float price,amount;
	char ch;
	
	do
	{
		printf("\n--------MENU---------\n");
		printf("1.Pizza\t\t\tPrice = 180rs\pcs\n");
		printf("2.Burger\t\tPrice = 100rs\pcs\n");
		printf("3.Dosa\t\t\tPrice = 120rs\pcs\n");
		printf("4.Idli\t\t\tPrice = 50rs\pcs\n");
		
		printf("\nPlease Enter your choose : ");
     	scanf("%d",&code);	
     	
     	
		switch(code)
		{
			case 1 :
			printf("\nYou have selected Pizza");
			printf("\n\nEnter Quantity : ");
     	    scanf("%d",&qty);	
	        price = 180.00;
			break;
			
			    case 2 :
			    printf("\nYou have selected Burger");
			    printf("\n\nEnter Quantity : ");
     	        scanf("%d",&qty);
			    price = 100.00;
			    break;
			    
			       case 3 :
			       printf("\nYou have selected Dosa");
			       printf("\n\nEnter Quantity : ");
     	           scanf("%d",&qty);
			       price = 120.00;
			       break;
			       
			            case 4 :
			            printf("\nYou have selected Idli");
			            printf("\n\nEnter Quantity : ");
     	                scanf("%d",&qty);
			            price = 50.00;
			            break;
			            
			                default : 
			                    printf("Select correct menu name");
			
	  }
		
		amount = price * qty;
		
		printf("\nAmount  :  %f",amount);
		
		printf("\n\nTotal Amount is : %f",amount);
		
		printf("\n\nDo you want place more orders (y & n)? ",ch);
		ch = getch();
  }
    
	while(ch == 'y' || ch == 'Y');
}
