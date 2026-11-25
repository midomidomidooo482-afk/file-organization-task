#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name, id;
    float grade;

    cout << "Enter Full Name: ";
    getline(cin, name);

    cout << "Enter ID: ";
    getline(cin, id);

    cout << "Enter Grade: ";
    cin >> grade;

    ofstream file("Student.txt");

    if (file.is_open())
    {
        file << "Full Name: " << name << endl;
        file << "ID: " << id << endl;
        file << "Grade: " << grade << endl;

        file.close();

        cout << "Student data saved successfully.";
    }
    else
    {
        cout << "Error opening file.";
    }

    return 0;
}