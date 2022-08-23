/* 6. Write a function in C to read n number of values in an array and display it in reverse order. */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);

    int a[n],i;
    printf("Enter the %d elments of array: ",n);
    for (i = 0; i <=n-1; i++)
        scanf("%d",&a[i]);
    
    printf("Reverse of the array ");
    displayReverseArray(a,n);
    return 0;
}
void displayReverseArray(int b[],int N)
{
    int i;
    if (N%2==0)
        for ( i = 0; i < N/2; i++)
        {
            int temp;
            temp=b[N-i-1];
            b[N-i-1]=b[i];
            b[i]=temp;
        }
    else
        for ( i = 0; i < N/2; i++)
        {
            int temp;
            temp=b[N-i-1];
            b[N-i-1]=b[i];
            b[i]=temp;
        }
    
    for ( i = 0; i < N; i++)
    {
        printf("%d ",b[i]);
    }
    
        
}