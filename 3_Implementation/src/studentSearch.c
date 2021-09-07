/**
 * @file studentSearch.c
 * @author Saurabh K (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<RecordOperations.h>

void SearchRecord(int number)
{
   int i,flag=0;
   int roll;
   printf("Enter the student roll no. you want to search?\n");
   fflush(stdin);
   scanf("%d",&roll);
   for(i=0;i<number;i++)
   {
      if(s[i].Rollno==roll)
      {
         flag=1;
         printf("These are the details of Student\n");
         printf("==================================================================================\n");
    	       printf("Roll No.    Name            College         Branch      Mobile No.\n");
	      printf("==================================================================================\n");
         printf("%-5d%-16s%-16s%-10s%-12d\n\n",s[i].Rollno,s[i].Name,s[i].College,s[i].Branch,s[i].Mobileno);
         printf("===================================================================================\n");
      }
   }
   if(flag==0)
   {
      printf("Entered roll no. Not Found\n");
   }
}
