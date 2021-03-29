#include <stdio.h>
int main()
{
    int n,i,j=0,k=0;
    scanf("%d",&n);
    int x[n],m[n];
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
        m[i] = x[i];
        if(x[i] == x[i+1])
        {
            k = x[i];
        }
        if( m[i+1] == x[i+2] )
        {
            j = m[i];
        }
    }
    if(k != j )
    {
        printf("%d ",k);
        printf("%d",j);
    }
    else
        printf("%d",k);
    return 0;
}
