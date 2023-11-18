#include<stdio.h>
typedef struct ContactBook
{
	long ContactCode;
	char Name[51];
	char PhoneNo[21];
	long HouseNo;
	char ColonyName[51];
	char LandMark[51];
	char City[21];
	char State[21];
	long PinCode;
}CONB;
void main()
{
	CONB C;
	char cho;
	FILE *p;
	p=fopen("ContactBuk.txt","r");
	if(p==NULL)
	{
		p=fopen("ContactBuk.txt","w");
	}
	else
	{
		p=fopen("ContactBuk.txt","a");
	}
	do
	{
		printf("Enter Contact Code:");
		fflush(stdin);
		scanf("%ld",&C.ContactCode);
		
		printf("Enter Name:");
		fflush(stdin);
		gets(C.Name);
		
		printf("Enter Phone No.:");
		fflush(stdin);
		gets(C.PhoneNo);
		
		printf("Enter House No.:");
		fflush(stdin);
		scanf("%ld",&C.HouseNo);
		
		printf("Enter Colony Name:");
		fflush(stdin);
		gets(C.ColonyName);
		
		printf("Enter LandMark:");
		fflush(stdin);
		gets(C.LandMark);
		
		printf("Enter City:");
		fflush(stdin);
		gets(C.City);
		
		printf("Enter State:");
		fflush(stdin);
		gets(C.State);
		
		printf("Enter PinCode:");
		fflush(stdin);
		scanf("%ld",&C.PinCode);
		
		fwrite((char*)&C,sizeof(C),1,p);
		
		printf("Do you want to insert more records?(y/n)\nAns:");
		fflush(stdin);
		scanf("%c",&cho);
	}
	while(cho=='y'||cho=='Y');
	fclose(p);
}