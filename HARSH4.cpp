#include<iostream>


int main()
{
    int stud_no;
    float phy_mrk, chem_mrk, math_mrk, tot_mrk, percent;
    
    stud_no=05;
    phy_mrk=56;
    chem_mrk=45;
    math_mrk=55;
    
    tot_mrk=phy_mrk+chem_mrk+math_mrk;
    percent=tot_mrk/3;
    
    std::cout<<"\n student no="<< stud_no;
    std::cout<<"\n physics marks="<< phy_mrk;
    std::cout<<"\n chemistry marks="<< chem_mrk;
    std::cout<<"\n maths marks="<< math_mrk;
    std::cout<<"\n total marks="<< tot_mrk;
    std::cout<<"\n percentage="<< percent;
    
    getch();
}