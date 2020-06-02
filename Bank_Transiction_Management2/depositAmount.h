#ifndef DEPOSITAMOUNT_H_INCLUDED
#define DEPOSITAMOUNT_H_INCLUDED

int totalAmount, dAmount;
int depositAmount(){
    //int dAmount;
    printf("\nEnter Amount To Deposit ");
    scanf("%d", &dAmount);

    totalAmount += dAmount;

    return (totalAmount);
}

#endif // DEPOSITAMOUNT_H_INCLUDED
