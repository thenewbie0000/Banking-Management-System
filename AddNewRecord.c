#include "AccountNumberGenerator.c"
int i,j;
int main_exit;


void new_acc(){
 char temp;
    int choice;
    FILE *ptr;
    ptr=fopen("file.txt","a+");
    
    system("cls");
    printf("\t==================================== ADD RECORD  ========================================================");
    printf("\n\n\n\t\t\t\t\tDate(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year);
    
   
    printf("\n\t\t\t\t\tEnter your  First name: ");
    scanf("%s",add.name);
        
    printf("\n\t\t\t\t\tEnter your  Last name: ");
    scanf("%s",add.name2);
        
    
    printf("\n\t\t\t\t\tEnter Your date of birth(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
        
    printf("\n\t\t\t\t\tEnter your Current Address: ");
    scanf("%s",add.curr_address);
    
    printf("\n\t\t\t\t\tEnter your Permanent Address: ");
    scanf("%s",add.per_address);
    
    printf("\n\t\t\t\t\tEnter the citizenship number: ");
    scanf("%s",add.citizenship_no);
    
    printf("\n\t\t\t\t\tEnter your Gender: ");
    scanf("%s",add.gender);
    
    printf("\n\t\t\t\t\tEnter your Father's FirstName: ");
    scanf("%s",add.father_name);
    printf("\n\t\t\t\t\tEnter your Mother's FirstName: ");
    scanf("%s",add.mother_name);
    
    
    printf("\n\t\t\t\t\tEnter your Mobile number: ");
    scanf("%s",add.phone);
    
    printf("\n\t\t\t\t\tEnter your Email: ");
    scanf("%s",add.email);
    

    printf("\n\t\t\t\t\t\t Type of account:\n\n\t\t\t\t\t\t#Saving\n\t\t\t\t\t\t#Current\n\t\t\t\t\t\t#Fixed1(for 1 year)\n\t\t\t\t\t\t#Fixed2(for 2 years)\n\t\t\t\t\t\t#Fixed3(for 3 years)\n\n\t\t\t\t\tEnter your choice: ");
    scanf("%s",add.acc_type);
    
    printf("\n\t\t\t\t\t\t Branch Name :\n\n\t\t\t\t\t\t[1] Kathmandu\n\t\t\t\t\t\t[2] Pokhara\n\t\t\t\t\t\t[3] Biratnagar\n\t\t\t\t\t\t[4] Hetauda\n\t\t\t\t\t\t[5] Ilam\n\t\t\t\t\t\t[6] Dang\n\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&add.branch_no);
    

if(add.branch_no >6){
	Beep(610,500);;
	printf("\t\t\t\tPlease Enter the Valid Branch Name");
	printf("\n\n\t\t\t\t----Enter the Branch Name Again--------");
	   printf("\n\n\t\t\t\t\t\t Branch Name :\n\n\t\t\t\t\t\t[1] Kathmandu\n\t\t\t\t\t\t[2] Pokhara\n\t\t\t\t\t\t[3] Biratnagar\n\t\t\t\t\t\t[4] Hetauda\n\t\t\t\t\t\t[5] Ilam\n\t\t\t\t\t\t[6] Dang\n\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&add.branch_no);
}

switch(add.branch_no){
	case 1:
		*(add.branch)= "Kathmandu";
		break;
	case 2:
		*(add.branch)= "Pokhara";
		break;
	case 3:
		*(add.branch)= "Biratnagar";
		break;
	case 4:
		*(add.branch)= "Hetauda";
		break;
	case 5:
		*(add.branch)= "Ilam";
		break;
	case 6:
		*(add.branch)= "Dang";
		break;		 			
}

     
    printf("\n\n\t\t\t\t\tEnter the amount to deposit: $");
    scanf("%f",&add.amt); 
    
    
    strcpy(add.acc_no,accountNumberGeneration(add.branch_no));
    

 //In the section we will check whether generated account number is taken or not and save the data to file
  //--------------------------------------------------------------------------------//
fprintf(ptr,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,*add.branch,add.amt);
   
   //---------------------------------------------------------------------------------//
    fclose(ptr);
    
    printf("\n\t\t\t\t\tAccount created successfully!");
    printf("\n\n========================================================================================================================");
    printf("\n\n\n\t\t\t\t\t Greetings from Nabil Bank! \n\n\tWe would like to thankyou for opening your bank account with us. Your account details are as follows:\n\n");
    printf("\t\t\t\tAccount Name:  %s %s\n\n",add.name, add.name2);
    printf("\t\t\t\tAccount Number:  %s",add.acc_no);
    printf("\n\n\t\t\t\tAccount Type:  %s\n\n",add.acc_type);
    
    printf("\t\t\tOnce again thankyou for choosing Nabil as your bank, we look forward to Surge Together Ahead.\n\n");
    printf("\t\t\t\tThank You.");
    printf("\n\n\n\t\tCustomer Service desk\n");
    printf("\n\t\t%s Branch",*add.branch);
     

    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit: ");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else if(main_exit==0)
            close();
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
} 
