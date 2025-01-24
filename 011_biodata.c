
# include <stdio.h>
int main()
{
    char fname[50];
    char gender;
    int age;

    printf("Enter Full name:");
    scanf("%[^\n]",&fname);

    printf("Enter ur Gender(M/F):");
    fflush(stdin); //cleans the keyboard buffer
    scanf("%c",&gender);

    printf("Enter ur Age:");
    scanf("%d",&age);

    printf("\nBio - Data");
    printf("\n-----------");
    printf("\nFull name:%s",fname);
    printf("\nGender:%c",gender);
    printf("\nAge:%d",age);

    return 0;
}
