/**
 * @file student.c
 * @author Saurabh K (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<RecordOperations.h>
 
int main()
{
  int i,j,choice,number=0,c;
  for(i=0;i<100;i++)
  {
    s[i].Rollno=0;
    s[i].Mobileno=0;
    strcpy(s[i].Name,"");
    strcpy(s[i].College,"");
    strcpy(s[i].Branch,"");
  }
  s[0].Rollno=1;
  s[0].Mobileno=123456780;
  strcpy(s[0].Name,"abc");
  strcpy(s[0].College,"xyz");
  strcpy(s[0].Branch,"ijk");
  
  do{
      printf("Enter\n1 - Add Record\n2 - Update record\n3 - Delete Record\n4 - Search Record\n5 - Display Record\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:
          {
              ++number;
              AddRecord(number,s);
              break;
          }
          case 2:
          {
              UpdateRecord(number+1);
              break;
          }
          case 3:
          {
              DeleteRecord(number+1);
              break;
          }
	        case 4:
          {
              SearchRecord(number+1);
              break;
          }
	        case 5:
          {
              DisplayRecord(number+1);
              break;
          }
      }
      printf("To Continue with other Options Enter 1 Else any other number\n");
      scanf("%d",&c);
    }while(c==1);
} 

