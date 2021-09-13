#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct record{
    char name;
    char name2;
    char dob;
    char per_address;
    char curr_address;
	char father_name;
	char father_name2;
    char citizenship_no;
    char mother_name;
    char mother_name2;
	char gender;
    char email;
    int account_no;
};


int main(){
    struct record r;
    char choice, ch;
    FILE *fp;
    fp = fopen("C:\\Rojesh\\project.txt", "ab");
    if (fp == NULL)
    {
        printf("File Opening Unsuccessful\n");
        exit(0);
    }
    
    else{
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\tNABIL BANK\n");
        printf("Which account do you want to open?\n");
        printf("a) Saving Account\n");
        printf("b) Current Account\n");
        printf("c) Fixed Deposit\n");
        scanf("%c", &choice);
        switch (choice)
        {
        case 'a':
            printf("\t\t\t\t\t\t\t\tSavings Account KYC\n");
            break;
        
        case 'b':
            printf("\t\t\tCurrent Account KYC\n");
        
        case 'c':
            printf("\t\t\tFixed Deposit KYC\n");

        default:
            break;
        }

        printf("Personal Information\n");
        printf("Enter name:");
        scanf("%s", &r.name);
        scanf("%s", &r.name2);
        printf("Enter date of birth:");
        scanf("%s", &r.dob);
        printf("Enter gender:");
        scanf("%s", &r.gender);
        printf("Enter mother's name:");
        scanf("%s", &r.mother_name);
        scanf("%s", &r.mother_name2);
        printf("Enter father's name:");
        scanf("%s", &r.father_name);
        scanf("%s", &r.father_name2);
        printf("Enter citizenship number:");
        scanf("%s", &r.citizenship_no);

        printf("\nAddress Detail\n");
        printf("Enter current address:");
        scanf("%s", &r.curr_address);
        printf("Enter permanent address:");
        scanf("%s", &r.per_address);
        printf("Enter email address:");
        scanf("%s", &r.email);
        getch();
    }
    fclose(fp);
    return 0;
}