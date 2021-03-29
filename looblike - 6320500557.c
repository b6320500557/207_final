#include <stdio.h>
int main()
{
    int n,i,j,k=0;;
    scanf("%d",&n);
    int x[n],m[n],temp[n];;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x[i]);
    }
     for(i=1; i<=n; i++)
    {
       m[i] = 0;
    }
     for(i=1; i<=n; i++)
    {
        if(x[i] > m[i])
        {
             x[i] = m[i];
        }
        if(x[i] == x[i+1])
        {
            printf("%d ",x[i]);
        }
    }
    return 0;
}
