#include<stdio.h>
void main()
{
    int i,n,j,t,a[50];
    printf("Enter No. of element: ");
    scanf("%d",&n);
    printf("Enter Elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>=a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nSorted Array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}