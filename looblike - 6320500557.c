#include <stdio.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    int x[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x[i]);
    }
     for(i=1; i<=n; i++)
    {
        if(x[i] == x[i+1])
        {
            if(x[i] == x[i++])
            {
                printf("%d ",x[i]);
            }
            else
            {
                printf("%d ",x[i+1]);
            }
        }

    }


    return 0;
}
