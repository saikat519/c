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

int conqure(int a[],int l,int u)
{
    int pivot,i,j,t;
    pivot=a[u];
    i=l-1;
    for(j=l;j<=u-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            t=a[j];
            a[j]=a[i];      /*swap*/
            a[i]=t;
        }
    }
     t=a[i+1];
     a[i+1]=a[u];
     a[u]=t;
return (i+1);
}