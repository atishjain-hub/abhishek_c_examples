
//hours and minutes example

# include <stdio.h>
int main()
{
    int tm,h,m;
    tm=h=m=0;

    printf("Enter Total Time in minutes:");
    scanf("%d",&tm);

    h=tm/60; //quotient
    m=tm%60; //remainder

    printf("Time is %d hrs and %d mins...",h,m);
    return 0;
}
