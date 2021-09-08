#include<record_operations.h>
void search()
{
    FILE *fp;
    struct student m;
    char stname[20];
    system("cls");
    gotoxy(10,3);
    printf("<--:SEARCH RECORD:-->");
    gotoxy(10,5);
    printf("Enter name of student : ");
    fflush(stdin);
    gets(stname);
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,6);
        printf("Error opening file");
        exit(1);
    }
    while(fread(&m,sizeof(m),1,fp ) == 1){
        if(strcmp(stname,m.name) == 0){
            gotoxy(10,8);
            printf("Name : %s",m.name);
            gotoxy(10,9);
            printf("College Name : %s",m.college);
            gotoxy(10,10);
            printf("Sem : %d",m.sem);
            gotoxy(10,11);
            printf("Branch : %s",m.branch);
            gotoxy(10,12);
            printf("City : %s",m.city);
        }
    }
    fclose(fp);
    gotoxy(10,16);
    printf("Press any key to continue.");
    getch();
    menu();
}
