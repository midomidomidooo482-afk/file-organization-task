#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;

    ofstream outfile("fruit.txt");

    outfile << "Apple" << endl;
    outfile << "Orange" << endl;
    outfile << "Banana" << endl;

    outfile.close();

    ifstream infile("fruit.txt");

    while (getline(infile, line))
    {
        cout << line << endl;
    }

    infile.close();

    ofstream file("fruit.txt", ios::app);

    file << "Fresh Fruits" << endl;

    file.close();

    return 0;
}