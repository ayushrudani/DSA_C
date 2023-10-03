#include<stdio.h>
void main()
{
    int p,q,r,s;
    p=10;
    q=4;
    r=p,q;
    s=(p,q);

    printf("r=%d  s=%d",r,s);
}