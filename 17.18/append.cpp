// append.cpp -- appending infomation to a file
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // (for exit()

const char *file = "guests.txt";
int main()
{
    using namespace std;
    char ch;
    // show initial contents
    ifstream fin;
    fin.open(file);

    if (fin.is_open())
    {
        cout << "Here are the current contents of the "
             << file << " file:\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }

    // add new names
    ofstream fout(file, ios::out | ios::app);
    if (!fout.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Enter guest names (enter a black line to quit):\n";
    string name;
    while (getline(cin, name) && name.size() > 0)
    {
        fout << name << endl;
    }
    fout.close();

    // show revised file
    fin.clear(); // not necessary for some compilers
    fin.open(file);
    if (fin.is_open())
    {
        cout << "Here arre the new contents of the "
             << file << " file:\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }
    cout << "Done.\n";
    return 0;
}
