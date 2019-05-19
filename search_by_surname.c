#include "main.h"
void search_by_surname()
{
	fp=fopen("records.txt","r");
	if (fp==NULL)
	{
		printf("Error in file access\n");
		exit(0);
	}
	char surnames[20];
	printf("Enter the surname to be searched:\n");
	scanf("\n%s",surnames);
	int count=0;
	while(fread(&p,sizeof(p), 1, fp)==1)
	{
		if (strcmp(surnames,p.surname)==0)
		{
			count++;
			printf("ID: %s\n",p.id);
			printf("Name: %s\n",p.name);
			printf("Surname: %s\n",p.surname);
			printf("Telephone number: %s\n",p.tel);
			printf("E-mail address: %s\n",p.mail);
		}
	}
	if (count==0)
	{
		printf("No record found\n");
	}
	fclose(fp);
}
