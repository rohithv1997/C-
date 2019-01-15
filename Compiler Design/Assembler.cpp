# include <stdio.h>
# include <conio.h>
//#include<stdlib.h>
#include<string.h>
struct OPTAB
{
   char cNemonic[80];
   int iOpCode[3];
   int iSize;
};

int main()
{

 struct OPTAB sTab[100];
 int iLim;
 char cRead[80];
 char cChk[80];
 char cCh;
 int iAddress;
 int iNoOfStt;
 FILE *fCode;
 FILE *fExe;
 char cOutFile[20];
 char cInFile[20];
 int iCnt;
 int iCntr;
 int iQuit;
 int iChk;

 iCnt=0;

 clrscr();
//system("clear");
  iQuit=0;
  while(!iQuit)
  {

	clrscr();
	printf("ENTER DETAILS  (TYPE 'HALT' AS NEMONIC TO STOP) \n");

	printf("enter Nemonic: ");
	gets(sTab[iCnt].cNemonic);
	if(strcmp(sTab[iCnt].cNemonic,"HALT")==0)
	{
	   iQuit=1;
	   strcpy(sTab[iCnt].cNemonic,"\0");
	   break;
	}
	strcat(sTab[iCnt].cNemonic,"\n");
	printf("enter No. of bytes (size) :");
	scanf("%d",&sTab[iCnt].iSize);
	for(iCntr=0;iCntr<sTab[iCnt].iSize;iCntr++)
	{
		printf("enter Opcode %d of %d: ",iCntr+1,sTab[iCnt].iSize);
		scanf("%d",&sTab[iCnt].iOpCode[iCntr]);
		if(sTab[iCnt].iOpCode[iCntr]==76)
		{
			printf("OpCode reserved for halt enter another OPCODE \n");
			printf("enter Opcode: ");
			scanf("%d",&sTab[iCnt].iOpCode[iCntr]);
		 }
	 }
	  iCnt++;
	  cRead[0]=getchar();

   }
   iLim=iCnt;
   printf("enter source code file name: ");
   scanf("%s",cInFile);
   printf("enter Output file name: ");
   scanf("%s",cOutFile);
   printf("enter starting address : ");
   scanf("%d",&iAddress);
   fCode=fopen(cInFile,"r");

   fExe= fopen(cOutFile,"w");

   while(!feof(fCode))
   {
	fgets(cRead,80,fCode);
	for(iCnt=0;iCnt<=iLim;iCnt++)
	{
	   iChk=0;
	   if(strcmp(cRead,sTab[iCnt].cNemonic)==0)
	   {
			for(iCntr=0;iCntr<sTab[iCnt].iSize;iCntr++)
			{
			  fprintf(fExe,"%d : %d\n",iAddress,sTab[iCnt].iOpCode[iCntr]);
			  iAddress++;
			}

			iChk=1;
			break;
	}
	if(strcmp(cRead,"HALT")==0)
	{
	 fprintf(fExe,"%d : 76\n",iAddress);

	 iAddress++;
	 iChk=1;
	 break;
	}
	 }
	  if(iChk==0)
	  {
	printf("error\nNemonic not found in Opcode table\nNow Quitting...\n");
	return 0;
	   }

   }

	fclose(fCode);
	fclose(fExe);
	printf("generated assmbly code stored in file %s is :\n\n",cOutFile);
	fExe=fopen(cOutFile,"r");
	iQuit=0;
	while(!iQuit)
	{
	  strcpy(cChk,cRead);
	  fgets(cRead,80,fExe);

	  if(feof(fExe))
	  {
	iQuit=1;
	break;
	   }
	   else if(strcmp(cChk,cRead)==0)
	   {
	iQuit=1;
	break;
	   }
	   printf("%s",cRead);
	 }

	fclose(fExe);
	getch();
	return 1;
  }

