
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"

void add()
{
	FILE *fp;
	fp = fopen("DB.txt","a");	
		
	system("clear");
	printf("\n\n\n\n\t\t\tENTER THE CONTACT\n\n");

	printf("\t\tenter the name : ");
	scanf("%s",s.name);
	printf("\n\t\tenter mobile no. :");
	scanf("%llu",&s.mobile_no);
	printf("\n\t\tenter sex : ");
	scanf("%s",s.sex);
	printf("\n\t\tEnter email id : ");
	scanf("%s",s.email);
	printf("\n\t\tenter Address : ");
	scanf("%s",s.address);

	fwrite(&s, sizeof(s), 1, fp);
	
	
	fclose(fp);
}

