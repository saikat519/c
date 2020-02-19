/* Merge sort*/
#include<stdio.h>
int a[10];
void merge_sort(int,int);
void merge(int,int,int);
int main()
{
    int i,n;
    
    printf("Enter the Range::");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    merge_sort(0,n-1);
    
     for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    
}


void merge_sort(int l,int u)
{
    int m;
    
    if(l<u)
    {
    m=(l+u)/2;
    merge_sort(l,m);
    merge_sort(m+1,u);
    merge(l,m,u);
    
    }
}


void merge(int l,int m,int u)
{
    int i,j,k,x;
    int b[10];
    i=l;j=m+1;
    k=l;
    while((i<=m)&&(j<=u))   
    {
        if(a[i]>a[j])
        {
            b[k]=a[j];
            k++;j++;
        }
        else
        {
            b[k]=a[i];
            i++;k++;
        }
        
    }
    if(i>m)                 /*it means first array is finished*/
    {
        while(j<=u)             
        {
            b[k]=a[j];
            j++;k++;
        }
    }
    else        /*second array is finished*/
    {
        while(i<=m)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
for(x=l;x<=u;x++)
    a[x]=b[x];
    
}
