#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int  a,b,c,d;
float f,g,h,j;
scanf("%d%d",&a,&b);
scanf("%f%f",&f,&g);
c=a+b;
d=a-b;
h=f+g;
j=f-g;
printf("%d %d\n",c,d);
printf("%.1f %.1f\n",h,j);
return 0;
}
