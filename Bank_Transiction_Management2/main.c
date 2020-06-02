#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "menu.h"
#include "depositAmount.h"
#include "withdrawAmount.h"
#include "transferAmount.h"
#include "history.h"

//int totalAmount, totalDeposit, totalWithdraw = 0, totalTransfer = 0;

int menu();
int depositAmount();
int withdrawAmount();
int transferAmount();
int history();
int accountHistory();
int accountNumber;
char name[50];

int main()
{
    system("cls");
    printf("Enter Your Name: ");
    gets(name);
    printf("Enter your Account Number: ");
    scanf("%d", &accountNumber);

    while(1){
    system("cls");
    switch(menu()){

        case 1:
            depositAmount();
            printf("\nTotal Amount = %d", totalAmount);
            totalDeposit += dAmount;
            break;
        case 2:
            withdrawAmount();
            printf("\nTotal Amount = %d", totalAmount);

            if( wAmount <= totalAmount){

                totalWithdraw += wAmount;
            }
            break;
        case 3:
            transferAmount();
            printf("\nTotal Amount = %d", totalAmount);

            if( tAmount <= totalAmount) {

                totalTransfer += tAmount;
            }
            break;
        case 4:
            history();
            break;
        case 5:
            system("cls");
            accountHistory();
            getch();
            exit(0);
        default:
            printf("\nPlease select Character between 1 to 5");
    }
     getch();
    }


    return 0;
}

