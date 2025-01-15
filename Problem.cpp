/*
Develop a console-based Student Management System in C++ to handle student records effectively.
The system should allow users to:

Add new student details (e.g., Roll Number, Name, Marks).
Display all student records in a structured format.
Search for a specific student using their Roll Number.
Update details of an existing student.
Delete a student's record if necessary.
Save data to a file for persistence and reload it when the program starts.
*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
    int roll[5];
    string name[5];
    int marks[5];
    int n;

public:
    void addStudent()
    {
        cout << "\n Enter the number of students to add: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "\n Enter Roll Number: ";
            cin >> roll[i];
            cout << "\n Enter Name: ";
            cin >> name[i];
            cout << "\n Enter Marks: ";
            cin >> marks[i];
            cout << endl;
        }
    }
    void displayStudent()
    {
        cout << "\n<---------------------->";
        cout << "\n Students Details: ";
        cout << "\n<---------------------->";
        for (int i = 0; i < n; i++)
        {
            cout << "\n Student " << i + 1 << ":";
            cout << "\n Roll Number: " << roll[i];
            cout << "\n Name: " << name[i];
            cout << "\n Marks: " << marks[i];
            cout << "\n<---------------------->";
        }
    }
    void searchStudent()
    {
        int searchRoll;
        cout << "\n Enter Roll Number to search: ";
        cin >> searchRoll;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (roll[i] == searchRoll)
            {
                found = true;
                cout << "\n --------------";
                cout << "\n Student Details: ";
                cout << "\n Student " << i + 1 << ":\n";
                cout << "\n Roll Number: " << roll[i];
                cout << "\n Name: " << name[i];
                cout << "\n Marks: " << marks[i];
                cout << "\n --------------";
                break;
            }
        }
        if (found == false)
        {
            cout << "\n Student not found.\n";
        }
    }
    void updateStudent()
    {
        int updateRoll;
        cout << "\n Enter Roll Number to update: ";
        cin >> updateRoll;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (roll[i] == updateRoll)
            {
                found = true;
                cout << "\n Enter New Details: \n";
                cout << "\n Enter Name: ";
                cin >> name[i];
                cout << "\n Enter Marks: ";
                cin >> marks[i];
                cout << "\n --------------";
                break;
            }
        }
        if (found == false)
        {
            cout << "\n Student not found.\n";
        }
    }
    void deleteStudent()
    {
        int deleteRoll;
        cout << "\n Enter Roll Number to delete: ";
        cin >> deleteRoll;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (roll[i] == deleteRoll)
            {
                found = true;
                for (int j = i; j < n - 1; j++)
                {
                    roll[j] = roll[j + 1];
                    name[j] = name[j + 1];
                    marks[j] = marks[j + 1];
                }
                n--;
                cout << "\n Student deleted successfully.\n";
                cout << "\n --------------";
                break;
            }
        }
        if (found == false)
        {
            cout << "\n Student not found.\n";
        }
    }
};

int main()
{
    Student s1;
    int choice;
    do
    {
        cout << "\n--------------------------------";
        cout << "\n Student Management System\n";
        cout << "--------------------------------" << endl;
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "--------------------------------";
        cout << "\n Enter your choice: ";
        cin >> choice;
        cout << "--------------------------------" << endl;

        switch (choice)
        {
        case 1:
            s1.addStudent();
            break;

        case 2:
            s1.displayStudent();
            break;

        case 3:
            s1.searchStudent();
            break;

        case 4:
            s1.updateStudent();
            break;

        case 5:
            s1.deleteStudent();
            break;

        case 6:
            cout << "\n Exiting the program...\n";
            break;

        default:
            cout << "\n Invalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
