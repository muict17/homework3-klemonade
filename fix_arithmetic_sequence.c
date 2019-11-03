#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int df[n];
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        df[i]=a[i+1]-a[i];
    }
    int rdif;
    for (i=0;i<n-2;i++)
    {
        if (df[i+1]!=df[i])
        {
            if(df[i+1]!=df[i+2])
            {
                rdif = df[i]; 
            }
            else 
            {
                rdif = df[i+1];
            }
        }
    }
    for (i=0;i<n-1;i++)
    {
        if (a[i+1]-a[i]!=rdif)
        {
            printf("%d",a[i]+rdif);
        }
    }
}