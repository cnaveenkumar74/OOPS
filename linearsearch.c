#include<stdio.h>

int main()
{
    int a[10] = {1,3,4,5,6,7,8};
    int b = 5,flag = 0;
    for(int i = 0;i<6;i++)
    {
        if(b==a[i])
        {
            printf("Element found :)");
            flag++;
        }
    }
    if(flag==0)
     printf("Element Not found :(");
    return 0;
}