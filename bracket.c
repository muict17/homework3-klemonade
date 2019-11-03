#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    int i;
    for (i=0;i<n;i++)
    {
        scanf(" %c",&a[i]);
    }
    int cnt = 0;
    for (i=0;i<n;i++)
    {
        if (a[i]=='(')
        {
            cnt++;
        }
        else 
        {
            cnt--;
        }
        if (cnt <0)
        {
            printf("incomplete");
            return 0;
        }
    }
    if (cnt!=0)
    {
        printf("incomplete");
    }
    else 
    {
        printf("complete");
    }
}