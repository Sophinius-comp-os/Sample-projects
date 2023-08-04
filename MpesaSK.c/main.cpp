#include <stdio.h>

int main()
{
    float amt, debitamt;
    char ch;

    printf("Enter M-Pesa amount: ");
    scanf("%f", &amt);

    printf("Enter:\nS for send money\nW for withdraw cash\nB for buy airtime\nL for loans and saving\nM for lipa na M-Pesa\nA for my account\n");
    scanf(" %c", &ch); // Note the space before %c to consume any leftover newline character

    switch (ch)
    {
    case 'S':
        printf("Enter phone number: ");
        int phoneNumber;
        scanf("%d", &phoneNumber);

        printf("Enter debit amount: ");
        scanf("%f", &debitamt);

        printf("Enter M-Pesa pin: ");
        int mpesaPin;
        scanf("%d", &mpesaPin);

        if (amt >= debitamt)
        {
            amt -= debitamt;
            printf("New M-Pesa balance is %f\n", amt);
        }
        else
        {
            printf("Insufficient amount\n");
        }
        break;

    case 'W':
        printf("Enter agent number: ");
        int agentNumber;
        scanf("%d", &agentNumber);

        printf("Enter amount: ");
        scanf("%f", &amt);

        printf("Enter bank pin: ");
        int bankPin;
        scanf("%d", &bankPin);

        printf("Withdrawal of money from agent is successful. Your new balance is %f\n", amt);
        break;

    case 'B':
        printf("Enter phone number: ");
        scanf("%d", &phoneNumber);

        printf("Enter amount: ");
        scanf("%f", &debitamt);

        printf("Enter M-Pesa pin: ");
        scanf("%d", &mpesaPin);

        if (amt >= debitamt)
        {
            amt -= debitamt;
            printf("Confirmed.\nYou bought airtime for Ksh %f. New M-Pesa balance is Ksh %f\n", debitamt, amt);
        }
        else
        {
            printf("Dear customer, you have insufficient balance on M-Pesa. Kindly deposit funds on M-Pesa to buy a bundle or Okoa a bundle from as low as Ksh 20. Dial *131#\n");
        }
        break;

    case 'L':
        int option;
        printf("Type either of the two\n0 for mshwari\n4 for kcb M-Pesa\n");
        scanf("%d", &option);
        if (option == 4)
        {
            printf("Open an account\n");
        }
        else
        {
            printf("Activate\n");
        }
        break;

    case 'M':
        int mpesaOption;
        printf("Enter:\n1 for paybill\n2 for buy goods and services\n3 for pochi la biashara\n");
        scanf("%d", &mpesaOption);

        switch (mpesaOption)
        {
        case 1:
            printf("Enter account number: ");
            int accountNumber;
            scanf("%d", &accountNumber);

            printf("Enter amount: ");
            scanf("%f", &amt);

            printf("Enter M-Pesa pin (M-Pesa pin=****): ");
            scanf("%d", &mpesaPin);
            break;

        case 2:
            int tillNumber;
            printf("Enter till: ");
            scanf("%d", &tillNumber);

            printf("Enter amount: ");
            scanf("%f", &amt);

            printf("Enter M-Pesa pin (M-Pesa pin=****): ");
            scanf("%d", &mpesaPin);
            break;

        case 3:
            printf("Enter phone number: ");
            scanf("%d", &phoneNumber);

            printf("Enter amount: ");
            scanf("%f", &amt);

            printf("Enter M-Pesa pin (M-Pesa pin=****): ");
            scanf("%d", &mpesaPin);
            break;

        default:
            printf("Invalid M-Pesa option\n");
            break;
        }
        break;

    case 'A':
        printf("Check account balance\n");
        scanf(" %c", &ch); // Note the space before %c to consume any leftover newline character
        printf("Confirmed. Your account balance was: M-PESA Account: Ksh %f on 25/2/23 at 3:19 PM. Dial *234*0# OK to check your Fuliza limit & complete your M-PESA transaction.\n", amt);
        break;

    default:
        printf("Invalid input\n");
        break;
    }

    return 0;
}
