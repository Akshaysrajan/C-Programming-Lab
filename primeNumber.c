#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int num,c,flag =0;

    printf("Enter a number : ");
    scanf("%d",&num);

    if (num <= 1)
    {
        printf("The number is neither prime nor composite");
    }

    c = 2;
    while (c*c <= num)
    {
        if (num%c == 0)
        {
            flag = 1;
            break;
        }
        c += 1;
    }
    
    if (flag == 0)
    {
        printf("Its a prime number");
    }else{
        printf("Its not a prime");
    }
    getch();
    return 0;
}