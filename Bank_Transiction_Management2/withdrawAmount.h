#ifndef WITHDRAWAMOUNT_H_INCLUDED
#define WITHDRAWAMOUNT_H_INCLUDED

int wAmount;
int withdrawAmount(){

    printf("\nEnter Amount To Withdraw ");
    scanf("%d", &wAmount);

    if(wAmount <= totalAmount){

        totalAmount -= wAmount;
        return (totalAmount);
    }
    else{
        printf("\nnot Enough Amount To Withdraw");
    }
}

#endif // WITHDRAWAMOUNT_H_INCLUDED
