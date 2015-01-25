//John Riley Madison - Palidrome Checker - 2014
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream inf;inf.open("input.txt");
    ofstream outf;outf.open("output.txt");
    string input;
    while  (!inf.eof())
    {
        getline(inf,input);
        if (input == string(input.rbegin(), input.rend()))
        {outf << left << setw(30) << input << right << " is a palindrome" << endl;}
        else
        {outf << left << setw(26) << input << right << " is not a palindrome" << endl;}
    }
}