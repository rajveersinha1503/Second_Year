#include <stdio.h>
int main()
{
    printf("Enter number of elements: ");
    int n;
    scanf("%d",&n);
    printf("Enter elements of array: \n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    printf("Enter element to be deleted: ");
    int pos;
    scanf("%d",pos);
    for(int i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("New array:\n");
    for(int i=0;i<n;i++)
      printf("%d ",&a[i]);
}