// Palindrome Strings Problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*  PROBLEM

You are given a string containing only lowercase alphabets. Find if the strings are palindromes.



INPUT:
4
bpc
pp
deep
zyx


*/

#include <iostream>
#include <cstring>
using namespace std;

//reverse string
string reverse(string& S) { 
    int n = S.length();

    for (int i = 0; i < n / 2; i++)
    {
        swap(S[i], S[n - i - 1]);
    }
    return S;
}

int main()
{ 
    const int n = 4;
    string reversed;
    string normal;
    string examples[n] = { "bpc", "ppp", "lky", "zyx" };
    
    
    

    for (int i = 0; i < n; i++) {

        reversed = reverse(examples[i]);
        normal = examples[i];

        if (reversed.compare(normal) == 0) {

            cout << "-1 \n";
        }

        else {
            cout << normal, " \n";
        }
        
        
            
            

            

           

            
       
        
    }
}

