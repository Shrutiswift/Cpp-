#include "iostream"
#include "fstream"
#include "string.h"
using namespace std;

int main() {
    string Text, Text1;
    char name[20];
    char ch;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the name of the source file: ";
    cin >> Text;
    cout << "Enter the name of the target file: ";
    cin >> Text1;
    int len = strlen(name);
    fstream f ("Text", ios::in|ios::out|ios::app);
    fstream f1 ("Text1", ios::in|ios::out|ios::app);
    for(int i=0;i<len;i++)
    {
        f.put(name[i]);
        f << "\n";
    }
    f.seekg(0);
    while(f) {
        f.get(ch);
        f1.put(ch);
    }
    f.close();
    f1.close();
    cout << "Successfully Copied!";
}