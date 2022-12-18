#include <stdio.h>
#include <math.h>
int main()
{
    int lengthofbook,numofpages;
    scanf("%d %d",&lengthofbook,&numofpages);
    if(lengthofbook<=23 &&numofpages>=500&&numofpages<=1000)
    {printf("Take Medicine");}
        else
    printf("Don't take Medicine");
	return 0;}
