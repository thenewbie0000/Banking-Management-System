
void view_list(){	
	 FILE *view;
    view=fopen("file.txt","r");
    int test=0;
    system("cls");
    printf("\n   Date\t\t   ACC_NO.\t\t  Customer NAME\t\t  DOB\t\t  Balance\n\n");
    printf("=================================================================================================================\n\n");

    while (fscanf(view,"%d/%d/%d %s %s %s %d/%d/%d %s %s %s %s %s %s %s %s %s %s %f\n",&add.deposit.month,&add.deposit.day,&add.deposit.year,add.acc_no,add.name,add.name2,&add.dob.month,&add.dob.day,&add.dob.year,add.curr_address,add.per_address,add.citizenship_no,add.gender,add.father_name,add.mother_name,add.phone,add.email,add.acc_type,add.branch,&add.amt)!=EOF)
       {
           printf("   %d/%d/%d\t %s\t %s %s\t\t %d/%d/%d\t %f\n",add.deposit.month,add.deposit.day,add.deposit.year,add.acc_no,add.name,add.name2,add.dob.month,add.dob.day,add.dob.year,add.amt);
           test++;
       }

    fclose(view);
    if (test==0)
        {   system("cls");
            printf("\nNO RECORDS!!\n");}

    view_list_invalid:
     printf("\n\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else if(main_exit==0)
            close();
        else
        {
            printf("\nInvalid!\a");
            goto view_list_invalid;
        }
}
