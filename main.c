
#include<stdio.h>

int main()
{

    float amt,debitamt;
    char ch;
    printf("Enter mpesa amount\n");
    scanf("%f",&amt);
    printf("enter\n S for send money\n W for withdraw cash\n B for buy airtime\n L for loans and saving\n M for lipa na mpesa\n A for my account\n");
    scanf("\n%c",&ch);
    switch(ch)
    {
    case'S':
        printf("enter phone number\n");
        scanf("%d");
        printf("enter debit amount\n");
        scanf("%f",& debitamt);
        printf("enter mpesa pin\n");
        scanf("%d");
        if(amt>=debitamt)
        {
            amt=amt-debitamt;
            printf("new mpesa balance is %f",amt);
        }
        else
        {
            printf("insufficient amount");
        }
        break ;
    case'W':
        printf("enter agent number\n");
        scanf("%d");
        printf("enter amount\n");
        scanf("%d",&amt);
        printf("enter bank pin\n");
        scanf("%d");
        printf("withdrawal of money from agent is successful. your new balance is %f",&amt);
        break ;
    case'B':
            printf("enter phone number\n");
        scanf("%d");
        printf("enter amount\n");
        scanf("%f",&debitamt);
        printf("enter mpesa pin\n");
        scanf("%d");
        if(amt>=debitamt)
        {
            amt=amt-debitamt;
            printf("confirmed.\nYou bought an airtime for ksh%f",debitamt);
            printf(" new mpesa balance is ksh%f",amt);
        }
        else
        {
            printf("Dear customer, you have insufficient balance on MPESA. Kindly deposit funds on MPESA to buy a bundle or Okoa a bundle from as low as Ksh20. Dial *131#\n");
        }
        break ;
    case'L':
        printf("type either of the two\n0 for mshwari\n4 for kcb mpesa\n");
        scanf("%d");
        if(4)
        {
            printf("open an account\n");
        }
        else
        {
            printf("activate");
        }
        break;
    case'M':
        printf("enter\n 1 for paybill\n2 for buy goods and services\n 3 for pochi la biashara\n");
        scanf("%d");
        switch (ch)
        {
        case'1':
                printf("enter account number\n");
            scanf("%f");
            printf("enter amount\n");
            scanf("%f",amt);
            printf("enter mpesa pin\n mpesa pin=****");
        case'2':
                printf("enter till\n");
            scanf("%f");
            printf("enter amount\n");
            scanf("%f",amt);
            printf("enter mpesa pin\n mpesa pin=****");
        case'3':
                printf("enter phone number\n");
            scanf("%f");
            printf("enter amount\n");
            scanf("%f",amt);
            printf("enter mpesa pin\n mpesa pin=****");
        }
        break;
    case'A':
            printf("check account balance\n");
        scanf("\n%c",& ch);
        printf(" Confirmed. Your account balance was: M-PESA Account : Ksh %f",amt);
        printf(" on 25/2/23 at 3:19 PM. Dial *234*0# OK to check your Fuliza limit & complete your M-PESA transaction.");
    default:
        printf("invalid input");
   break;
    }

    return 0;
}

