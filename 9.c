/* 9. Write a function in C to merge two arrays of the same size sorted in descending order. */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the same length for both the array: ");
    scanf("%d",&n);

    int a[n],z[n],i;
    printf("Enter the %d elments of 1st array: ",n);
    for (i = 0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter the %d elments of 2nd array: ",n);
    for (i = 0; i<n; i++)
        scanf("%d",&z[i]);
    fun(a,z,n);

    return 0;
}
void fun(int b[],int c[],int N)
{
    int d[2*N],i,r;
    
    // Transfering all the elements of both the array b[N] & c[N] to d[N] array
    for ( i = 0; i < 2*N; i++)
    {
        if(i<2*N/2)
            d[i]=b[i];
        else
            d[i]=c[i-N];
    }

    // Applying Bubble sort
    for ( r = 0; r <= 2*N-1; r++)
        for ( i = 0; i <= 2*N-1-r; i++)
            if(d[i]<d[i+1])
            {
                int temp;
                temp=d[i];
                d[i]=d[i+1];
                d[i+1]=temp;
            }
    
    // Printing the arayy d[N]
    for (i = 0; i<2*N; i++)
        printf("%d ",d[i]);
}