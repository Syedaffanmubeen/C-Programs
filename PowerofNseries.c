// Description : 
// You have to read base value and exponential value from user and print the power of N series.

// Sample Execution : 

// Test case 1 : 
// Enter the base value : 2
// Enter the exponential value : 5
// 1 2 4 8 16 32

// Test case 2 :
// Enter the base value : 3
// Enter the exponential value : 3
// 1 3 9 27

#include<stdio.h>
int main()
{
    int n,m,result = 1;
    printf("Enter the base value : ");
    scanf("%i",&n);
    printf("Enter the exponential value : ");
    scanf("%d",&m);
    for(int i = 0;i<=m;i++)
    {
        printf("%d ",result);
        result *= n;
    }
    printf("\n");
}