/**
 * @file RecordOperations.h
 * @author Saurabh K (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __RECORDOPERATIONS_H__
#define __RECORDOPERATIONS_H__

#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct Student
{
   int Rollno,Mobileno;
   char Name[100],Branch[100],College[100];
}s[100];

void DisplayRecord(int number);
void SearchRecord(int number);
void AddRecord(int number,struct Student s[]);
void DeleteRecord(int number);
void UpdateRecord(int number);

#endif  /* __RECORDOPERATIONS_H__*/