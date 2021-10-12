float interest(float t, float amount, int rate);
void details(void){
    FILE *ptr;
    int test=0,rate;
    int choice;
    float time;
    float intrst;
    ptr=fopen("file.txt","r");
    printf("\n\t\tDo you want to check by\n\n\t\t1.Account no\n\t\t2.Name\n\n\t\tEnter your choice: ");
    scanf("%d",&choice);
    if (choice==1)
    {  
	 printf("\n\t\tEnter the account number:");
	  scanf("%s",check.acc_no);
//
         while (fscanf(ptr,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",&add.deposit.month,&add.deposit.day,&add.deposit.year,add.acc_no,add.name,add.name2,&add.dob.month,&add.dob.day,&add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,&add.amt)!=EOF)
       {
       	
           if(strcmp(add.acc_no,check.acc_no)==0)
           {   
			system("cls");
                test=1;
             printf("\n\t============================================== User Account Information ===================================\n\n");
               printf("\n\t\tAccount NO.:%s\n\n\t\tName:%s %s \n\n\t\tDOB:%d/%d/%d \n\n\t\tCurrent Adress:%s \n\n\t\tPermanent Address:%s \n\n\t\tCitizenship No:%s \n\n\t\tGender: %s \n\n\t\tFatherName: %s %s \n\n\t\tMotherName: %s %s \n\n\t\tPhone number:%s  \n\n\t\tEmail: %s \n\n\t\tType Of Account:%s \n\n\t\tBranch: %s \n\n\t\tAmount deposited:$ %f \n\n\t\tDate Of Deposit:%d/%d/%d\n",add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.name2,add.mother_name,add.name2,
               add.phone,add.email,add.acc_type,add.branch,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                if(strcmpi(add.acc_type,"fixed1")==0)
                  {
                      time=1.0;
                      rate=9;
                       intrst=interest(time,add.amt,rate);
                      printf("\n\n\t\tYou will get $%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                   }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                   {
                       time=2.0;
                      rate=11;
                      intrst=interest(time,add.amt,rate);
                       printf("\n\n\t\tYou will get $%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);

                   }
               else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                       rate=13;
                       intrst=interest(time,add.amt,rate);
                       printf("\n\n\t\tYou will get $%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);

                   }
                else if(strcmpi(add.acc_type,"Saving")==0)
                   {
                       time=(1.0/12.0);
                       rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n\t\tYou will get $%.2f as interest on %d of every month",intrst,add.deposit.day);

                    }
                 else if(strcmpi(add.acc_type,"Current")==0)
                   {

                       printf("\n\n\t\tYou will get no interest\a\a");

                     }

          }
	 }
    }
    else if (choice==2)
    {   
	printf("\n\n\tEnter the Firstname: ");
        scanf("%s",check.name);
         printf("\n\tEnter the lastname: ");
        scanf("%s",check.name2);
        
         while (fscanf(ptr,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",&add.deposit.month,&add.deposit.day,&add.deposit.year,add.acc_no,add.name,add.name2,&add.dob.month,&add.dob.day,&add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,&add.amt)!=EOF)
        {
            if(strcmpi(add.name,check.name)==0 && strcmpi(add.name2,check.name2)==0)
            {   system("cls");
                test=1;
            printf("\n\t============================================== User Account Information ===================================\n\n");
                printf("\n\t\tAccount NO.:%s\n\n\t\tName:%s %s \n\n\t\tDOB:%d/%d/%d \n\n\t\tCurrent Adress:%s \n\n\t\tPermanent Address:%s \n\n\t\tCitizenship No:%s \n\n\t\tGender: %s \n\n\t\tFatherName: %s %s \n\n\t\tMotherName: %s %s \n\n\t\tPhone number:%s  \n\n\t\tEmail: %s \n\n\t\tType Of Account:%s \n\n\t\tBranch: %s \n\n\t\tAmount deposited:$ %f \n\n\t\tDate Of Deposit:%d/%d/%d\n",add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.name2,add.mother_name,add.name2,
               add.phone,add.email,add.acc_type,add.branch,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                if(strcmpi(add.acc_type,"fixed1")==0)
                    {
                        time=1.0;
                        rate=9;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n\tYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                    }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                    {
                        time=2.0;
                        rate=11;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n\tYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);

                    }
                else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                        rate=13;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n\tYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);

                    }
                 else if(strcmpi(add.acc_type,"Saving")==0)
                    {
                        time=(1.0/12.0);
                        rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\n\tYou will get $.%.2f as interest on %d of every month",intrst,add.deposit.day);

                     }
                 else if(strcmpi(add.acc_type,"Current")==0)
                    {

                        printf("\n\n\tYou will get no interest\a\a");

                     }

            }
        }
    }


    fclose(ptr);
     if(test!=1)
        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            see_invalid:
              printf("\n\n\tEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    details();
                else
                    {
                        system("cls");
                        printf("\nInvalid!\a");
                        goto see_invalid;}
        }
    else
        {printf("\n\n\tEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);}
        if (main_exit==1)
        {
            system("cls");
            menu();
        }

        else
           {

             system("cls");
            close();
            }
}

float interest(float t,float amount,int rate)
{
    float SI;
    SI=(rate*t*amount)/100.0;
    return (SI);

}
