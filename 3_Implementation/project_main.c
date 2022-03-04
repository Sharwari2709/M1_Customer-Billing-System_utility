#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define GOTOXY(x,y) printf("\033[%d;%df",y,x)


 struct date{
       int month;
       int day;
       int year;
       };

  struct account {
    int number;
    char name[100];
    int acct_no;
    float mobile_no;
    char street[100];
    char city[100];
    char acct_type;
    float oldbalance;
    float newbalance;
    float payment;
    struct date lastpayment;
  }customer;
  int tl,sl,ts;
  
 void gotoxy(int x, int y){
     printf("\033[%d;%dH",y,x);
 }
 

 void main()
    {
      int i,n;
      char ch;
      system("clear");
      

      
      printf("   CUSTOMER BILLING SYSTEM:\n\n");
      printf("===============================\n\n");
      printf("1:  Add account on list\n");
      printf("2:  search customer account\n");
      printf("3:  EXIT\n");
      printf(" ================================\n");
      do{
           printf("\nselect what do you want to do?\n");
           ch=getchar();
      }while(ch<='0' || ch>'3');
      
      switch(ch){
        case '1':
        system("clear");
            
        printf("\nhow many customer accounts: ");
            scanf("%d",&n);
            getchar();
            for(i=0;i<n;i++){
                input();
                if(customer.payment>0.0)
                    customer.acct_type=(customer.payment< customer.oldbalance)? 'O': 'D';
                else
                    customer.acct_type=(customer.oldbalance>0)?'D' : 'C';
                customer.newbalance=customer.oldbalance - customer.payment;
                writefile();
            }
            main();
        case '2':
        getchar();
        system("clear");
            
        printf("search by what?\n\n");
        printf("1:--- search by customer number\n");
            printf("2: --- search by customer name\n");
            search();
            ch=getchar();
            main();
        case '3':
        system("clear");
            
        delay(500);
            
        gotoxy(25,25);
        printf("\n PROJECT BY Sharwari");
        delay(1500);
        exit(1);
      }
 }
