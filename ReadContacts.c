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
	FILE *p;
	p=fopen("ContactBuk.txt","r");
	if(p==NULL)
	{
		printf("No File Found, Please Make A File...........");
	}
	else
	{
		while(!feof(p))
		{
			fread((char*)&C,sizeof(C),1,p);
			if(feof(p))
			{
				break;
			}
			printf("Contact Code:%ld\nName:%s\nPhone No.:%s\nHouse No.:%ld\nColony Name:%s\nLandMark:%s\nCity:%s\nState:%s\nPinCode:%ld\n\n",
			C.ContactCode,C.Name,C.PhoneNo,C.HouseNo,C.ColonyName,C.LandMark,C.City,C.State,C.PinCode);
		}
	}
	fclose(p);
}
