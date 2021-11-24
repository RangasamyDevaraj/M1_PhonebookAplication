#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"




void add();
void display();
void search();
void update();
void delete();

int main()
{
			 
	char user[10],id[10];
	char user1[]="user",id1[]="1234";
	
	again :
	system("clear");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t\t\t******************************************************\n\t\t\t\t\t\t\t***********************************");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t  ENTER THE USER NAME AND PASSWORD\n\t\t\t\t\t\t--______________________________________________--");
	printf("\n\n\n\t\t\t\t\t\t\t  USER NAME:-");
	scanf("%s",user);
       // sleep(2);
	printf("\n\t\t\t\t\t\t\t  PASSWORD:-");
	scanf("%s",id);

	if((strcmp(user,user1)==0) && (strcmp(id,id1)==0))
	{
		system("clear");//printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t********* WELCOME ********\n\n\n\t\t\t\t\t\t\t YOU ENTER RIGHT PASSWORD\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t\t** PHONEBOOK APPLICATION **\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		printf("\t\t\t\t\t\t\t\t y/n\n");
		char ch;
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		getchar();
		scanf("%c",&ch);
		system("clear");
		
		if(ch == 'y')
		{
			int x,m1;
			do
			{
			system("clear");
			printf("\n\n\n\n\n\n\n");
			printf("\t\t\t\t\t\t\t\tMENU\n\n\t\t\t\t\t\t\t1 - CONTACT LIST \n\t\t\t\t\t\t\t2 - ADD NEW CONTACT\n");
			printf("\t\t\t\t\t\t\t3 - SEARCH ANY CONTACT\n\t\t\t\t\t\t\t4 - UPDATION IN CONTACT LIST\n\t\t\t\t\t\t\t");
			printf("5 - DELETE ANY CONTACT\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			scanf("%d",&x);
			switch(x) 
			{
				case 1: display();
					break;

				case 2: add();
					break;

				case 3: search();
					break;

				case 4: update();
					break;

				case 5: delete();
					break;

				default : printf("\n\t\tYOU ENTER WRONG OPTION\n\n");

			}
			printf("\n\n\n\n\n\t\tPRESS\n\t\t1 - Go to MENU\n\t\t2 - Exit\n\n");
			scanf("%d",&m1);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			}while(m1 == 1);  
		}
	}
	else
	{
		char m1; int temp;
		printf("\n\n\n\t\t\t\t\t\tYOU ENTER INVALID USER_NAME OR PASSWORD\n");
		printf("\n\n\t\t\t\t\t\t   If you want retry press y/n ");
		getchar();	
		scanf("%c",&m1);
		printf("\n\n\n\n\n\n\n\n");
		if(m1 == 'y')
		 goto again;
		
			
		printf("\n\n\n\n\n\n\n\n");
	}

	printf("\n\n\n\n\n\n\n");
	return 0;
}

