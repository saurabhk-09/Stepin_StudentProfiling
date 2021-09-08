#include<record_operations.h>
void display()
{
    FILE *fp;
    int i=1,j;
    struct student m;
    system("cls");
    gotoxy(10,3);
    printf("<--:Display RECORD:-->\n");
    //gotoxy(10,5);
    printf("ID   Name of student   College Name     sem      Branch      City\n");
    //gotoxy(10,6);
    printf("===========================================================================\n");
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,10);
        printf("Error opening file.");
        exit(1);
    }
    j=10;
    while(fread(&m,sizeof(m),1,fp) == 1){
        gotoxy(10,j);
        printf("%-7d%-22s%-12s%-10d%-13s%-13s\n",i,m.name,m.college,m.sem,m.branch,m.city);
        i++;
        j++;
    }
    fclose(fp);
    gotoxy(10,j+3);
    printf("Press any key to continue.");
    getch();
    menu();
}
