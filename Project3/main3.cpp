#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    static int count;

public:
    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        count++;
    }
    void show() { cout << "Roll No: " << rollNo << ", Name: " << name << endl; }
    static void showCount() { cout << "Total Students Added: " << count << endl; }
};
int Student::count = 0;

int main()
{
    Student s[3];
    int n;
    cout << "How many students (max 3)? ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        s[i].input();
    }
    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++)
        s[i].show();
    Student::showCount();
    return 0;
}