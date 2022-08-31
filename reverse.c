#include<stdio.h>
#include<conio.h>

int main()
{
    int num,i,rem,rev=0;

    printf("enter a number : ");
    scanf("%d",&num);


    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }

    printf("Reverse = [%d]",rev);
    getch();
    return 0;

}