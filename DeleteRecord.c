#include "AddNewRecord.c"

void erase() {
    FILE *ptr, *del;
	int num, found;
    ptr= fopen("C:\\\\newfile.txt","r+b");
	del = fopen("C:\\\\temporary.txt", "ab");
	printf("Enter account number of bank account which you want to close:\n");
	scanf("%d", &num);
	rewind(ptr);
	found =0;
	while ((fread(&add, sizeof(add), 1, ptr)) == 1){
		if (num == add.account_no)
		found++;
		else
		fwrite(&add, sizeof(add), 1, del);
	}
    if (found == 0)
    printf("Record Not Found!!\n"); 
    fclose(ptr);
    fclose(del);
    remove("C:\\\\newfile.txt");   
    rename("C:\\\\temporary.txt", "C:\\\\newfile.txt");   
    getch();
    printf("Your Bank Account and all the transaction related to it is deleted.\n");
}
