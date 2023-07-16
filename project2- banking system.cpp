#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int n, l,i, t,ml,v , f, r, o, h, z,s,lk,amt,bh, se,hj;
	char AN[100], name[100],phone[100],gst[100], pas[100], ma[100],nmb[100],m[]="123456", mail[100], ghost[100], how[100];
	printf("                                   ********** JAIN BANKING SYSTEN **********\n");
	printf("\n                                 ******* WELCOME TO JAIN BANKING SYSTEM ******\n");
	printf("\n --->  Here, is th navigation list.. \n\n    --> please go through it: \n");
	printf("          * Press 1 for opening of new account in our bank.\n");
	printf("          * press 2 to get information about your existing acount.\n");
	printf("          * press 3 to transfer money to other person.\n ");
	scanf("%d", &n);
	switch(n)
	{
		case 1 :
			k:
			printf("\n --> Enter your 16 digit adhar card no.=  ");
			scanf("%s", &AN);
			l=strlen(AN);
			if (l==16)
			{
				printf("(Correct No.)\n");
			}
			else
			{
				printf("( Invalid Adhr Card No.)\n");
				printf("\n Press 3 for re-enter your number:   ");
		    scanf("%d", &f);
		    if (f==3)
		    {
		    	goto k;
			}
			}
			printf("\n--> Enter your name =   ");
			scanf("%s", &name);
			j:
			printf("\n--> Enter your mobile number =  ");
			scanf("%s", &phone);
			t=strlen(phone);
			if (t==10)
			{
				printf("(correct phone no.)");
			}
			else
			{
				printf("(invalid phone  no.)");
				printf("\n--> Press 4 for re-enter your phone number =   ");
		    scanf("%d", &r);
		    if (r==4)
		    {
		    	goto j;
			}
			}
			printf("\n\n--> Enter your E-Mail =   ");
			scanf("%s", &mail);
			B:
			printf("\n--> Enter the amount that you want to deposit in your account =    ");
			scanf("%d", &z);
			
			if (z>=500)
			{
				printf("\n *** Minimum required amount is deposited... \n ");
			}
			else
			{
				printf("\n*** Minimum amount to deposit is rs. 500, please deposit minimum amount...\n");
				printf("\n--> Press 5 for re-enter your number:   ");
		    scanf("%d", &h);
		    if (h==5)
		    {
		    	goto B;
			}
			}
		
			printf("\n\n                          *** Here, are the details given by you for bank opening :  \n");
			printf("                                      --> ADHAR CARD NO. = %s\n", AN);
			printf("                                      --> NAME = %s\n", name);
			printf("                                      --> PHONE NO. = %s\n", phone);
			printf("                                      --> E-MAIL = %s\n", mail);
			printf("                                      --> DEPOSITED AMOUNT = rs.%d", z);
            printf("\n\n *** Congratulations, your account has been open now .....");
            printf("\n\n --> This is your account no....\n ");
            
            printf("----> (%d)", m);
            break;
		case 2: 
		    printf("---> Press 1 for deposit of money..... \n");
		    printf("---> Press 2 for withdrawl of money.....\n");
		    printf("---> Press 3 for balance check..... \n");
		    scanf("%d", &s);
		    switch(s)
		    {
		    case 1:
		    	y:
		    	printf("*** Enter your account number along with your name..... \n \n");
		    	printf("NAME:");
		    	scanf("%s", ghost);
		    	printf("ACCOUNT NO. :");
		    	scanf("%s", how);
		    	if (strcmp(ghost,"saksham")==0 && strcmp(how,"123456")==0)
		    	{
		    		printf("\n---> You, have login in your account....\n");
		    		printf("---> Now , you can deposit the money that you want....");
				}
		    	else
		    	{
		    		printf("\n ---> INCORRECT ACCOUNT NUMBER/NAME...  \n");
		    		printf(" --> Enter 7 for retry for login...\n");
		    		scanf("%d", &ml);
		    		if(ml==7)
		    		{
		    		    goto y;
				    }
				}
				printf("\n\n --> Enter the amount that you want to deposit:  ");
				scanf("%d", &lk);
				printf("\n\n\n***  Your account balance after deposit of money is=  rs.%d ***\n",lk+500 );
			    break;
			case 2:
		    	q:
		    	printf("\n*** Enter your account number along with your name..... \n \n");
		    	printf("NAME:  ");    
		    	scanf("%s", ghost);
		    	printf("ACCOUNT NO. : ");
		    	scanf("%s", how);
		    	if (strcmp(ghost,"saksham")==0 && strcmp(how,"123456")==0)
		    	{
		    		printf("\n---> You, have login in your account....\n");
		    		printf("---> Now , you can withdraw the money that you want....");
				}
		    	else
		    	{
		    		printf("\n ---> INCORRECT ACCOUNT NUMBER/NAME...  \n");
		    		printf(" --> Enter 7 for retry for login...\n");
		    		scanf("%d", &ml);
		    		if(ml==7)
		    		{
		    		    goto q;
				    }
				}
				w:
				printf("\n\n --> Enter the amount that you want to withdraw:  ");
				scanf("%d", &lk);
				if ((lk-500)<0)
				{
					printf("*** INSUFFICIENT BALANCE ***\n");
					printf("--> Enter 9 for re-enter the amount that you want to withdraw....\n ");
					scanf("%d", &amt);
					if(amt==9)
					{
						goto w;
					}
					
				}
				else
				{
				printf("\n\n***  Your account balance after withdrawl of money is=  rs.%d ***",lk-500 );
			    }
			    break;
            case 3:
            	u:
            	printf("\n*** Enter your account number along with your name..... \n \n");
		    	printf("NAME:  ");    
		    	scanf("%s", ghost);
		    	printf("ACCOUNT NO. : ");
		    	scanf("%s", how);
		    	if (strcmp(ghost,"saksham")==0 && strcmp(how,"123456")==0)
		    	{
		    		printf("\n---> You, have login in your account....\n");
		    		printf("---> Now , you can check the balance of your account....");
				}
		    	else
		    	{
		    		printf("\n ---> INCORRECT ACCOUNT NUMBER/NAME...  \n");
		    		printf(" --> Enter 7 for retry for login...\n");
		    		scanf("%d", &ml);
		    		if(ml==7)
		    		{
		    		    goto u;
				    }
				}
				printf("\n\n---> Here, are the details/balance of your bank account..\n\n");
				printf("** NAME : %s\n", ghost);
				printf("** ACCOUNT NO. : %s\n", how);
				printf("** ACC. BALANCE : rs. 500\n");
				break;
		    }
		    break;
		case 3:
			printf("***Enter the following details required for transfer of money\n\n");
			x:
			printf("--> NAME: ");
			scanf("%s", &ma);
			printf("--> ACCOUNT NO: ");
			scanf("%s", &nmb);
			printf("--> PASSWORD:  ");
			scanf("%s", &pas);
			if(strcmp(ma,"saksham")==0 || strcmp(nmb,"123456")==0 || strcmp(pas,"saksham@1")==0)
			{
				printf("\n*****  YOU, HAVE SUCCESSFULLY LOGINED IN YOUR ACCOUNT *****\n");
				printf("        ***  NOW, YOU CAN TRANSFER THE MONEY   ***\n"); 				
			}
			else
			{
				printf("     --->  INCORRECT NAME/PASSWORD/ACCUNT NUMBER <---\n             **  PRESS 2 TO RETRY  **\n");
				scanf("%d", &bh);
				if (bh==2)
				{
					goto x;
				}
				
			}
			printf("\n--> Enter the details of the reveiver person.....\n");
			printf("\n---> NAME:  ");
			scanf("%s", &ma);
			printf("---> ACCOUNT NUMBER: ");
			scanf("%s",&nmb);
			printf("---> SELECT THE WAY FOR MONEY TRANSFER...\n");
			printf("** UPI/NEFT/RTGS **\n");
			scanf("%s", &gst);
			if (strcmp(gst,"UPI")==0)
			{
				printf("\n--> You, can transfer max 20000 through this method..\n");
				e:
				printf("\n**  Enter the amount you want to transfer :  ");
				scanf("%d", &se);
				if (se>20000)
				{
					printf("\n--> You have crossed the limit of amount...\n");
					printf("\n--> Enter 8 to re-enter the amount  ");
					scanf("%d", &hj);
					if (hj==8)
					{
						goto e;
					}
				}
				else
				{
					printf("***** SUCCESSFULLY TRANSFERRED *****");
				}
			}
			else if (strcmp(gst,"NEFT")==0)
			{
				printf("\n--> You, can transfer max 200000 through this method..\n");
				d:
				printf("\n**  Enter the amount you want to transfer :  ");
				scanf("%d", &se);
				if (se>200000)
				{
					printf("\n--> You have crossed the limit of amount...\n");
					printf("\n--> Enter 8 to re-enter the amount  ");
					scanf("%d", &hj);
					if (hj==8)
					{
						goto d;
					}
				}
				else
				{
					printf("***** SUCCESSFULLY TRANSFERRED *****");
				}
			}
			else if (strcmp(gst,"RTGS")==0)
			{
				printf("\n--> You, can transfer max 100000 through this method..\n");
				S:
				printf("\n**  Enter the amount you want to transfer :  ");
				scanf("%d", &se);
				if (se>100000)
				{
					printf("\n--> You have crossed the limit of amount...\n");
					printf("\n--> Enter 8 to re-enter the amount  ");
					scanf("%d", &hj);
					if (hj==8)
					{
						goto S;
					}
				}
				else
				{
					printf("          ***** SUCCESSFULLY TRANSFERRED *****");
				}
			}
	}
	printf("\n\n\n            ***** THANKYOU FOR VISITING *****");
	getch();

}	
