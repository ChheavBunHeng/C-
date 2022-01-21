//C to F;
/*
Create a program that can in convert Celsisu to Kelvin and wia verse 
*/
#include<iostream>
using namespace std;
void Celsius();
void Kelvin();
float cel,kel;
int main()
{
    int Option;
    cout <<"1.Celsius To Kelvin\n2.Kelvin To Celsisus";
    cin >> Option;
    if(Option == 1)
    {
        Celsius();
    }
    else
    {
        Kelvin();
    }
}
void Celsius()
{
    printf("Input Cellsisu");
    cin >> cel;
    kel = cel + 273.15;
    printf("kel :%.2f",kel);

}
void Kelvin()
{
    printf("Input Cellsisu");
    cin >> kel;
    cel = kel - 273.15;
    printf("Cel :%.2f",cel);

}
