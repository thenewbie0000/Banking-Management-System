int main_exit;
void menu();
void close();

void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

int options()
{	
int i=0;	

 char temp;
	system("color A");
    char pass[10],password[10]="pass",user[20],username[20] = "root";

    printf("\n\n\n\t\t\t\t   WELCOME  To NABIL BANK LIMITED \n\n\t\t\t\t       Surging Together Ahead");
        printf("\n\n\t------------------------------------------------------------------------------------------------");
        printf("\n\t\t\t\t\t  USER LOGIN  DETAILS  PAGE");
        printf("\n\t------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\t\t\tEnter the Username to login: ");
    scanf("%s",user);
    printf("\n\t\t\t\tEnter the password to login: ");
    
    scanf("%s",pass);

    if (strcmp(pass,password)==0  && strcmp(user,username)==0)
        {
		printf("\n\n\t\t\t\tUser Found  Sucessfully ! \n\n\n\t\t\t\tLOGGING IN ");
        for(i=0;i<=7;i++)
        {
            fordelay(100000000);
            printf(". ");
        }
        printf("\n\n\n\n");
                system("pause");
				system("cls");
                
          menu();
        }
    else
        { 
        Beep(610,500);
		  printf("\n\n\t\t\tWrong Details!!\a\a\a");
            login_try:
            printf("\n\n\t\t\tEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        main();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;}

        }
        return 0;
}

void close(void)
{
	system("color A");
    printf("\n\tThankyou For Choosing Nabil as Your \n\tBank, we look forward to Surge Together Ahead.\n\n \tThank You");
  }
    



void view_list(){
printf("working");

}

 
void menu(void)
{   int choice;
    system("cls");
    system("color D");
    printf("\n\n\t\t\t\t       NABIL BANK LIMITED ");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2   WELCOME TO THE MAIN MENU   \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t<1> Create a new account\n\t\t\t<2> Update information of existing account\n\t\t\t<3> Transactions\n\t\t\t<4> Check the details of existing account\n\t\t\t<5> DELETE existing account\n\t\t\t<6> View customer's list\n\t\t\t<7> ATM Feature\n\t\t\t<8> Loan\n\t\t\t<9> EXIT\n\n\n\n\t\t\t Enter your choice: ");
    scanf("%d",&choice);

    system("cls");
    
    switch(choice)
    {
        case 1:
		new_acc();
        break;
        case 2:edit();
        break;
        case 3:transact();
        break;
        case 4:see();
        break;
        case 5:erase();
        break;
        case 6:view_list();
        break;
        case 7:atm();
        break;
        case 8:loan();
        break;
        case 9:close();
        break;
    }
}


