
int main_exit; 

void erase()
{
	int test= 0; 
    FILE *old,*del;
   
    old=fopen("file.txt","r");
    del=fopen("temporary.txt","w");
    

    printf("Enter the account no. of the customer you want to delete:");
    scanf("%s",rem.acc_no);
    
    
    while (fscanf(old,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",&add.deposit.month,&add.deposit.day,&add.deposit.year,add.acc_no,add.name,add.name2,&add.dob.month,&add.dob.day,&add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,&add.amt)!=EOF)
    {
       if(strcmp(add.acc_no,rem.acc_no) == 0){     	
                test++;
               printf("\n UserRecord deleted successfully!\n\n\n\t\t\t ThankYou\n\n\n\n\n");
	   }else{

	   	  fprintf(del,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);
	       
	   }
	}
	
	
   fclose(old);
   fclose(del);
   remove("file.txt");
   rename("temporary.txt","file.txt");
   
   
   if(test==0)
        {
            printf("\nRecord not found!!\a\a\a");
            erase_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);

                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    erase();
                else
                    {printf("\nInvalid!\a");
                    goto erase_invalid;}
        }
    else
        {
		printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            close();
        }
}
