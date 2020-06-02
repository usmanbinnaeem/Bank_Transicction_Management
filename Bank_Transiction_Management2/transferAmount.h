#ifndef TRANSFERAMOUNT_H_INCLUDED
#define TRANSFERAMOUNT_H_INCLUDED

int tAmount;
int transferAmount(){

    printf("\nEnter Amount To transfer ");
    scanf("%d", &tAmount);

    if(tAmount <= totalAmount){

        totalAmount -= tAmount;
        return (totalAmount);
    }
    else{
        printf("\nnot Enough Amount To transfer");
    }
}

#endif // TRANSFERAMOUNT_H_INCLUDED
