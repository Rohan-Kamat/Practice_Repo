#include <stdio.h>

void main()
{
    int a[100],i,n,ele,begin,end,mid;
    
    printf("Enter number of distinct element of an array\n");
    scanf("%d",&n);
    printf("Enter the array elements in ascending order\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
    
    begin=0;
    end=n-1;
    mid=(begin+end)/2;
    
    while(begin<=end)
    {
        if(ele==a[mid])
        {
        printf("The array element %d found in location %d.",ele,mid+1);break;
        }
        else if(a[mid]<ele)
        begin=mid+1;
        else if(ele<a[mid])
        end=mid-1;
        
        mid=(begin+end)/2;
    }
    if(begin>end)
    printf("element %d not found in the array\n",ele);
}