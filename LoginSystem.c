int main_exit; 
void loginSystem(){
char username[50],askuser[50],askpass[50] ,password[50],new_username[50],new_password[50];
	
FILE *file,*news;
int test = 0;
file = fopen("password.dat","r");
news = fopen("temporary.dat","w");


printf("\n\t\t========================================LOGIN SYSTEM PAGE==================================== \n");

	while(fscanf(file,"%s %s",username,password) !=EOF){
		
		printf("\n\t\t\tPlease Enter old Username: ");
		scanf("%s",askuser);
		
		printf("\n\t\t\tPlease Enter old Password: ");
		scanf("%s",askpass);
		
		if(strcmp(username,askuser) == 0 && strcmp(password,askpass) == 0){
			test = 1;
			
			printf("\n\n\n\t\t\t User Details Sucessfully Match \n\n\t\t\tLoading ");
			 for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(". ");
        }
			system("cls");
			printf("\n\t\t\tEnter new Username: ");
			scanf("%s",new_username);
			printf("\n\t\t\tEnter new Password: ");
			scanf("%s",new_password);
			fprintf(news,"%s %s",new_username,new_password);
			printf("\n\n\t\tUsername and Password Changed Sucessfully\n\n\n");
			system("color A");
			
		}else{
			fprintf(news,"%s %s",username,password);
		}
}
		   fclose(file);
	       fclose(news);
        remove("password.dat");
	   rename("temporary.dat","password.dat");
				
	if(test == 1){
		
		printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
       else
           close();	
        }else{
        		printf("\n\t\t\tDetails not matched!\a\a\a");
           erase_invalid:
             printf("\n\n\t\tEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);

                if (main_exit==1)
                   menu();
               else if (main_exit==2)
                   close();
               else if(main_exit==0){
               	system("cls");
               	loginSystem();
				}
                    
                else
                   {printf("\nInvalid!\a");
                   goto erase_invalid;}
		}
}
