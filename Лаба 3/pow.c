#include<stdio.h>
#include<math.h>

double fast_pow(double a,int n)
{
	double b;
	if(n<0) return 1/fast_pow(a,-n);
	if(n==0) return 1;
	if(n%2) b=a*fast_pow(a,n-1);
	else
	{
		b=fast_pow(a,n/2);
		b*=b;
	}
	return a=b;
}

double not_rec_pow(double a,int n)
{
	double s=1;
	int n_abs = abs(n);
	while(n_abs!=0)
	{
		if(n_abs & 1) s*=a;
		a*=a;
		n_abs=n_abs>>1;
	}
	
	if(n>0) return s;
	return 1/s;
}

int main(void)
{
	int n;
	double a;
	printf("OSNOVANIE\n");
	scanf("%lf",&a);
	printf("POKAZATEL\n");
	scanf("%d",&n);
	printf("\nfastpower: %lf\n",fast_pow(a,n));
	printf("notrecursivepower: %lf\n",not_rec_pow(a,n));
	printf("standartpower: %lf",pow(a,(double)n));
	return 0;
}
