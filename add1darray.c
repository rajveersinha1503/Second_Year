#include <stdio.h>
int add(int a[],int n);
int main()
{
    int a[] = {12,13,7,3,9,10,4};
    int sum;
    sum = add(a,7);
    printf("%d",sum);
}
int add(int a[],int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return s;
}