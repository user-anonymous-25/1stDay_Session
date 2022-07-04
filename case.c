#include <stdio.h>
#include <conio.h>
int main()
{
    int choice, i, n, rem, sum = 0, rev = 0, count = 0;
    
    printf("Press 1.Reverse a number\n 2.Find the sum of individual number\n 3.Check for prime\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    {
        printf("Enter the Number:");
        scanf("%d", &n);
        while (n > 0)
        {
            rem = n % 10;
            rev = rev *10+rem;
            n = n / 10;
        }
        printf("Reverse number is:%d",rev);
        break;
    }
    case 2:
    {
        printf("Enter Number:");
        scanf("%d", &n);
        while (n!= 0)
        {
            rem = n % 10;
            n = n / 10;
            sum = sum + rem;
        
        }
        printf("Sum of individual number is:%d",sum);
        break;
    }
    case 3:
    {
        printf("Enter Number:");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("prime number");
        }
        else
        {
            printf("Not Prime Number\n");
        }
        break;
    }
    
    default:
    {
        printf("Enter a valid input");
    }
    }
    return 0;
}