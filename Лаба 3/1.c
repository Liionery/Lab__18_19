#include <stdio.h>
int main()
{
	char c;
	for(c='A';c<='z';c++)
		if(c<='Z'||c>='a')
			printf("%c %d\n",c,c);
	printf("\' \' %d\n\\n %d",c=' ',c='\n');
	return 0;
}
