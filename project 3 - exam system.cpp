#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char exam[100];
	int f , a=0, b=0;
	printf("                      ***** WELCOME TO SAKSHAM EXAMINATION SYSTEM *****\n\n");
	printf("---> Here, you can have the following examination paper...\n** JEE\n** NEET\n** UPSC\n ");
	printf("\n--> Enter your choice :  ");
	scanf("%s", &exam);
	if (strcmp(exam, "JEE")==0)
	{
		printf("\n                     *** HERE, IS YOUR PAPER ***\n\n");
		printf("1. What is the electrical analogue of the information produced by the source?\n a) Attenuation\n b) Amplification\n c) Signal\n d) Modulation");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    if (f==1 || f==4)
	    {
		printf("     -->  correct  <--");
		a=a+1;
	    }
	    else if (f==2 || f==3)
	    {
		printf("     -->  incorrect  <--");
		b=b+1;
        }
	    printf("\n\n2. What refers to the band of frequencies of the original signal? \n a) Range \n b) Broadband \n c) Bandwidth \n d) Baseband");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    	if (f==1 || f==4)
	{
		printf("     -->  correct  <--");
		a=a+1;
	}
	else if (f==2 || f==3)
	{
		printf("     -->  incorrect  <--");
		b=b+1;
    }
	    printf("\n\n3. ‘X’ refers to the frequency range over which equipment operates or the range over which the frequencies in a signal vary. Identify ‘X’. \n a) Range \n b) Repeater \n c) Bandwidth \n d) Baseband");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    	if (f==1 || f==4)
	{
		printf("     -->  correct  <--");
		a=a+1;
	}
	else if (f==2 || f==3)
	{
		printf("     -->  incorrect  <--");
		b=b+1;
    }
	    printf("\n\n4. What is the loss of strength of a signal during its propagation called? \n a) Attenuation \n b) Amplification \n c) Bandwidth \n d) Noise");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    	if (f==1 || f==4)
	{
		printf("     -->  correct  <--");
		a=a+1;
	}
	else if (f==2 || f==3)
	{
		printf("     -->  incorrect  <--");
		b=b+1;
    }
	    printf("\n\n    **     YOUR RESULT     ** ");
	    printf("\n\n  **  CORRECT ANSWERS : %d ", a);
	    printf("\n  **  INCORRECT ANSWER : %d", b);
	    printf("\n\n YOUR PERCENTAGE : %d percent", a*25);
	}
	if (strcmp(exam, "NEET")==0)
	{
		printf("\n                     *** HERE, IS YOUR PAPER ***\n\n");
		printf("\n\nQ1. Endosperm development further leads to the development of which of the following? \na) nuclei\nb) embryo\nc) pollen tube\nd) micropyle");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    if (f==1 || f==4)
	    {
		printf("     -->  correct  <--");
		a=a+1;
	    }
	    else if (f==2 || f==3)
	    {
		printf("     -->  incorrect  <--");
		b=b+1;
        }
	    printf("\n\nQ2. Which of the following undergoes successive nuclear divisions to give rise to free nuclei.\na) CNS\nb) SNE\nc) SEN\nd) PEN");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    	if (f==1 || f==4)
	{
		printf("     -->  correct  <--");
		a=a+1;
	}
	else if (f==2 || f==3)
	{
		printf("     -->  incorrect  <--");
		b=b+1;
    }
	    printf("\n\nQ3. Coconut water is referred to which type of endosperm development?\na)PEN\nb) cellular\nc) free-nuclear\nd) nucleid");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    	if (f==1 || f==4)
	{
		printf("     -->  correct  <--");
		a=a+1;
	}
	else if (f==2 || f==3)
	{
		printf("     -->  incorrect  <--");
		b=b+1;
    }
	    printf("\n\nQ4. Which of the following is the main function of endosperm?\na) Transduction\nb) Protection\nc) Respiration\nd) Nourishment ");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    	if (f==1 || f==4)
	{
		printf("     -->  correct  <--");
		a=a+1;
	}
	else if (f==2 || f==3)
	{
		printf("     -->  incorrect  <--");
		b=b+1;
    }
	    printf("\n\n    **     YOUR RESULT     ** ");
	    printf("\n\n  **  CORRECT ANSWERS : %d ", a);
	    printf("\n  **  INCORRECT ANSWER : %d", b);
	    printf("\n\n YOUR PERCENTAGE : %d percent", a*25);
	}
	if (strcmp(exam, "UPSC")==0)
	{
		printf("\n                     *** HERE, IS YOUR PAPER ***\n\n");
		printf("\n\nQ. The mutual legal assistance treaty in news is related to:\na) Nuclear agreement between countries for effective transfer for civil purposes\nb)Agreement between India and USA for Homeland security\nc) Gathering and exchanging information in an effort to enforce public or criminal laws\nd) Extradition treaty signed foreign countries");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    if (f==1 || f==4)
	    {
		printf("     -->  correct  <--");
		a=a+1;
	    }
	    else if (f==2 || f==3)
	    {
		printf("     -->  incorrect  <--");
		b=b+1;
        }
	    printf("\n\nQ. The term Troika had been frequently used during the Greek Crisis. This does not include:\na) European Commission (EC)\nb) European Central Bank (ECB)\nc) World bank\nd) International Monetary Fund (IMF)");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    	if (f==1 || f==4)
	{
		printf("     -->  correct  <--");
		a=a+1;
	}
	else if (f==2 || f==3)
	{
		printf("     -->  incorrect  <--");
		b=b+1;
    }
	    printf("\n\nQ.The place of origin of red gram is\n a) America\n b) South Africa\n c) India\n d) Egypt");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    	if (f==1 || f==4)
	{
		printf("     -->  correct  <--");
		a=a+1;
	}
	else if (f==2 || f==3)
	{
		printf("     -->  incorrect  <--");
		b=b+1;
    }
	    printf("\n\nQ. Green revolution is related to\n a) Millet production\n b) Wheat production\n c) Pulse production\n d) Oilseed production ");
	    printf("\n--> ANSWER :  ");
	    scanf("%d", &f);
	    	if (f==1 || f==4)
	{
		printf("     -->  correct  <--");
		a=a+1;
	}
	else if (f==2 || f==3)
	{
		printf("     -->  incorrect  <--");
		b=b+1;
    }
	    printf("\n\n    **     YOUR RESULT     ** ");
	    printf("\n\n  **  CORRECT ANSWERS : %d ", a);
	    printf("\n  **  INCORRECT ANSWER : %d", b);
	    printf("\n\n YOUR PERCENTAGE : %d percent", a*25);
	}
	getch();
}
