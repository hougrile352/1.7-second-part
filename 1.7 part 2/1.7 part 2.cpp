// 1.7 part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void formattingFunction(string a, double b, string c, string d, int e, int f, int g)
{
    cout << "Author name:" + a << endl;
}

int main()
{
    string AuthorName; int Year;
    string ArticleTitle;
    string JournalTitle; float VolumeNumber; int IssueNumber; int PageCount;

    cout << "Enter the author's name!\n";
    cin >> AuthorName;

    cout << "Enter year:";
    cin >> Year;

    cout << "Enter article title:";
    cin >> ArticleTitle;

    cout << "Enter journal title:";
    cin >> JournalTitle;

    cout << "Enter volume number:";
    cin >> VolumeNumber;

    cout << "Enter issue number:";
    cin >> IssueNumber;

    cout << "Enter number of pages:";
    cin >> PageCount;

    string AuthorInitial = AuthorName.substr(0);

    formattingFunction(AuthorInitial, Year, ArticleTitle, JournalTitle, VolumeNumber, IssueNumber, PageCount);
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
