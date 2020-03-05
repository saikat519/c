#include<stdio.h>
void q_s(int*,int,int);
int conqure(int*,int,int);


int main()
{
    int i,n,a[15];

    printf("Range::");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    q_s(a,0,n-1);
    printf("sorted array is:::\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

    return 0;
}

void q_s(int a[],int l,int u)
{

    int index;
    
    if (l<u)
    {
        index=conqure(a,l,u);
    q_s(a,l,index-1);
    q_s(a,index+1,u);
    }
}

int conqure(int a[],int start,int end)
{
    int pivot,i,j,t;
    pivot=a[end];
    i=start;
    for(j=start;j<=end-1;j++)
    {
        if(a[j]<pivot)
        {
            
            t=a[j];
            a[j]=a[i];      /*swap*/
            a[i]=t;
            i++;
        }
    }
     t=a[i];
     a[i]=a[end];
     a[end]=t;
return i;
}
