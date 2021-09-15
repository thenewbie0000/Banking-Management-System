#include "AddNewRecord.c"
struct temp date;

int main(){
    FILE *ptr;
    ptr=fopen("C:\\Rojesh\\newfile.txt","r+b");
    int num, count =0, found =0;
    printf("Enter the account number of your bank account to update the record:\n");
    scanf("%d", &num);
    rewind(ptr);
    while (fread(&add, sizeof(add), 1, ptr)){
        if (num == add.account_no){
            printf("Old Record\n");
            printf("Name : %s %s\n", add.name, add.name2);
            printf("Date Of Birth(mm/dd/yyyy) : %d/%d/%d\n", add.dob.month, add.dob.day, add.dob.year);
            printf("Current Address : %s\n", add.curr_address);
            printf("Permanent Address : %s\n", add.per_address);
            printf("Citizenship Number : %s\n", add.citizenship_no);
            printf("Gender: %s\n", add.gender);
            printf("Father's Name : %s %s\n", add.father_name, add.name2);
            printf("Mother's Name : %s %s\n", add.mother_name, add.name2);
            printf("Mobile Number : %lf\n", add.phone);
            printf("Email address : %s\n", add.email);
            printf("Account Type : %s\n\n", add.acc_type);
            
            printf("Enter updated record\n");
            printf("\n\n\n\t\t\t\t\tDate(mm/dd/yyyy): ");
            scanf("%d/%d/%d",&temp.deposit.month,&temp.deposit.day,&temp.deposit.year);
            printf("\n\t\t\t\t\tEnter your  First name: ");
            scanf("%s",temp.name);
            printf("\n\t\t\t\t\tEnter your  Last name: ");
            scanf("%s",temp.name2);    
            printf("\n\t\t\t\t\tEnter Your date of birth(mm/dd/yyyy): ");
            scanf("%d/%d/%d",&temp.dob.month,&temp.dob.day,&temp.dob.year);
            printf("\n\t\t\t\t\tEnter your Current Address: ");
            scanf("%s",temp.curr_address);
            printf("\n\t\t\t\t\tEnter your Permanent Address: ");
            scanf("%s",temp.per_address);
            printf("\n\t\t\t\t\tEnter the citizenship number: ");
            scanf("%s",temp.citizenship_no);
            printf("\n\t\t\t\t\tEnter your Gender: ");
            scanf("%s",temp.gender);
            printf("\n\t\t\t\t\tEnter your Father's FirstName: ");
            scanf("%s",temp.father_name);
            printf("\n\t\t\t\t\tEnter your Mother's FirstName: ");
            scanf("%s",temp.mother_name);
            printf("\n\t\t\t\t\tEnter your Mobile number: ");
            scanf("%lf",&temp.phone);
            printf("\n\t\t\t\t\tEnter your Email: ");
            scanf("%s",temp.email);
            printf("\n\t\t\t\t\t\t Type of account:\n\n\t\t\t\t\t\t#Saving\n\t\t\t\t\t\t#Current\n\t\t\t\t\t\t#Fixed1(for 1 year)\n\t\t\t\t\t\t#Fixed2(for 2 years)\n\t\t\t\t\t\t#Fixed3(for 3 years)\n\n\t\t\t\t\tEnter your choice: ");
            scanf("%s",temp.acc_type);
            printf("\n\t\t\t\t\t\t Branch Name :\n\n\t\t\t\t\t\t[1] Kathmandu\n\t\t\t\t\t\t[2] Pokhara\n\t\t\t\t\t\t[3] Biratnagar\n\t\t\t\t\t\t[4] Hetauda\n\t\t\t\t\t\t[5] Ilam\n\t\t\t\t\t\t[6] Dang\n\n\t\t\t\t\tEnter your choice: ");
            scanf("%d",&temp.branch_no);
            if(temp.branch_no >6){
	            Beep(610,500);;
	            printf("\t\t\t\tPlease Enter the Valid Branch Name\n");
	            printf("\n\n\t\t\t\t----Enter the Branch Name Again--------");
	            printf("\n\n\t\t\t\t\t\t Branch Name :\n\n\t\t\t\t\t\t[1] Kathmandu\n\t\t\t\t\t\t[2] Pokhara\n\t\t\t\t\t\t[3] Biratnagar\n\t\t\t\t\t\t[4] Hetauda\n\t\t\t\t\t\t[5] Ilam\n\t\t\t\t\t\t[6] Dang\n\n\t\t\t\t\tEnter your choice: ");
                scanf("%d",&temp.branch_no);
                fseek(ptr, sizeof(temp)*count, SEEK_SET);
                fwrite(&temp, sizeof(temp), 1, ptr);
                printf("Updated Successfully!!\n");
                break;
            }
            count++;
            found ==  1;
        }
        if (found == 0)
        printf("Record Not Found!!\n"); 
    }
    
}