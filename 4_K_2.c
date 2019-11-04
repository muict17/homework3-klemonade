#include <stdio.h>

void swap(int *m,int *n)
{
    int tmp = *n;
    *n=*m;
    *m=tmp;
}

int permute(int set[],int l,int s)
{
    int i;
    if (s==l)
    {
        for (i=0;i<l;i++)
        {
            printf("%d ",set[i]);
        }
        printf("\n");
    }
    else 
    {
        for (i=s;i<l;i++)
        {
            swap(&set[s],&set[i]);
            permute(set,l,s+1);
            swap(&set[s],&set[i]);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    int s=0;
    permute(a,n,s);
}