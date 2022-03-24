#include <iostream>
using namespace std;
class student {
    private:
        string Name;
        int RollNo;
        int height;
        int weight;
    public:
        student(string n, int r, int h, int w)
    {
        Name = n;
        RollNo = r;
        height = h;
        weight = w;
    }
        void display(void);
        ~student();
};
void student :: display(void) {
    cout << "Student details: \n";
    cout << "Name: " << Name << "\nRoll No: " << RollNo << "\nHeight: " << height << "\nWeight: " << weight; 
}
student :: ~student()
{
    cout << "\nDestructor is called";
}
int main() {
    student std("Shruti", 9445, 5, 40);
    student std1 = std;
    std1.display();
    return 0;
}