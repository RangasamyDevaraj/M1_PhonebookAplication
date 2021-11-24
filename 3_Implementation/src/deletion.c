#include"header.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void delete()
{
	system("clear");
	FILE *fp3,*fp4;
	char search[20];
	int k=1,t=0;

	fp3 = fopen("DB.txt","r");
	fp4 = fopen("temp.txt","w");

	printf("\n\n\n\n\n\n\t\t\t\t\tENTER THE NAME WHICH YOU WANT TO DELETE\n\n\n\t\t\t\t\t\t  NAME :-");
	scanf("%s",search);
	
	while(fread(&s, sizeof(s), 1, fp3))
	{
		k = strcmp(search,s.name);
		if(k == 0)
		{
			t=1;
			continue;
		}
		fwrite(&s, sizeof(s), 1, fp4);
	}
	if(t == 0)
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t        CONTACT NOT FOUND\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	if(t == 1)
	{
	remove("DB.txt");
	fclose(fp3);
	fclose(fp4);

	fp3 = fopen("DB.txt","w");
	fp4 = fopen("temp.txt","r");

	while(fread(&s, sizeof(s), 1, fp4))
		fwrite(&s,sizeof(s),1,fp3);

		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t DELETE SUCCESSFULLY\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	}
	fclose(fp3);
	fclose(fp4);
}
