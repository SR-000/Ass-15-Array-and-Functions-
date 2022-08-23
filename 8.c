// 8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);

    int a[n],i;
    printf("Enter the %d elments of array: ",n);
    for (i = 0; i<n; i++)
        scanf("%d",&a[i]);
    
    printUnique(a,n);

    return 0;
}
void printUnique(int b[],int N)
{
    int i,j;
    printf("All unique elements = ");
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            if(i==j)
               j++;
            if(b[i]==b[j])
                break;  
        }
        if(j>4)
            printf("%d ",b[i]); 
    }
    
}