int main_exit;
float interest(float t, float amount,int rate);

void loan() {
		system("color A");
	int month;
	int day;
	int year;
	float loanAmt,t,intrst;
	int choose,type,rate,time,confirm,exist = 0;
    FILE *ptr,*loan,*temporary;
     ptr = fopen("file.txt","r");
     loan = fopen("loan.txt","r");
     temporary = fopen("temporary.txt","w");
     
     // Use GetSystemTime(&t) to get UTC time
    SYSTEMTIME current_time; 
    GetLocalTime(&current_time); 


    system("cls");
    printf("\n\t==================================== LOAN SERVICE  ========================================================");
    
    
           printf("\n\n\t\t\t\t\tEnter Account Number: ");
           scanf("%s",check.acc_no);
           printf(" \n\n\t\t   Welcome  to Loan Facilities provided by Nabil Bank\n\n ");
		   printf("\t\tWhich Service You Want to Choose?\n\n\t\t1) Take Loan\n\t\t2) Pay Total Loan \n\t\t3) Pay Interest\n\n\t\tChoice: ");
             scanf("%d",&choose);
                             
                if(choose ==1)
				{				  
				while(fscanf(loan,"%s %f %d/%d/%d %d %d %d %d %f",trans.acc_no,&trans.amt,&trans.deposit.day,&trans.deposit.month,&trans.deposit.year,&trans.time,&trans.remain,&trans.type,&trans.rate,&trans.intrst)!= EOF)
				{
					
					if(strcmp(check.acc_no,trans.acc_no)==0 && trans.amt != 0.000000){
						system("cls");
					exist = 1;
						printf("\n\n\t\tYou Already Have Taken Loan. Please Pay Your Due For another Loan\n\n");
						printf("\t\tYour Previuos Loan is $%f",trans.amt);  
					    fprintf(temporary,"%s %f %d/%d/%d %d %d %d %d %f\n",trans.acc_no,trans.amt,trans.deposit.day,trans.deposit.month,trans.deposit.year,trans.time,trans.remain,trans.type,trans.rate,trans.intrst);
				
			        fclose(ptr);
                  fclose(loan);
                  fclose(temporary);
                  remove("loan.txt");
                   rename("temporary.txt","loan.txt");
				         trys:
							printf("\n\n\t\tEnter 0 to Main Menu and 1 to exit : ");
							scanf("%d",&main_exit);							
							if(main_exit == 0){		
								menu();			
							}else if(main_exit == 1){		
								close();
							}else{
								printf("\n\n\t\tInvalid  Option!!!!");
								system("cls");
								goto trys;
								
							}											
				}
					else{
						
					 fprintf(temporary,"%s %f %d/%d/%d %d %d %d %d %f\n",trans.acc_no,trans.amt,trans.deposit.day,trans.deposit.month,trans.deposit.year,trans.time,trans.remain,trans.type,trans.rate,trans.intrst);
			}
			
           }       
           
           if(exist == 0){
           	system("cls");
           	loan_menu:
                printf("\n\t\tFill The Following information for loan...");
						printf("\n\n\t\tWhat type of Loan you Want to take?\n\n\t\t1.Home Loan\n\n\t\t2.Mortage Loan\n\n\t\t3.Personal Loan\n\n\n\t\tChoice: ");
					    scanf("%d",&type);
					    
					    if(type == 1){
					    	rate = 2;
						} else if(type == 2){
							rate = 2;
						}else if(type == 3){
							rate = 7;
						}else{
							printf("/n/n/t/t Invalid Options\n\n");
						}
						
						printf("\n\t\tEnter today date(mm/dd/yyyy): ");
						scanf("%d/%d/%d",&month,&day,&year);
						
						printf("\n\n\t\tHow Much Money You Want to Loan ?: $");
						scanf("%f",&loanAmt);
						
						printf("\n\n\t\tFor How many Months You want to take loan ?: ");
						scanf("%d",&time);
						
						printf("\n\n\t\tDo You Confirm want to Take loan? (1 for yes and 0 for No): ");
						scanf("%d",&confirm);
						
						if(confirm == 1){
						t = (float)time/12;
						intrst = interest(t,loanAmt,rate);
						fprintf(temporary,"%s %f %d/%d/%d %d %d %d %d %f\n",check.acc_no,loanAmt,month,day,year,time,time,type,rate,intrst * time);
						
						printf("\n\n\n\n\t\t\tYour Loan is Sucessfully Accepted");
					
						printf("\n\n\t\t\tTotal Amount to be Paid: $%.2f",loanAmt+(intrst*time));
						printf("\n\t\tYou will have to paid $%.2f as interest on %d of every month and Amount $%.2f after %d months",intrst,month,loanAmt,time);
                        
                         fclose(ptr);
		                fclose(loan);
		            fclose(temporary);
		          remove("loan.txt");
		           rename("temporary.txt","loan.txt");  
		   
                        main_try:
							printf("\n\n\t\tEnter 0 to Main Menu and 1 to exit : ");
							scanf("%d",&main_exit);							
							if(main_exit == 0){		
								menu();			
							}else if(main_exit == 1){		
								close();
							}else{
								printf("\n\n\t\tInvalid  Option!!!!");
								system("cls");
								goto main_try;
								
							}
							
		 
		                  
		   }else{
		   	                 loan_try:
							printf("\n\n\t\tEnter 0 to try again , 1 to exit : ");
							scanf("%d",&main_exit);
							
							if(main_exit == 0){
							system("cls");
								goto loan_menu;			
							}else if(main_exit== 1){		
							system("cls");
								close();
							}else{
								printf("\n\n\t\tInvalid  Option!!!!");
								system("cls");
								goto loan_try;
								
							}
		   }
           
		   }  
		                 fclose(ptr);
		                fclose(loan);
		            fclose(temporary);
		          remove("loan.txt");
		           rename("temporary.txt","loan.txt");   
		    
       }else if(choose == 2){
       	system("cls");
       			while(fscanf(loan,"%s %f %d/%d/%d %d  %d %d %d %f",trans.acc_no,&trans.amt,&trans.deposit.day,&trans.deposit.month,&trans.deposit.year,&trans.time,&trans.remain,&trans.type,&trans.rate,&trans.intrst)!= EOF)
				{
					
					if(strcmp(check.acc_no,trans.acc_no)==0){
					
					printf("\n\n\t\t\tYou take Loan on  %d/%d/%d ",trans.deposit.day,trans.deposit.month,trans.deposit.year);
					printf("\n\n\t\t\tToday date is %d/%d/%d",current_time.wDay,current_time.wMonth,current_time.wYear);
					int interval;
					if(current_time.wYear == trans.deposit.year){
						interval = current_time.wMonth - trans.deposit.month;
					} else{
						interval = (current_time.wMonth + 12) - trans.deposit.month;
					}
					
					printf("\n\n\t\t\t It has been %d months from your Loan ",interval);
					printf("\n\n\t\t\t You take Loan for %d months",trans.time);
					
					if(interval < trans.time){
						printf("\n\n\t\tYour Loan Peroid is not finished yet. So you can pay interest only if you wanted");
					}else{
						printf("\n\n\t\tYour Loan Peroid is finished. so please clear Loan By paying \n\n\t\t\t$%.2f",trans.amt + trans.intrst);
					}
					
					printf("\n\n\t\tDo you want to clear loan? ( 1 for yes/ 0 for no): ");
					scanf("%d",&confirm);
					if(confirm == 1){
                        printf("\n\n\t\t\t Loan Cleared Sucessfully");
					}else{
						fprintf(temporary,"%s %f %d/%d/%d %d %d %d %d %f\n",check.acc_no,trans.amt,trans.deposit.month,trans.deposit.day,trans.deposit.year,trans.time,trans.remain,trans.type,trans.rate,trans.intrst);
					}
				}
					else{
						
					 fprintf(temporary,"%s %f %d/%d/%d %d %d %d %d %f\n",trans.acc_no,trans.amt,trans.deposit.day,trans.deposit.month,trans.deposit.year,trans.time,trans.remain,trans.type,trans.rate,trans.intrst);
			}
			
           }
           fclose(ptr);
           fclose(loan);
           fclose(temporary);
           remove("loan.txt");
           rename("temporary.txt","loan.txt");
           
            	printf("\n\n\t\t\tEnter 1 to go to the main menu and 0 to exit:");
                scanf("%d",&main_exit);
               system("cls");
                  if (main_exit==1)
                 menu();
                else
                    close();
                    
	   }else if (choose == 3){
	  system("cls");
	  		while(fscanf(loan,"%s %f %d/%d/%d %d %d  %d %d %f",trans.acc_no,&trans.amt,&trans.deposit.day,&trans.deposit.month,&trans.deposit.year,&trans.time,&trans.remain,&trans.type,&trans.rate,&trans.intrst)!= EOF)
				{
					
					if(strcmp(check.acc_no,trans.acc_no)==0){
					
					printf("\n\n\t\t\tYou take Loan on  %d/%d/%d ",trans.deposit.day,trans.deposit.month,trans.deposit.year);
					printf("\n\n\t\t\tToday date is %d/%d/%d",current_time.wDay,current_time.wMonth,current_time.wYear);
					int interval;
					if(current_time.wYear == trans.deposit.year){
						interval = current_time.wMonth - trans.deposit.month;
					} else{
						interval = (current_time.wMonth + 12) - trans.deposit.month;
					}
					
					printf("\n\n\t\t\t It has been %d months from your Loan ",interval);
					printf("\n\n\t\t\t You take Loan for %d months",trans.time);
					
					if(interval < trans.time){
						float gettime,getintrst,interestLeft;
					gettime = (float) trans.time/12; 
					getintrst = interest(gettime,trans.amt,trans.rate);
					printf("\n\n\t\tYour Loan Peroid is not finished yet. So you can pay interest ");
				
					
						
					printf("\n\n\t\tYour total Interest for %d months(Loan peroid) is $%.2f",trans.time,getintrst * trans.time);
						printf("\n\n\t\tYour remaining interest is $%.2f",trans.intrst);
						if(trans.remain == 8){
							printf("\n\n\t\tYour interest for %d months is $%.2f",interval,getintrst*interval);
							
						}else{
							
								printf("\n\n\t\tYour interest for remaining %d months is $%.2f",trans.remain,getintrst*trans.remain);
							
						}
				
					
						printf("\n\n\n\t\tDo you want to pay interest for %d months ? ( 1 for yes/ 0 for no): ",trans.remain == 8 ? interval:trans.remain );
					    scanf("%d",&confirm);
					if(confirm == 1){
						
                        printf("\n\n\t\t\tInterest Paid  Sucessfully");
                        interestLeft = trans.intrst - (getintrst * interval);
                        
                        if(trans.remain == 8){
                        	trans.remain = trans.time - interval;
						}else{
								trans.remain = 0;
								interestLeft = 0.000000;
						}
                        printf("\n\n\t\t\tInterest Left: $%.2f",interestLeft);
                       
                        

                        fprintf(temporary,"%s %f %d/%d/%d %d %d  %d %d %f\n",check.acc_no,trans.amt,trans.deposit.day,trans.deposit.month,trans.deposit.year,trans.time,trans.remain,trans.type,trans.rate,interestLeft);
                        
					}else{
						 fprintf(temporary,"%s %f %d/%d/%d  %d %d %d %d %f\n",check.acc_no,trans.amt,trans.deposit.day,trans.deposit.month,trans.deposit.year,trans.time,trans.remain,trans.type,trans.rate,trans.intrst);
					}
					
					
					}else{
						printf("\n\n\t\tYour Loan Peroid is finished. so you should clear  Loan By paying $%.2f",trans.amt + trans.intrst);
					}
					
					
					
				
					
				
				}
					else{
						
					 fprintf(temporary,"%s %f %d/%d/%d  %d %d %d %d %f\n",trans.acc_no,trans.amt,trans.deposit.day,trans.deposit.month,trans.deposit.year,trans.time,trans.remain,trans.type,trans.rate,trans.intrst);
			}
			
           }
	  
	       fclose(ptr);
           fclose(loan);
           fclose(temporary);
           remove("loan.txt");
           rename("temporary.txt","loan.txt");
           
            	printf("\n\n\t\t\tEnter 1 to go to the main menu and 0 to exit:");
                scanf("%d",&main_exit);
               system("cls");
                  if (main_exit==1)
                 menu();
                else
                    close();
	   	
	   }else{
	   	printf("Invalid option");
	   	close();
	   }			
	}

