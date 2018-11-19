#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Варенье добавляет Карлсону вес, физические упражнения стройнят.
Запустить бесконечный цикл - жизнь Карлсона. На каждом шаге запускать случайное
событие приход тёти, с её приходом Карлсон отправляется ловить воров на крышу. Если
бедствия (прихода тётки) удалось избежать, Малыш угощает парня с пропеллером
вареньем.
Начальный вес Карлсона 60кг, если он похудеет на 40кг, то умрёт от дистрофии, если
поправится на 40кг, то не сможет летать (его раздует).
Массивы варенья и физических упражнений (которые добавляют или уменьшают вес)
задавать на своё усмотрение, длинна массивов любая. Карлсон может скушать всё варенье
или разогнать всех воров. В этом случае он считает что его цель в жизни
достигнута(прервать цикл и сообщить о том как сложилась судьба Тёмного рыцаря с
пропеллером).
P.S. Использовать динамические массивы.
*/
int Karlson=60;
/*unsigned int n_ran(int PRIME)
{
	const time_t t=time(NULL);
	int i,hash=0;
	char* n_t=ctime(&t);
	for(i=0;n_t[i]!=0;i++)
	{
		hash=(256*hash+n_t[i])%PRIME;
	}
	return hash;
}*/
int aunt(void)
{
	
	/*int a=rand()%3;
	if (a%2==0) return 0;
	else return 1;*/
	return rand()%2;
}
int k_state(int x)
{
	if(x<=20)
	{
		printf("Dead");
		return 1;
	}
	else
	if(x>=100)
	{
		printf("Too fat");
		return 1;
	}
	else
	return 2;
}
int lifetime(int *jam,int n,int *thief, int k)
{
	int i=0,j=0;
	while(1)
	{
		//printf("i=%d j=%d  ",i,j);
		if(j==k)
		{
			printf("No jam");
			break;
		}
		if(i==n)
		{
			printf("No thief");
			break;
		}
		if(aunt())
		{
			printf("Aunt arrive\n");
			Karlson-=thief[i];
			if(k_state(Karlson)==1) break;
			i++;
		}
		else
		{
			printf("Aunt not arrive\n");
			Karlson+=jam[j];
			if(k_state(Karlson)==1) break;
			j++;
		}
	}
}
int main()
{
	srand(time(NULL));
	int *jam,*thief;
	int n,k,i,j;
	n=rand()%100;
	k=rand()%100;
	jam=(int*)malloc(n*sizeof(int));
	thief=(int*)malloc(k*sizeof(int));
	for(i=0;i<n;i++)
		jam[i]=rand()%10;
	for(j=0;j<k;j++)
		thief[j]=rand()%10;
	//printf("%d\n%d\n\n",n,k);
	lifetime(jam,n,thief,k);
	free(jam);
	free(thief);
	return 0;
}
