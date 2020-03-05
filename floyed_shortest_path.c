#include<stdio.h>
void floyd(int);
int g[100][100];
int main(){
    int n,e,i,j,u,v,w;
    printf("enter the no. of vertices :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j)
            g[i][j]=0;
            else
            g[i][j]=9999;
        }   
    }
    printf("enter no. of edges:");
    scanf("%d",&e);
    for(i=1;i<=e;i++){
        printf("enter the starting and the ending vertex :");
        scanf("%d%d",&u,&v);
        printf("enter the corresponding weight:");
        scanf("%d",&g[u][v]);
    }

    floyd(n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",g[i][j]);
        }
    printf("\n");
    }
    return 0;
}

void floyd(int n){
    int i,j,k;
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if((g[i][k]+g[k][j])<(g[i][j]))
                    g[i][j]=g[i][k]+g[k][j];
            }
        }
    }
   
}