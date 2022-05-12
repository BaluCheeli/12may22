#include<stdio.h>

int main()
{


int a=-3,b=2,c=0,m; 
m=++a|| ++b||++c;
printf("%d\n%d\t%d\t%d\t",m,a,b,c);
m= ++a&& ++b||++c;

printf("%d\n%d\t%d\t%d\t",m,a,b,c);



return 0;
}
