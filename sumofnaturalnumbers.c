#include<stdio.h>
#include<conio.h>

 int main()
 {
    int num,sum=0,i;
    clrscr();
    printf("enter a positive number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        sum += i;
    }

    printf("sum of first %d natural number = %d",num,sum);
    getch();
    return 0;
 }