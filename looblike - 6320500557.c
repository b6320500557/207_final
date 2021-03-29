#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int x[n],m;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x[i]);
    }
     for(i=1; i<=n; i++)
    {
        if(x[i] == x[i+1])
        {
            m = x[i];
        }
    }
    printf("%d",m);

    return 0;
}
