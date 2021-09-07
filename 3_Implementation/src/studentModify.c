/**
 * @file studentModify.c
 * @author Saurabh K (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<RecordOperations.h>

void UpdateRecord(int number)
{
  int Rollno,choice,c,i;
  printf("Enter student roll no. to change Details\n");
  scanf("%d",&Rollno);
  for(i=0;i<number;i++)
  {
   if(s[i].Rollno==Rollno && s[i].Rollno!=0)
   {
    do
    {
        printf("Enter\n1 - Change Name\n2 - Change College\n3 - Change Branch\n4 - Change Mobile no.\nAny other number to exit\n");
        scanf("%d",&choice);
        if(choice==1)
        {
         char name[100];
         printf("Enter Name to be updated\n");
         fflush(stdin);
         scanf("%s",name);
         strcpy(s[i].Name,name);
         printf("Student name updated Successfully\n");;
        }
        if(choice==2)
        {
         char cname[100];
         printf("Enter college name to be updated\n");
         fflush(stdin);
         scanf("%s",cname);
         strcpy(s[i].College,cname);
         printf("Branch Name updated Successfully\n");
        }
        if(choice==3)
        {
         char bname[100];
         printf("Enter branch Name to be updated\n");
         fflush(stdin);
         scanf("%s",bname);
         strcpy(s[i].Branch,bname);
         printf("Branch Name updated Successfully\n");
        }
        if(choice==4)
        {
         int mb;
         printf("Enter Mobile  o. to be update\n");
         fflush(stdin);
         scanf("%d",&mb);
         s[i].Mobileno=mb;
         printf("Mobile no. updated Successfully\n");
        }
        if(choice<=0 && choice>4)
        {
         printf("Enter valid Choice\n");
        }
        printf("Enter 1 to Change other Details Else any other number\n");
        fflush(stdin);
        scanf("%d",&c);
    }while(c==1);
    break;
   }
  }
 }