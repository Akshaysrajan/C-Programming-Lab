#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[50],i,num,key;
    int flag = 0;

    printf("enter the size of the array:");
    scanf("%d",&num);

    printf("enter the %d elements in array : \n",num);

    for ( i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("enter the key to be searched : \n ");
    scanf("%d",&key);

    for ( i = 0; i < num; i++)
    {
        if (arr[i]==key)
        {
            flag=1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("key not found");
    }
    else{
        printf("key found %d position",i);
    }


    getch();
    return 0;
}