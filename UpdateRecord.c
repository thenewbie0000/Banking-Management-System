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
    struct record r, temp;
    int input, count =0, found =0;
    FILE *fp;
    fp = fopen("C:\\Rojesh\\project.txt", "r+");
    if (fp == NULL)
    {
        printf("File Opening Unsuccessful\n");
        exit(0);
    }
    
    else{
        printf("Enter the account number of the bank account whose record is to be updated:\n");
        scanf("%d", &input);
        while (fread(&r, sizeof(r), 1, fp)){
            if (r.account_no == input){
                printf("Record Found\n");
                printf("Name : %s %s\n", r.name, r.name2);
                printf("Date Of Birth : %s BS\n", r.dob);
                printf("Gender : %s\n", r.gender);
                printf("Mother's Name : %s %s\n", r.mother_name, r.mother_name2);
                printf("Father's Name : %s %s\n", r.father_name, r.father_name2);
                printf("Citizenship Number : %s\n", r.citizenship_no);
                printf("Current Address : %s\n", r.curr_address);
                printf("Permanent Address : %s\n", r.per_address);
                printf("E-mail Address : %s\n", r.email);

                printf("\nEnter the updated record:\n");
                printf("Personal Information\n");
                printf("Enter name:");
                scanf("%s", &temp.name);
                scanf("%s", &temp.name2);
                printf("Enter date of birth:");
                scanf("%s", &temp.dob);
                printf("Enter gender:");
                scanf("%s", &temp.gender);
                printf("Enter mother's name:");
                scanf("%s", &temp.mother_name);
                scanf("%s", &temp.mother_name2);
                printf("Enter father's name:");
                scanf("%s", &temp.father_name);
                scanf("%s", &temp.father_name2);
                printf("Enter citizenship number:");
                scanf("%s", &temp.citizenship_no);

                printf("\nAddress Detail\n");
                printf("Enter current address:");
                scanf("%s", &temp.curr_address);
                printf("Enter permanent address:");
                scanf("%s", &temp.per_address);
                printf("Enter email address:");
                scanf("%s", &temp.email);
                fseek(fp, sizeof(temp)*count, SEEK_SET);
                fwrite(&temp, sizeof(temp), 1, fp);
                printf("Recorded Updated Successfully!!\n");
                break;
            }
            count++;
            found == 1;           
        }
        if (found == 0)
        printf("Record with that account number doesn't exist.");
        
    }
    return 0;
}











