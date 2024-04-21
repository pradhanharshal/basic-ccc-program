#include <iostream>

int main()
{
    int cust_no;
    float loan_amt, rate_int, int_amt, tot_amt;
    

    
    cust_no=222;
    loan_amt=5000;
    rate_int=10;
    
    int_amt= loan_amt*rate_int/100;
    tot_amt= loan_amt+int_amt;
    
    std::cout<<"\n Customer number="<< cust_no;
    std::cout<<"\n Loan Amount="<< loan_amt;
    std::cout<<"\n Rate of Interest="<< rate_int;
    std::cout<<"\n Interest Amount="<< int_amt;
    std::cout<<"\n Total Amount="<< tot_amt;
    

    return 0;
}
