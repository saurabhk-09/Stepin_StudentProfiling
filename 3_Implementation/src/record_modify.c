#include<record_operations.h>
void modify()
{
    char mname[20];
    FILE *fp;
    struct student m;
    system("cls");
    gotoxy(10,3);
    printf("<--:MODIFY RECORD:-->");
    gotoxy(10,5);
    printf("Enter name of student to modify: ");
    fflush(stdin);
    gets(mname);
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,6);
        printf("Error opening file");
        exit(1);
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&m,sizeof(m),1,fp) == 1)
    {
        if(strcmp(mname,m.name) == 0){
            gotoxy(10,7);
            printf("Enter Name: ");
            gets(m.name);
            gotoxy(10,8);
            printf("Enter College name  : ");
            gets(m.college);
            gotoxy(10,9);
            printf("Enter sem : ");
            scanf("%d",&m.sem);
            gotoxy(10,10);
            printf("Enter branch : ");
            fflush(stdin);
            gets(m.branch);
            gotoxy(10,11);
            printf("Enter city : ");
            fflush(stdin);
            gets(m.city);
            fseek(fp ,-sizeof(m),SEEK_CUR);
            fwrite(&m,sizeof(m),1,fp);
            break;
        }
    }
    fclose(fp);
    gotoxy(10,16);
    printf("Press any key to continue.");
    getch();
    menu();
}
