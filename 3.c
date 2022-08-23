// 3. Write a function to sort an array of any size. (TSRS)

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
    sortFun(a,l);
    for (i = 0; i <= l-1; i++)
    {
        printf(" %d ",a[i]);
    }
    
    return 0;
}

void sortFun(int b[],int N)
{
    int r,i;
    for ( r = 1; r<=N-1; r++)
    
        for ( i = 0; i <=N-1-r; i++)
        
            if(b[i]>b[i+1])
            {
                int temp;
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            } 
}