#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int sum[m];
    int i,j;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        sum[i]=0;
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            sum[i]+=a[i][j];
        }
    }
    int mx = sum[0];
    int mxr;
    for (i=1;i<m;i++)
    {
        if (mx<sum[i])
        {
            mxr = i;
            mx = sum[i];
        }
    }
    printf("%d",mxr+1);
}