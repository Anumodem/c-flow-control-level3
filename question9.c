#include <stdio.h>
int main()
{
    int a1,a2,a3,c1,c2,c3;
    scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&c1,&c2,&c3);
    if(c3>c2&&c3>c1)
    {printf("FAIR");
    } else if (a1==a2&&c1==c2)
    {
        printf("FAIR");
    } else if (a2==a3&&c2==c3){
        printf("FAIR");
    } else if (a1==a3&&c1==c3){
        printf("FAIR");
    } else{
        printf("NOT FAIR");
    }

	return 0;
}
