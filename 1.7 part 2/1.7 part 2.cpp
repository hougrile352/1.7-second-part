// 1.7 part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// I hate this assignment so much - Riley

#include <iostream>
#include <string>

using namespace std;

void formattingFunction(string a, string b, double c, string d, string e, int f, int g, string h)
{
    cout << b << ", " << a << ". (" << c << ") " << d << "\n"; //Formats the data into something readable
    cout << "           " << e << ", " << f << "(" << g << "), " << h;
}

int main()
{
    string AuthorName; int Year; string LastName; //Initialize variables
    string ArticleTitle;
    string JournalTitle; float VolumeNumber; int IssueNumber; string PageCount; 

    cout << "Enter the author's first name!\n"; // Get the data
    getline(cin, AuthorName); //cin doesn't support spaces so I had to do getline

    cout << "Enter the author's last name!\n"; //I would've gotten both in one input but that was too much of a headache sorry
    getline(cin, LastName);

    cout << "Enter article title:\n";
    getline(cin, ArticleTitle);

    cout << "Enter journal title:\n";
    getline(cin, JournalTitle);

    cout << "Enter pages (#-# format):\n";
    getline(cin, PageCount);

    cout << "Enter year:\n";
    cin >> Year; //Left all the raw numbers to the end to fix a pesky bug

    cout << "Enter volume number:\n";
    cin >> VolumeNumber;

    cout << "Enter issue number:\n";
    cin >> IssueNumber;

    string AuthorInitial = AuthorName.substr(0, 1); //Gets the initial from the name

    cout << "\n"; //newline :)

    formattingFunction(AuthorInitial, LastName, Year, ArticleTitle, JournalTitle, VolumeNumber, IssueNumber, PageCount); //Run the format function from earlier
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
