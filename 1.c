// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>
int main()
{
    int l;
    printf("Enter the length of the array: ");
    scanf("%d",&l);

    int a[l],i;
    printf("Enter the %d numbers: ",l);
    for (i = 0; i <=l-1; i++)
        scanf("%d",&a[i]);
    printf("The greatest number = %d",fun(a,l));

    return 0;
}

int fun(int b[],int N)
{
    int max=b[0],i;

    for (i = 1; i <=N-1; i++)
    {
        if(max > b[i]);
        else
            max=b[i];
    }
    return max;
}
