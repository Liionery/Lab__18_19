#include <stdio.h>
const int n=25;
const int NMAX=100;
int main()
{
	long long F[NMAX];
	int i;
	F[0]=0;
	F[1]=1;
	for(i=2;i<=n;i++)
		F[i]=F[i-1]+F[i-2];
	for(i=0;i<n;i++)
		printf("%I64d\n",F[i]);
	printf("%I64d",F[n]);
	return 0;
}
