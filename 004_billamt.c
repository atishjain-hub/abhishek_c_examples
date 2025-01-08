

//program to calculate bill for two choclates

# include <stdio.h>
int main()
{
    int kitkat_price,dairymilk_price,bill_amt;  //declaration
    kitkat_price=dairymilk_price=bill_amt=0; //initialization


    printf("Enter Price of Kitkat:");
    scanf("%d",&kitkat_price);

    printf("Enter Price of Dairy Milk:");
    scanf("%d",&dairymilk_price);

    bill_amt=kitkat_price+dairymilk_price;

    printf("Bill Amount is: Rs.%d /-",bill_amt);

    return 0;
}
