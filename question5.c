#include <stdio.h>
#include <math.h>
int main()
{
 float a,b,c; float root1,root2,imaginary; float discriminent;
 scanf("%f %f %f",&a,&b,&c);
 discriminent=(b*b)-(4*a*c);
 switch(discriminent>0)
 {
 case 1:
 root1=(-b+sqrt(discriminent))/(2*a);
 root2=(-b-sqrt(discriminent))/(2*a);
 printf("%.2f %.2f",root1,root1);
 break;
 case 0:
 switch(discriminent<0)
 {
 case 1:
 root1=root2=-b/(2*a);
 imaginary=sqrt(-discriminent)/(2*a);
 printf("%.2f + i%.2f and %.2f - i%.2f",root1,imaginary,root2,imaginary);
 break;
 case 0:
 root1=root2=-b/(2*a);
 printf("%.2f %.2f",root1,root2);
 break;
 }
 }
 return 0;
}
