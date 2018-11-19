#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PRIME 1701
/*
Ќаписать генератор случайных чисел.
1)целых от 0 до 100
2)вещественных от 0 до 1 (выводить 12 символов после зап€той, весь хвост должен был
рандомный)
Ќельз€ использовать sin, cos и любые другие функции, ответ должен хранитьс€ в
переменной.
*/
int n_prime(int a)
{
	return 0;
}
unsigned int n_ran(void)
{
	const time_t t=time(NULL);
	int i,hash=0;
	char* n_t=ctime(&t);
	for(i=0;n_t[i]!=0;i++)
	{
		hash=(256*hash+n_t[i])%PRIME;
	}
	return hash;
}
int n_ran_i(void)
{
	return n_ran()%100;
}
double n_ran_d(void)
{
	return n_ran()/((double)PRIME);
}
int main()
{
	printf("%d\n%.12f",n_ran_i(),n_ran_d());
	return 0;
}
