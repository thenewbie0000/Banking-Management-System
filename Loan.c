void loan() {
    int loan_amount;
    int account_no;
    int year;
    int month;
    int day;

    FILE *ptr;
    ptr = fopen("loan.txt", "a+");

    system("cls");
    printf("\t==================================== LOAN SERVICE  ========================================================");

    printf("\n\t\t\t\t\tEnter Date: [MM/DD/YYYY] ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("\n\t\t\t\t\tEnter Account Number: ");
    scanf("%d", &account_no);

    // To-Implement: Check Account Number

    printf("\n\t\t\t\t\tEnter Loan Amount: ");
    scanf("%d", &loan_amount);

    // To-Implement: Check Loan Amount if It is allowed or not
    // To-Implement: Check previous loans
    
    fprintf(ptr, "%d\t%d\t%d/%d/%d\n",account_no, loan_amount, month, day, year);
    
    printf("\n\t\t\t\t\tLoan Recorded Successful!\n\n");
}
