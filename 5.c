/* 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element. */

#include<stdio.h>
int main()
{
    int l,r;
    printf("Enter the length of the array: ");
    scanf("%d",&l);

    int a[l],i;
    printf("Enter the %d elments of array: ",l);
    for (i = 0; i <=l-1; i++)
        scanf("%d",&a[i]);
    
    r=Adj_dupl(a,l);
    if(r==0)
        printf("There is no adjacent duolicate value");
    else
        printf("Duplicate value  = %d",r);


    return 0;
}
int Adj_dupl(int b[],int N)
{
    int i;
    for(i=0;i<=N-2;i++)
        if(b[i]==b[i+1])
            break;
    if(i==N)
        return 0;
    else
        return b[i];
}