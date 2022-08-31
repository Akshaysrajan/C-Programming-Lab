#include<stdio.h>
#include<conio.h>

int main()
{
    int num,sum=0,temp,rem;

    printf("enter a three digit number : ");
    scanf("%d",&num);
    temp = num;

    while(temp!=0){
        rem = temp%10;
        sum = sum + rem*rem*rem;
        temp = temp/10;
    }
    if (num == sum)
    {
        printf("Amstrong number");
    }
    else{
        printf("not an Amstrong number");
    }
    getch();
    return 0 ;
}