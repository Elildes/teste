// @file list0501.cpp ∗/
// Listing 5−1. Demonstrating Input and Output ∗/
#include <iostream>
#include <istream>
#include <ostream>
int main ( )
{
std :: cout <<" Enter a number :";
int x;
std :: cin >> x;
std :: cout << " Enter an other number :";
int y;
std :: cin >> y;
int z(x + y );
std :: cout << "The sum of " << x << " and " << y << " is " << z << " \n" ;
}
