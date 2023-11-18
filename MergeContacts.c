#include<stdio.h>
#include<stdlib.h>
void main()
{
	int choice;
	char co;
	do
	{
		printf("Main Menu\n1] Insert Records\n2] Read Records\n3] Search Records\n4] Exit\n5] Wrong Choice\n");
		printf("Enter Your Choice:");
		fflush(stdin);
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				system("InsertContacts.exe");
				break;
			case 2:
				system("ReadContacts.exe");
				break;
			case 3:
				system("SearchContacts.exe");
				break;
			case 4:
				printf("Exit....\n");
				break;
			default:
				printf("Wrong Choice, Please Enter Anbother Choice.......\n");	
		}
		printf("Press Any Key To Continue......\n");
		fflush(stdin);
		scanf("%c",&co);
		system("cls");
	}
	while(choice!=4);
}