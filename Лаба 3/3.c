#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PRIME 1701
/*
�������� ��������� ��������� �����.
1)����� �� 0 �� 100
2)������������ �� 0 �� 1 (�������� 12 �������� ����� �������, ���� ����� ������ ���
���������)
������ ������������ sin, cos � ����� ������ �������, ����� ������ ��������� �
����������.
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
