
void transact(void)
{   int choice,test=0;
    FILE *old,*newrec;
    old=fopen("file.txt","r");
    newrec=fopen("new.txt","w");

        printf("Enter the account no. of the customer:");
    scanf("%s",trans.acc_no);
    while (fscanf(old,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",&add.deposit.month,&add.deposit.day,&add.deposit.year,add.acc_no,add.name,add.name2,&add.dob.month,&add.dob.day,&add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,&add.amt)!=EOF)

   {

            if(strcmp (add.acc_no,trans.acc_no)==0)
            {   test=1;
                if(strcmpi(add.acc_type,"fixed1")==0||strcmpi(add.acc_type,"fixed2")==0||strcmpi(add.acc_type,"fixed3")==0)
                {
                    printf("\a\a\a\n\nYOU CANNOT DEPOSIT OR WITHDRAW CASH IN FIXED ACCOUNTS!!!!!");
                    fordelay(1000000000);
                    system("cls");
                    menu();

                }
                printf("\n\nDo you want to\n1.Deposit\n2.Withdraw?\n\nEnter your choice(1 for deposit and 2 for withdraw):");
                scanf("%d",&choice);
                if (choice==1)
                {
                    printf("Enter the amount you want to deposit:$ ");
                    scanf("%f",&trans.amt);
                    add.amt+=trans.amt;
                    fprintf(newrec,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);
                    printf("\n\nDeposited successfully!");
                }
                else
                {
                    printf("Enter the amount you want to withdraw:$ ");
                    scanf("%f",&trans.amt);
                    add.amt-=trans.amt;
                    fprintf(newrec,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);


                    printf("\n\nWithdrawn successfully!");
                }

            }
            else
            {
               fprintf(newrec,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,add.amt);

            }
   }
   fclose(old);
   fclose(newrec);
   remove("file.txt");
   rename("new.txt","file.txt");
   if(test!=1) 
   {
       printf("\n\nRecord not found!!");
       transact_invalid:
      printf("\n\n\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
      scanf("%d",&main_exit);
      system("cls");
      if (main_exit==0)
        transact();
    else if (main_exit==1)
        menu();
    else if (main_exit==2)
        close();
    else
    {
        printf("\nInvalid!");
        goto transact_invalid;
    }

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
