#include<stdio.h>
#include<conio.h>

int main()
{
    int n1,n2,n3;
    

    printf("enter 3 numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if (n1>n2 && n1>n3)
    {
        printf("\n %d is largest among the three numbers",n1);
    }
    else if (n2>n1 && n2>n3)
    {
        printf("\n %d is the largest among the three numbers",n2);
    }
    else{
        printf("\n %d is the largest of the three numbers",n3);
    }

    getch();
    return 0;
    
}