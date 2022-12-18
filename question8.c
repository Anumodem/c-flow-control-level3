#include <stdio.h>
int main()
{ long long int s,c,k,one=1,n;
  scanf("%lld %lld %lld",&s,&c,&k);
  n=s>=k?(one<<(s-k+1))|1:0;
  if(k==1)
 { if(s<=1)
 n+=c>=s?(one<<(c+1))-2:0;
 else
 n+=c>=s?(one<<(c+1))-(one<<s):0;
   }
   else
   n+=s-k>=0&&s-k<c?one<<(s-k+1):0;
   printf("%lld",n);

	return 0;
}
