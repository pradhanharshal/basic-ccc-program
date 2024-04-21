#include <iostream.h>
#include<conio.h>
int main()
{
    float num1, num2, add, sub, multiply, divi;
    clrscr();

    cout<<"\n Enter First number?";
    cin >> num1;

    cout<<"\n Enter second number?";
    cin >> num2;

    add=num1+num2;
    sub= num1 - num2;
    multiply= num1 * num2;
    divi= num1 / num2;

    cout <<"\n first number=" << num1;
    cout <<"\n second number=" << num2;
    cout <<"\n Addition of givven number=" << add;
    cout <<"\n substraction of given number=" << sub;
    cout <<"\n multiplication of given number=" << multiply;
    cout <<"\n division of given number=" << divi;


 getch();
}