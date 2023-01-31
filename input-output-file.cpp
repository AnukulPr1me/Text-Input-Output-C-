#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename;

    ofstream myfile;
    myfile.open("Example.txt"); // Here you car write the file name you want to create
    // how many times you want to write the text.
    int a = 0;
    cout << "Enter the number of times you want to write:";
    cin >> a;
    cout << "Enter the file name you want to open:-";
    cin >> filename; // Enter the .txt or textfile name you want to open in console
    for (int i = 0; i <= a; i++)
    {
        myfile << "(" << i << ")"
               << " Remove this and  Write the text here. \n";
        // what you want to write the in the text document.
    }
    myfile.close();

    ifstream ifile;
    ifile.open(filename.c_str());
    char c;

    while (ifile.good())
    {
        ifile.get(c);
        cout << c;
    }

    return 0;
}
