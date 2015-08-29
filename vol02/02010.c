#include<stdio.h>
#include<string.h>
char s[100][101],o[101],q[101];
int n,m,i,j,k,p[100],a,b;
int f(char *t)
{
    int i;
    for(i=0;i<n&&strcmp(s[i],t);i++);
    return i;
}
int main()
{
    for(;scanf("%d",&n),n;)
    {
        for(i=0;i<n;i++)
            scanf("%s%d",s[i],&p[i]);
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%s%d",o,&k);
            b=f(o);
            for(a=0;k--;)
            {
                scanf("%s",q);
                a+=p[f(q)];
            }
            p[b]=p[b]>a?a:p[b];
        }
        scanf("%s",o);
        printf("%d\n",p[f(o)]);
    }
    return 0;
}
