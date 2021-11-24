
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"

void display()
{
	FILE *fp1;
	fp1 = fopen("DB.txt","r");
	system("clear");
	if(fp1 == NULL)
		printf("\t\tNO CONTACT\n");
	else
	{	
		while(fread(&s, sizeof(s), 1, fp1))
			printf("\n\t\tNAME = %s\n\t\tMOBILE NO. = %llu\n\t\tSEX = %s\n\t\tEMAIL ID = %s\n\t\tADDRESS = %s\n\n",s.name,s.mobile_no,s.sex,s.email,s.address);
	}
	
	fclose(fp1);
}