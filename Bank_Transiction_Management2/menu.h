#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

int menu(){
int chr;

printf("\n1. Deposit Amount:");
printf("\n2. Withdraw Amount:");
printf("\n3. Transfer Amount:");
printf("\n4. History:");
printf("\n5. Exit:");

printf("\nWhat you want...");
scanf("%d",&chr);

return (chr);


}


#endif // MENU_H_INCLUDED
