#include <iostream>
#include <vector>

using namespace std;

class Student
{
    string name;
    int rollNumber;
    float grade;
    float attendance;

public:
    Student(string name, int rollNumber, float grade, float attendance)
    {
        this->name = name;
        this->rollNumber = rollNumber;
        this->grade = grade;
        this->attendance = attendance;
    }

    string getName()
    {
        return name;
    }

    int getRollNumber()
    {
        return rollNumber;
    }

    float getGrade()
    {
        return grade;
    }

    float getAttendance()
    {
        return attendance;
    }
};

// Created an empty vector to store the student details
vector<Student> students;

void addStudent()
{
    string name;
    int rollNumber;
    float grade, attendance;

    cout << "Enter name of the student: ";
    cin >> name;
    cout << "Enter roll number of the student: ";
    cin >> rollNumber;
    cout << "Enter grade of the student : ";
    cin >> grade;
    cout << "Enter attendance of the student: ";
    cin >> attendance;

    students.push_back(Student(name, rollNumber, grade, attendance));

    cout << "Student data added successfully." << endl;
}

void displayStudents()
{
    if (students.empty())
    {
        cout << "No students added yet." << endl;
        return;
    }

    cout << "Name\tRoll Number\tGrade\tAttendance" << endl;
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].getName() << "\t" << students[i].getRollNumber() << "\t\t" << students[i].getGrade() << "\t" << students[i].getAttendance() << endl;
    }
}

void updateStudent()
{
    int rollNumber;
    cout << "Enter roll number of the student to update: ";
    cin >> rollNumber;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getRollNumber() == rollNumber)
        {
            string name;
            float grade, attendance;

            cout << "Enter new name of the student: ";
            cin >> name;
            cout << "Enter new grade of the student: ";
            cin >> grade;
            cout << "Enter new attendance of the student: ";
            cin >> attendance;

            students[i] = (Student(name, rollNumber, grade, attendance));
            cout << "Student data updated successfully." << endl;
            return;
        }
    }

    cout << "Student not found." << endl;
}

void deleteStudent()
{
    int rollNumber;
    cout << "Enter roll number of the student to delete: ";
    cin >> rollNumber;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getRollNumber() == rollNumber)
        {
            students.erase(students.begin() + i);
            cout << "Student data deleted successfully." << endl;
            return;
        }
    }

    cout << "Student not found." << endl;
}

int main()
{
    int choice;
    while (true)
    {
        cout << "1. Add student" << endl;
        cout << "2. Display students" << endl;
        cout << "3. Update student" << endl;
        cout << "4. Delete student" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            updateStudent();
            break;
        case 4:
            deleteStudent();
            break;
        case 5:
            exit(0);
        default:
            cout << "Invalid choice." << endl;
        }
    }
    return 0;
}


// This code creates a basic Student class that has four properties : name, rollNumber, grade, and attendance.It also provides four functions to perform the CRUD(Create, Read, Update, Delete) operations on the student data : addStudent(), displayStudents(), updateStudent(), and deleteStudent().The main() function runs an infinite loop that presents a menu of choices to the user and calls the corresponding function based on the user's choice.
