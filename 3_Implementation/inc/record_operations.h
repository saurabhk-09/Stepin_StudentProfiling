
#ifndef __RECORD_OPERATIONS_H__
#define __RECORD_OPERATIONS_H__

#include<stdio.h>
#include<conio.h>
//#include<ncurses.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

typedef struct student
{
    char name[20];
    char college[10];
    int  sem;
    char branch[20];
    char city[20];
}m;

void gotoxy(int ,int );
void menu();
void add();
void display();
void search();
void modify();
void deleterec();

#endif  /* __RECORD_OPERATIONS_H__*/