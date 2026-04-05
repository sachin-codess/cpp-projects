#include <iostream>
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
