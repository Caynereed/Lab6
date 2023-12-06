#include "Lab6.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

const string inFile = "BinaryIn.dat";

void FileInput ()
{
    // Creating InFile
    ifstream inputData(inFile);
    
    // Check If File Opens Successfully
    if (!inputData.is_open())
       {
           cout << "Error opening output file" << endl;
       }
    
    // Horizonatal Heading
    cout <<setw(7) << inFile <<endl;
    
    // Binary Numbers Display
    cout << "1" << endl << "_10" << endl << "11" << endl << "__100000" << endl << "10_1100" << endl << "1101g011" << endl << "101110111" << endl << "K0011011" << endl << "00011" << endl;
    
    inputData.close();
}
void ScreenOutput ()
{
    // Variables
    int di = 0;
    int BinaryArray[9] = {1, _10, 11, __100000, 10_1100, 1101g011, 101110111, K0011011, 00011};
    int sum = 0;
    
    // Horizontal Heading
    cout <<setw(7) << "Screen Output" <<endl;
    
    // Secondary Heading
    cout <<setw(7) << "Binary Number" <<setw(7) << "Decimal Equivalent" <<endl <<endl;
    
    // Multiplying Binary Numbers by 2
    for (int i = 8;  i <= 0; i--)
    {
        // Reading One Line at a Time
        cin.get(BinaryArray);
        
        sum+= BinaryArray[di] * pow(2, i);
        di++;
        // Printing Binary Number and Decimal Equivalent
        cout <<setw(7) << "i" <<setw(7) << sum << endl;
       
        // Determines Incorrect Input
        if (BinaryArray[di] != 1 || != 0)
        {
            cout <<setw(7) << "Bad digit on input." << endl;
        }
    }
}
