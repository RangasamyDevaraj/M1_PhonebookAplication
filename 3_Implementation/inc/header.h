
#ifndef _Phonebook_H
#define _PHOnebook_H

struct contact
{
	char name[20];
	unsigned long long mobile_no;
	char sex[10];
	char email[40];
	char address[20];

}s;


void add();
void display();
void search();
void update();
void delete();


#endif