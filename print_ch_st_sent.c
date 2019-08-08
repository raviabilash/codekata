#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch,a[100],sen[100];
scanf("%c",&ch);
scanf("%s\n",a);
scanf("%[^\n]%*c",sen);
printf("%c\n",ch);
printf("%s\n",a);
printf("%s\n",sen);    
    return 0;
}
