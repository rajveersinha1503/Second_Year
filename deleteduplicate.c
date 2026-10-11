#include <stdio.h>
int main()
{
    int a[]= {1,4,5,7,7,10};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Original array: \n");
    for(int i=0;i<n;i++)
      printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(int k=j;k<n-1;k++)
                  a[k]=a[k+1];
                n--;
                j--;
            }
        }
    }
    printf("New array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}