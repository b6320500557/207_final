#include <stdio.h>
int main()
{
    int n1,n2,n3,i,j,k;
    scanf("%d %d %d",&n1,&n2,&n3);
    int x[n1][n1],y[n2][n2],z[n3][n3],sum[20];
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n1; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n");
  /* for(i=0; i<n2; i++)
    {
        for(j=0; j<n2; j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<n3; i++)
    {
        for(j=0; j<n3; j++)
        {
            scanf("%d",&z[i][j]);
        }
    }
    printf("\n");*/
     for(i=0; i<n1; i++)
    {

        for(j=0; j<n1; j++)
        {
            sum[i] = x[i][j=i]+x[i][j=i];
        }
        printf("%d ",sum[i]);
    }


    return 0;
}

