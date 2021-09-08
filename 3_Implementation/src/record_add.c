#include<record_operations.h>

void add()
{
    FILE *fp;
    struct student m;
    char another ='y';
    system("cls");

    fp = fopen("record.txt","ab+");
    if(fp == NULL){
        gotoxy(10,5);
        printf("Error opening file");
        exit(1);
    }
    fflush(stdin);
    while(another == 'y')
    {
        gotoxy(10,3);
        printf("<--:ADD RECORD:-->");
        gotoxy(10,5);
        printf("Enter details of student");
        gotoxy(10,7);
        printf("Enter student Name : ");
        gets(m.name);
        gotoxy(10,8);
        printf("Enter College Name  : ");
        gets(m.college);
        gotoxy(10,9);
        printf("Enter sem : ");
        scanf("%d",&m.sem);
        fflush(stdin);
        gotoxy(10,10);
        printf("Enter branch : ");
        gets(m.branch);
        gotoxy(10,11);
        printf("Enter city : ");
        gets(m.city);
        fwrite(&m,sizeof(m),1,fp);
        gotoxy(10,15);
        printf("Want to add of another record? Then press 'y' else 'n'.");
        fflush(stdin);
        another = getch();
        system("cls");
        fflush(stdin);
    }
    fclose(fp);
    gotoxy(10,18);
    printf("Press any key to continue.");
    getch();
    menu();
}
