int main_exit;
void edit(){
  FILE *ptr,*del;
   int choice,test = 0;
   ptr=fopen("file.txt","r");
   del=fopen("temporary.txt","w");
   printf("\n   Enter the account number of your bank account to update the record: ");
   scanf("%s",update.acc_no );
   
    while (fscanf(ptr,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",&add.deposit.month,&add.deposit.day,&add.deposit.year,add.acc_no,add.name,add.name2,&add.dob.month,&add.dob.day,&add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,&add.amt)!=EOF)
    {
       if(strcmp(add.acc_no,update.acc_no) == 0){   
	   test = 1;  
	    	    printf("\n===============================================================================================================\n");
                printf("\n\t\t\tOld Record:\n");
                printf("-----------------------------------------------------------------------------------------------------\n");
                printf("\t\t\tName of customer: %s %s\n",add.name,add.name2);
                printf("\t\t\tDate Of Birth(mm/dd/yyyy) : %d/%d/%d\n", add.dob.month, add.dob.day, add.dob.year);
                printf("\t\t\tCurrent Address : %s\n", add.curr_address);
                printf("\t\t\tPermanent Address : %s\n", add.per_address);
                printf("\t\t\tCitizenship Number : %s\n", add.citizenship_no);
                printf("\t\t\tGender: %s\n", add.gender);
                printf("\t\t\tFather's Name : %s %s\n", add.father_name, add.name2);
                printf("\t\t\tMother's Name : %s %s\n", add.mother_name, add.name2);
                printf("\t\t\tMobile Number : %s\n", add.phone);
                printf("\t\t\tEmail address : %s\n", add.email);
                printf("\t\t\tAccount Type : %s\n", add.acc_type);
                printf("\n===============================================================================================================\n");
                printf("\n\t\t\t Edit Record \n");
				printf("\n\t\tWhich information do you want to change?\n\t\t1. Customer Name\n\t\t2. DOB\n\t\t3. Current_Adress\n\t\t4. Permanent_Adress\n\t\t5. Citizenship_no\n\t\t6. Gender\n\t\t7. Father_firstname\n\t\t8. Mother_firstname\n\t\t9. mobile Number\n\t\t10. Email\n\t\t11. Type of Account\n\t\t12. All\n\n\t\tEnter your choice: ");
                scanf("%d",&choice); 
                system("cls");
                
                if(choice == 1){
                 printf("\n\t\t\t\t\tEnter your  First name: ");
                 scanf("%s",update.name);
                 printf("\n\t\t\t\t\tEnter your  Last name: ");
                 scanf("%s",update.name2);
                 fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,update.name,update.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);
                 system("cls");
                printf("\n\n\t\tChanges saved!");
                	
				}else if(choice ==2 ){
			     printf("\n\t\t\t\t\tEnter Your date of birth(mm/dd/yyyy): ");
                 scanf("%d/%d/%d",&update.dob.month,&update.dob.day,&update.dob.year);
                 fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,update.dob.month,update.dob.day,update.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);
                 system("cls");
                 printf("\n\n\t\tChanges saved!");	
				}else if(choice ==3 ){	
				
				 printf("\n\t\t\t\t\tEnter your Current Address: ");
                   scanf("%s",update.curr_address);
                 fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,update.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);
                 system("cls");
                 printf("\n\n\t\tChanges saved!");
                 
				}else if(choice ==4 ){
					
				printf("\n\t\t\t\t\tEnter your Permanent Address: ");
                scanf("%s",update.per_address);
                fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,update.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);
                 system("cls");
                printf("\n\n\t\tChanges saved!");
					
				}else if(choice ==5 ){
			  printf("\n\t\t\t\t\tEnter the citizenship number: ");
               scanf("%s",update.citizenship_no);
                fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,update.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);
                 system("cls");
                 printf("\n\n\t\tChanges saved!");
					
				}else if(choice ==6 ){
				printf("\n\t\t\t\t\tEnter your Gender: ");
                 scanf("%s",update.gender);
                 fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,update.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);
                 system("cls");
                 printf("\n\n\t\tChanges saved!");
					
				}else if(choice ==7 ){
					
				printf("\n\t\t\t\t\tEnter your Father's FirstName: ");
                scanf("%s",update.father_name);
                fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,update.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);
                 system("cls");
                 printf("\n\n\t\tChanges saved!");
                 
				}else if(choice ==8 ){
				printf("\n\t\t\t\t\tEnter your Mother's FirstName: ");
                scanf("%s",update.mother_name);
                fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,update.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);
                 system("cls");
                printf("\n\n\t\tChanges saved!");
                 
				}else if(choice ==9 ){
					printf("\n\t\t\t\t\tEnter your Mobile number: ");
                    scanf("%s",update.phone);
                   fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,update.phone,add.email,add.acc_type,add.branch,add.amt);
                 system("cls");
                printf("\n\n\t\tChanges saved!");
					
				}else if(choice ==10 ){
		        printf("\n\t\t\t\t\tEnter your Email: ");
                  scanf("%s",update.email);
                fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,update.email,add.acc_type,add.branch,add.amt);
                 system("cls");
                printf("\n\n\t\tChanges saved!");
                 
				}else if(choice ==11 ){
					
	          printf("\n\t\t\t\t\t\t Type of account:\n\n\t\t\t\t\t\t#Saving\n\t\t\t\t\t\t#Current\n\t\t\t\t\t\t#Fixed1(for 1 year)\n\t\t\t\t\t\t#Fixed2(for 2 years)\n\t\t\t\t\t\t#Fixed3(for 3 years)\n\n\t\t\t\t\tEnter your choice: ");
              scanf("%s",update.acc_type);
              fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,update.acc_type,add.branch,add.amt);
                 system("cls");
                printf("\n\n\t\tChanges saved!");
                 
				}
                else if(choice == 12){
				
    printf("\n\t\t\tEnter  Record to Update:   \n");
    printf("\n\t\t\t\t\tEnter your  First name: ");
    scanf("%s",update.name);
        
    printf("\n\t\t\t\t\tEnter your  Last name: ");
    scanf("%s",update.name2);
        
    
    printf("\n\t\t\t\t\tEnter Your date of birth(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&update.dob.month,&update.dob.day,&update.dob.year);
        
    printf("\n\t\t\t\t\tEnter your Current Address: ");
    scanf("%s",update.curr_address);
    
    printf("\n\t\t\t\t\tEnter your Permanent Address: ");
    scanf("%s",update.per_address);
    
    printf("\n\t\t\t\t\tEnter the citizenship number: ");
    scanf("%s",update.citizenship_no);
    
    printf("\n\t\t\t\t\tEnter your Gender: ");
    scanf("%s",update.gender);
    
    printf("\n\t\t\t\t\tEnter your Father's FirstName: ");
    scanf("%s",update.father_name);
    printf("\n\t\t\t\t\tEnter your Mother's FirstName: ");
    scanf("%s",update.mother_name);
    
    
    printf("\n\t\t\t\t\tEnter your Mobile number: ");
    scanf("%s",update.phone);
    
    printf("\n\t\t\t\t\tEnter your Email: ");
    scanf("%s",update.email);
    

    printf("\n\t\t\t\t\t\t Type of account:\n\n\t\t\t\t\t\t#Saving\n\t\t\t\t\t\t#Current\n\t\t\t\t\t\t#Fixed1(for 1 year)\n\t\t\t\t\t\t#Fixed2(for 2 years)\n\t\t\t\t\t\t#Fixed3(for 3 years)\n\n\t\t\t\t\tEnter your choice: ");
    scanf("%s",update.acc_type);
    
     fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,update.acc_no,update.name,update.name2,update.dob.month,update.dob.day,update.dob.year,update.curr_address,update.per_address,update.citizenship_no,update.gender,update.father_name,update.mother_name,update.phone,update.email,update.acc_type,add.branch,add.amt);
                 system("cls");
               printf("\n\n\t\tChanges saved!");
    }         
	   }else{

       fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);
	   	 
			 }
	}
	fclose(ptr);
    fclose(del);
    remove("file.txt");
    rename("temporary.txt","file.txt");

if(test!=1)

        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            edit_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)

                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    edit();
                else
                    {printf("\nInvalid!\a");
                    goto edit_invalid;}
        }
    else
        {printf("\n\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            close();
        }
}
