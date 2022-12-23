#include<iostream>
using namespace std;

int main()
{
   float days;
   float dollars;
   float exchangeRate;
   float monthlyIncome;
   float anualIncome;
   float bonus;
   float TaxPerAnum;
   float remainIncome;
   float exchangeInPKR;

cout<<"Enter the working Days Per Month: ";
cin>>days;

cout<<"Enter the Earning Per Day: ";
cin>>dollars;

cout<<"Enter the exchange rate: ";
cin>>exchangeRate;

monthlyIncome = days*dollars;
anualIncome = monthlyIncome*12;
bonus = anualIncome + (monthlyIncome *2.5);
TaxPerAnum = bonus - (bonus*0.25);
remainIncome = TaxPerAnum/365;
exchangeInPKR = remainIncome*exchangeRate;

cout<<"The total income in PKR is: "<<exchangeInPKR;
}