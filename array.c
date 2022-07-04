#include<stdio.h>
#include<conio.h>
int main()
{
    int j,i,n,a[100],count=0;
    printf("Enter the element of an array\n");
    scanf("%d",&n);
    printf("Enter %d element\n",n);
    for(i=0;i<=n-1;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("The element of an array are:");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("Array contaning prime numbers:\n");
            printf("%d\t",a[i]);
        }
    }
    return 0;
}