#include "main.h"

void print()
{
	fp=fopen("records.txt","r");
	if (fp==NULL)
	{
		printf("Error in file access\n");
		exit(0);
	}
	while(fread(&p,sizeof(p), 1, fp))
	{
			printf("ID: %s\n",p.id);
			printf("Name: %s\n",p.name);
			printf("Surname: %s\n",p.surname);
			printf("Telephone number: %s\n",p.tel);
			printf("E-mail address: %s\n",p.mail);
			putchar('\n');
	}
	fclose(fp);
}
