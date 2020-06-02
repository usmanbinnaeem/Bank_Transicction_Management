#ifndef HISTORY_H_INCLUDED
#define HISTORY_H_INCLUDED

int totalAmount, totalDeposit, totalWithdraw = 0, totalTransfer = 0;
int accountNumber;
char name[50];

int history(){

printf("\nTotal Amount is : %d", totalAmount);
printf("\nTotal Deposit Amount is : %d", totalDeposit);
printf("\nTotal Withdraw Amount is : %d", totalWithdraw);
printf("\nTotal Transfer Amount is : %d", totalTransfer);
}

int accountHistory(){

printf("\n%s", name);
printf("\n%d", accountNumber);
printf("\nTotal Amount is : %d", totalAmount);
printf("\nTotal Deposit Amount is : %d", totalDeposit);
printf("\nTotal Withdraw Amount is : %d", totalWithdraw);
printf("\nTotal Transfer Amount is : %d", totalTransfer);
}

#endif // HISTORY_H_INCLUDED
