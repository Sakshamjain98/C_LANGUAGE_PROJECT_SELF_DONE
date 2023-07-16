#include <stdio.h>
#include<conio.h>
#include<string.h>
main() 
{
	char payment[100],name[100], phno[100], id[100], pass[100], place[100];
    int totalTickets = 100;
    int availableTickets = totalTickets;
    int requestedTickets;
    printf("         ******  RAILWAY TICKET COUNTER  ******\n");
    printf("  ******  Welcome to the Railway Ticket Counter  ******\n");
    printf("\n\n--> AVAILABLE DESTINATIONS :\n 1) RISHIKESH = 10:00A.M.\n 2) MATHURA = 12:00A.M.\n 3) TIJARAJI = 2:00P.M.");
    
    printf("\n\n--> Select the destination place u wants to go :\n ");
    scanf("%s", &place);

    if (strcmp(place,"RISHIKESH")==0)
    {
    
	    while(1)
	    {
        printf("\n  -->  Available Tickets: %d\n", availableTickets);
        printf("\n -->  Enter the number of tickets you want to purchase (Enter 0 to exit): ");
        scanf("%d", &requestedTickets);

        if (requestedTickets == 0)
		{
            printf("     --->  Thank you for visiting.  <---\n");
            break;
        }
       
        if (requestedTickets > availableTickets) 
		{
            printf("   --->  Insufficient tickets available. Please try again.  <---\n");
            
        } 
		else 
		{
            printf(" \n  ** Processing %d ticket(s).\n  ** Please make the payment.\n", requestedTickets);
            // Add code for payment processing here
            availableTickets -= requestedTickets;
            printf("\n--> YOU CAN PAY ONLY WITH CASH OR UPI... \n --> SELECT THE WAY OF PAYMENT ACCORDING TO YOUR CHOICE : " );
            scanf("%s", &payment);
            if (strcmp(payment,"UPI")==0)
            {
            	printf("\n   --> ENTER YOU NAME :");
            	scanf("%s", &name );
            	printf("\n   --> ENTER YOUR MOBILE NUMBER :");
            	scanf("%s", &phno);
            	printf("\n   --> ENTER YOUR UPI ID : ");
            	scanf("%s", &id);
            	printf("\n   --> PASSWORD : ");
            	scanf("%s", &pass);
            	 printf("   --->  Payment successful.   <---\n\n*** %d ticket(s) issued.\n", requestedTickets);
            	printf("\n\n --> HERE , IS YOUR BILL : \n * NAME : %s\n * PHONE NO. : %s\n * AMOUNT PAYABLE : %d",name,phno,500*requestedTickets);
		
			}
			else if (strcmp(payment,"CASH")==0)
			{
				printf("\n   --> ENTER YOU NAME :");
            	scanf("%s", &name );
            	printf("\n   --> ENTER YOUR MOBILE NUMBER :");
            	scanf("%s", &phno);
            	 printf("   --->  Payment successful.   <---\n\n*** %d ticket(s) issued.\n", requestedTickets);
            	printf("\n\n --> HERE , IS YOUR BILL : \n * NAME : %s\n * PHONE NO. : %s\n * AMOUNT PAYABLE : %d",name,phno,500*requestedTickets);
			}
			break;
            
        }
    
}
printf("\n\n     ***  THANKYOU FOR VISITING  ***");
}
if (strcmp(place,"MATHURA")==0)
{
 while(1)
	    {
        printf("\n  -->  Available Tickets: %d\n", availableTickets);
        printf("\n -->  Enter the number of tickets you want to purchase (Enter 0 to exit): ");
        scanf("%d", &requestedTickets);

        if (requestedTickets == 0)
		{
            printf("     --->  Thank you for visiting.  <---\n");
            break;
        }
       
        if (requestedTickets > availableTickets) 
		{
            printf("   --->  Insufficient tickets available. Please try again.  <---\n");
            
        } 
		else 
		{
            printf(" \n  ** Processing %d ticket(s).\n  ** Please make the payment.\n", requestedTickets);
            // Add code for payment processing here
            availableTickets -= requestedTickets;
            printf("\n--> YOU CAN PAY ONLY WITH CASH OR UPI... \n --> SELECT THE WAY OF PAYMENT ACCORDING TO YOUR CHOICE : " );
            scanf("%s", &payment);
            if (strcmp(payment,"UPI")==0)
            {
            	printf("\n   --> ENTER YOU NAME :");
            	scanf("%s", &name );
            	printf("\n   --> ENTER YOUR MOBILE NUMBER :");
            	scanf("%s", &phno);
            	printf("\n   --> ENTER YOUR UPI ID : ");
            	scanf("%s", &id);
            	printf("\n   --> PASSWORD : ");
            	scanf("%s", &pass);
            	 printf("   --->  Payment successful.   <---\n\n*** %d ticket(s) issued.\n", requestedTickets);
		
			}
				else if (strcmp(payment,"CASH")==0)
			{
				printf("\n   --> ENTER YOU NAME :");
            	scanf("%s", &name );
            	printf("\n   --> ENTER YOUR MOBILE NUMBER :");
            	scanf("%s", &phno);
            	 printf("   --->  Payment successful.   <---\n\n*** %d ticket(s) issued.\n", requestedTickets);
            	printf("\n\n --> HERE , IS YOUR BILL : \n * NAME : %s\n * PHONE NO. : %s\n * AMOUNT PAYABLE : %d",name,phno,500*requestedTickets);
			}
			break;
            
        }
    
}
printf("\n\n     ***  THANKYOU FOR VISITING  ***");	
}
if (strcmp(place,"TIJARAJI")==0)
{
	 while(1)
	    {
        printf("\n  -->  Available Tickets: %d\n", availableTickets);
        printf("\n -->  Enter the number of tickets you want to purchase (Enter 0 to exit): ");
        scanf("%d", &requestedTickets);

        if (requestedTickets == 0)
		{
            printf("     --->  Thank you for visiting.  <---\n");
            break;
        }
       
        if (requestedTickets > availableTickets) 
		{
            printf("   --->  Insufficient tickets available. Please try again.  <---\n");
            
        } 
		else 
		{
            printf(" \n  ** Processing %d ticket(s).\n  ** Please make the payment.\n", requestedTickets);
            // Add code for payment processing here
            availableTickets -= requestedTickets;
            printf("\n--> YOU CAN PAY ONLY WITH CASH OR UPI... \n --> SELECT THE WAY OF PAYMENT ACCORDING TO YOUR CHOICE : " );
            scanf("%s", &payment);
            if (strcmp(payment,"UPI")==0)
            {
            	printf("\n   --> ENTER YOU NAME :");
            	scanf("%s", &name );
            	printf("\n   --> ENTER YOUR MOBILE NUMBER :");
            	scanf("%s", &phno);
            	printf("\n   --> ENTER YOUR UPI ID : ");
            	scanf("%s", &id);
            	printf("\n   --> PASSWORD : ");
            	scanf("%s", &pass);
            	 printf("   --->  Payment successful.   <---\n\n*** %d ticket(s) issued.\n", requestedTickets);
		
			}
				else if (strcmp(payment,"CASH")==0)
			{
				printf("\n   --> ENTER YOU NAME :");
            	scanf("%s", &name );
            	printf("\n   --> ENTER YOUR MOBILE NUMBER :");
            	scanf("%s", &phno);
            	 printf("   --->  Payment successful.   <---\n\n*** %d ticket(s) issued.\n", requestedTickets);
            	printf("\n\n --> HERE , IS YOUR BILL : \n * NAME : %s\n * PHONE NO. : %s\n * AMOUNT PAYABLE : %d",name,phno,500*requestedTickets);
			}
			break;
            
        }
    
}
printf("\n\n     ***  THANKYOU FOR VISITING  ***");
}
    getch();
}

