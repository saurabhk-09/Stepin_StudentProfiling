#include<record_operations.h>
void menu()
{
    int choice;
    system("cls");
    gotoxy(10,3);
    printf("<--:MENU:-->");
    gotoxy(10,5);
    printf("Enter appropriate number to perform following task.\n");
    //gotoxy(10,7);
    printf("1 : Add Record.\n");
    //gotoxy(10,8);
    printf("2 : Display Record.\n");
    //gotoxy(10,9);
    printf("3 : Search Record.\n");
    //gotoxy(10,10);
    printf("4 : Modify Record.\n");
    //gotoxy(10,11);
    printf("5 : Delete Record.\n");
    //gotoxy(10,12);
    printf("6 : Exit.\n");
    //gotoxy(12,2);
    printf("Enter your choice.");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        add();
        break;

    case 2:
        display();
        break;

    case 3:
        search();
        break;

    case 4:
        modify();
        break;

    case 5:
        deleterec();
        break;

    case 6:
        exit(1);
        break;

    default:
        gotoxy(10,17);
        printf("Invalid Choice.");
    }
}
