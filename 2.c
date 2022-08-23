// 2. Write a function to find the smallest number from the given array of any size. (TSRS)

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
    printf("The smallest number = %d",fun(a,l));

    return 0;
}

int fun(int b[],int N)
{
    int min=b[0],i;

    for (i = 1; i <=N-1; i++)
    {
        if(min < b[i]);
        else
            min=b[i];
    }
    return min;
}
