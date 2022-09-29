/* 
    Learning C++
    File I/O
 */
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ofstream outFile;
float a = 4.333f, b = 5.302f;

int main(){
    outFile.open("calculations.txt");
    if(outFile.fail())
        cout << endl
             << "File not found!" << endl;
    else
        outFile << "a = " << a << endl;
        outFile << "b = " << b << endl;
        outFile << "a + b = " << a + b << endl;
        outFile << "a * b = " << a * b << endl;

        outFile.close();
        cout << "FIle written successfully!" << endl;

        return (0);
}