// @file list0804.cpp ∗/
// Listing 8−4. Exploring Field Width, Padding, and Alignment
#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>
int main( )
{
using namespace std;
cout << "|" << setfill ( " ∗ " ) << setw (6) << 1234 <<  "|" << "\n"
cout << "|" << left  <<             setw (6) << 1234 <<  "|" << "\n"
setw (6)
cout << "| " <<                  << setw (6) << -1234 <<  "|" << "\n"
setw ( 6 )
cout << " | " << right <<           setw (6) << -1234 <<  "|" << "\n"

}
