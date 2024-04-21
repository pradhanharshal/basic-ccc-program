#include<iostream.h>
#include<conio.h>

void main()
{
    int cust_no;
    float loan_amt, rate_int, int_amt, tot_amt;
    
    clrscr();
    
    cout <<"\n Enter customer account number?";
    cin >> cust_no;
    
    cout <<"\n Enter loan amount?";
    cin >> loan_amt;
    
    cout <<"\n Enter rate of interest?";
    cin >> rate_int;
    
    int_amt=loan_amt*rate_int/100;
    tot_amt=loan_amt+int_amt;
    
    cout<<"\n customer account number?"<< cust_no;
    cout<<"\n loan amount?"<< loan_amt;
    cout<<"\n rate of interest?"<< rate_int;
    cout<<"\n Interst amount?"<< int_amt;
    cout<<"\n Total amount?"<< tot_amt;
    
    getch();
    
}