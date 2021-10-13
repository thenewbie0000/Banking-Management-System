struct date{
    int month,day,year;

};
    
struct {
	char name[60];
    char name2[60];  
    int branch_no;
    int type,time,rate,remain;
    float intrst;
    char acc_no[30];
    char curr_address[40];
    char per_address[40];
    char phone[15];
    char acc_type[10];
    char *branch[40];
    float amt;
    char father_name[20];
    int citizenship_no[15];
    char mother_name[20];
	char gender[10];
    char email[40];
    struct date dob;
    struct date deposit;
    struct date withdraw;
}add,rem,update,trans,check;
