#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
int main()
{
    float r,s,v;
    scanf("%f",&r);

    s=4*pi*r*r;
    v=(4.0/3.0)*pi*r*r*r;

    printf("s=%10.2f\n",s);
    printf("v=%10.2f\n",v);
    return 0;
}
