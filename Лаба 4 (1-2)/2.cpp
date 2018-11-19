#include <stdio.h>
#include <dirent.h>
#include <string.h>
int main()
{
	char c[1000],pl[1000];
	scanf("%s",&pl);
	struct dirent *ent;
	DIR* dir = opendir("planet");
	while((ent = readdir(dir))!=NULL)
	{
	//	printf("%s\n",ent->d_name);
		char name[1000];
		memset(name,0,sizeof(name));
		strcpy(name,"planet\\");
		strcat(name,ent->d_name);
		FILE* f=fopen(name,"r");
		if(f)
		{
			fscanf(f,"%s",&c);
			if(!strcmp(c,pl)) 
			printf("\n%s",ent->d_name);
		}
		fclose(f);
	}
	closedir(dir);
	return 0;
}
