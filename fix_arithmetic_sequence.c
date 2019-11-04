#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int df[n];
    int i,j;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if (a[0]>a[n-1])
    {
        for (i=0;i<n-1;i++)
        {
            df[i]=a[i]-a[i+1];
        }
        int rdif=df[0];
        for (i=0;i<n-1;i++)
        {
            if (rdif > df[i])
            {
                rdif = df[i];
            }
        }
        for (i=0;i<n-1;i++)
        {
            if (a[i]-a[i+1]!=rdif)
            {
                for (j=1;j<a[i]-a[i+1]/rdif;j++)
                {
                    printf("%d ",a[i]-j*rdif);
                }
            }
        }
    }
    else 
    {
        for (i=0;i<n-1;i++)
        {
            df[i]=a[i+1]-a[i];
        }
        int rdif=df[0];
        for (i=0;i<n-1;i++)
        {
            if (rdif > df[i])
            {
                rdif = df[i];
            }
        }
        for (i=0;i<n-1;i++)
        {
            if (a[i+1]-a[i]!=rdif)
            {
                for (j=1;j<a[i+1]-a[i]/rdif;j++)
                {
                    printf("%d ",a[i]+j*rdif);
                }
            }
        }
    }
}
    