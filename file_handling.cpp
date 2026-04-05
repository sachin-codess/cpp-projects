 // Project: File Handling
// Author: Sachin Yadav
// Description: This program demonstrates reading from and writing to files in C++.
// Concepts: File streams, input/output#include <iostream>https://github.com/sachin-codess/cpp-projects/tree/main
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("test.txt");
    outFile << "Hello, this is a file test.";
    outFile.close();

    ifstream inFile("test.txt");
    string text;

    while (getline(inFile, text)) {
        cout << text << endl;
    }

    inFile.close();

    return 0;
}
