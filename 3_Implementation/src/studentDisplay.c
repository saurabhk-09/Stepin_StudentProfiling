/**
 * @file studentDisplay.c
 * @author Saurabh K (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<RecordOperations.h>

void DisplayRecord(int number)
{
  int i;
  if(number!=0)
  {
    printf("All Student Data\n");
    printf("==================================================================================\n");
    printf("Roll No.    Name            College         Branch      Mobile No.\n");
	  printf("==================================================================================\n");
    
    for(i=0;i<number;i++)
    {
      if(s[i].Rollno!=0)
      {
        printf("%-5d%-16s%-16s%-10s%-12d\n\n",s[i].Rollno,s[i].Name,s[i].College,s[i].Branch,s[i].Mobileno);
      }
    }
  }
  else
  {
    printf("\nNo Student data Available\n");
  }
}
