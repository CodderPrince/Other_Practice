#include<stdio.h>
int main(){
int a,b,c,i,t;
scanf("%d", &t);
for(i=1; i<=t; i++)
{
    scanf("%d%d%d",&a,&b,&c);

if (a>b && a<c || a<b && a>c)
{
    printf("%d\n",a);
}
else if (b>a && b<c || b<a && b>c)
{
    printf("%d\n",b);
}
else
{
    printf("%d\n",c);
}
}
    return 0;
}
