/**
 * @file studentDelete.c
 * @author Saurabh K (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<RecordOperations.h>

void DeleteRecord(int number)
{
  int Rollno,i,flag=0,num;
  printf("Enter Student roll no. to be deleted\n");
  fflush(stdin);
  scanf("%d",&Rollno);
  
  for(i=0;i<number;i++)
  {
   if(s[i].Rollno==Rollno)
   {
    flag=1;
    s[i].Rollno=0;
    s[i].Mobileno=0;
    strcpy(s[i].Name,"");
    strcpy(s[i].College,"");
    strcpy(s[i].Branch,"");
    num=i;
    break;
   }
  }
  if(flag==1)
  {
   printf("Student Record with %d is Deleted Successfully\n",Rollno);
  }
}
