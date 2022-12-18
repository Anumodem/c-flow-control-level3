#include <stdio.h>
int main()
{
    int D,Oc,Of,Od,Fs,Fb,Fm,Fd;
    int cost,cosd;
    scanf("%d\n%d %d %d\n %d %d %d %d",&D,&Oc,&Of,&Od,&Fs,&Fb,&Fm,&Fd);
    cost=((D-Oc)*Od)+Of;
    cosd=Fb+(D*(Fm/Fs))+(D*Fd);
    if (cost<cosd){
        printf("OLA Taxi");
        }
    else if (cost>cosd)
    { printf("Fastrack Taxi");
    }
	return 0;
}
