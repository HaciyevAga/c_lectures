#include <stdio.h>

int main(int argc, char *argv[])
{
 int a,b,c,x,y;
 scanf("%d%d%d%d%d",&a,&b,&c,&x,&y);
 
 if((c<=y && a<=x) || (c<=y && b<=x) || (b<=y && a<=x) || (c<=x && a<=y) || (c<=x && b<=y) || (b<=x && a<=y))
 printf("YES\n");
 else
 printf("NO\n");
 
   
 return 0;
}
