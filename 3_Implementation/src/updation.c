#include"header.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void update()
{
	system("clear");
	struct contact s1;
	char search[20];
	int k=1,t=0;
	FILE *fp5,*fp6;

	printf("\n\n\n\n\n\n\t\t\t\t\tENTER THE NAME WHICH YOU WANT TO EDIT\n\n\n\t\t\t\t\t\t  NAME :-");
	scanf("%s",search);
	
	fp5 = fopen("DB.txt","r");
	fp6 = fopen("temp.txt","w");

	while(fread(&s, sizeof(s), 1, fp5))
	{
		k = strcmp(search,s.name);
		if(k == 0)
		{
			t=1;
			printf("\n\t\t\t\t\tPREVIOUS DATA\n");
			printf("\n\t\tNAME = %s\n\t\tMOBILE NO. = %llu\n\t\tSEX = %s\n\t\tEMAIL ID = %s\n\t\tADDRESS = %s\n\n",s.name,s.mobile_no,s.sex,s.email,s.address);
			printf("\n\n\n\n\t\t\t\t\tEDIT YOUR DATA\n\n");
			
			printf("\t\tenter the name : ");
			scanf("%s",s1.name);
			printf("\n\t\tenter mobile no. :");
			scanf("%llu",&s1.mobile_no);
			printf("\n\t\tenter sex : ");
			scanf("%s",s1.sex);
			printf("\n\t\tEnter email id : ");
			scanf("%s",s1.email);
			printf("\n\t\tenter Address : ");
			scanf("%s",s1.address);

			fwrite(&s1, sizeof(s1), 1, fp6);
			continue;	
		}
		fwrite(&s, sizeof(s), 1, fp6);
	}

	if(t == 0)
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t        CONTACT NOT FOUND\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	if(t == 1)
	{
	remove("DB.txt");
	fclose(fp5);
	fclose(fp6);

	fp5 = fopen("DB.txt","w");
	fp6 = fopen("temp.txt","r");

	while(fread(&s, sizeof(s), 1, fp6))
		fwrite(&s,sizeof(s),1,fp5);

			printf("\n\n\n\n\n\n\n\n\t\t\t\t\t        EDIT SUCCESSFULLY\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	}
	fclose(fp5);
	fclose(fp6);
		
}