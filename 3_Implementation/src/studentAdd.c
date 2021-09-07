/**
 * @file studentAdd.c
 * @author Saurabh K (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<RecordOperations.h>

void AddRecord(int number,struct Student s[])
{
  char name[100];
  
  printf("Enter Student roll no.\n");
  scanf("%d",&(s[number].Rollno));
  fflush(stdin);
  
  printf("Enter Student Name\n");
  scanf("%s",(s[number].Name));
  fflush(stdin);
  
  printf("Enter College Name\n");
  fflush(stdin);
  scanf("%s",(s[number].College));
  
  printf("Enter Branch Name\n");
  fflush(stdin);
  scanf("%s",(s[number].Branch));
    
  printf("Enter Mobile no.\n");
  fflush(stdin);
  scanf("%d",&(s[number].Mobileno));
    
  printf("Student with roll no. %d Added Successfully.!!\n",s[number].Rollno);
}
