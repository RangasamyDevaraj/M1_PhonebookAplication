#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"


void search()
{
	char search[20];
	int k=1,t=0;
	system("clear");
	FILE *fp2;

	printf("\n\n\n\n\n\n\t\t\t\t\tENTER THE NAME WHICH YOU WANT TO SEARCH\n\n\n\t\t\t\t\t\t  NAME :-");
	scanf("%s",search);
	
	fp2 = fopen("DB.txt","r");
	while(fread(&s, sizeof(s), 1, fp2))
	{
		k = strcmp(search,s.name);
		if(k == 0)
		{
			t = 1;
			printf("\n\t\tNAME = %s\n\t\tMOBILE NO. = %llu\n\t\tSEX = %s\n\t\tEMAIL ID = %s\n\t\tADDRESS = %s\n\n",s.name,s.mobile_no,s.sex,s.email,s.address);
		
		}
	}
	if(t == 0)
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t        CONTACT NOT FOUND\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

	fclose(fp2);		
}