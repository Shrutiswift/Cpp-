#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age, n, serial = 1, RollNo;
    char name[20];
    cout << "How many data do you want to make: ";
    cin >> n;
    cout << endl;
    fstream file;
    file.open("Text", ios::out | ios::in);

    if (!file)
    {
        cout << "File is not created" << endl;
        return 0;
    }

    file << "S.No     Name     Age     RollNo" << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your RollNo: ";
        cin >> RollNo;
        file << " " << serial << "     " << name << "     " << age << "     " << RollNo << endl;
        serial++;
    }
    
    file.seekg(0, ios::beg);
    while (true)
    {
        char shibu[100];
        file.getline(shibu, 50);
        if (file.eof())
        {
            break;
        }
        cout << shibu << endl;
    }
    return 0;
}
