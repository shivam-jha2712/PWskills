#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Employee
{
    string name;
    int id;
    vector<bool> attendance;

public:
    Employee(string name, int id)
    {
        this->name = name;
        this->id = id;
        attendance = vector<bool>(31, false); // initialize attendance vector with 31 days (for simplicity)
    }

    string getName()
    {
        return name;
    }

    int getId()
    {
        return id;
    }

    bool getAttendance(int day)
    {
        return attendance[day - 1];
    }

    void setAttendance(int day, bool present)
    {
        attendance[day - 1] = present;
    }
};

class AttendanceSystem
{
    map<string, string> credentials; // map of usernames to passwords
    map<int, Employee> employees;    // map of employee IDs to employee objects

public:
    void registerEmployee()
    {
        string username, password, name;
        int id;

        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Create a username: ";
        cin >> username;
        cout << "Create a password: ";
        cin >> password;

        credentials[username] = password;
        employees[id] = Employee(name, id);

        cout << "Employee registration successful." << endl;
    }

    void logIn()
    {
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (credentials.find(username) == credentials.end())
        {
            cout << "Username not found." << endl;
        }
        else if (credentials[username] != password)
        {
            cout << "Incorrect password." << endl;
        }
        else
        {
            int id;
            cout << "Enter employee ID: ";
            cin >> id;

            if (employees.find(id) == employees.end())
            {
                cout << "Employee ID not found." << endl;
            }
            else
            {
                markAttendance(id);
            }
        }
    }

    void markAttendance(int id)
    {
        int day;
        bool present;

        cout << "Enter day number: ";
        cin >> day;
        cout << "Was the employee present? (1 for yes, 0 for no): ";
        cin >> present;

        employees[id].setAttendance(day, present);

        cout << "Attendance marked successfully." << endl;
    }

    void viewAttendance(int id)
    {
        if (employees.find(id) == employees.end())
        {
            cout << "Employee ID not found." << endl;
        }
        else
        {
            cout << "Attendance for employee ID " << id << ":" << endl;
            cout << "Day\tAttendance" << endl;
            for (int i = 1; i <= 31; i++)
            {
                cout << i << "\t" << (employees[id].getAttendance(i) ? "Present" : "Absent") << endl;
            }
        }
    }
};

int main()
{
    AttendanceSystem system;

    int choice;
    while (true)
    {
        cout << "1. Register employee" << endl;
        cout << "2. Log in" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            system.registerEmployee();
            break;
        case 2:
            system.logIn();
            break;
        case 3:
            cout << "Exiting program..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        cout << endl;
    }

    return 0;
}

/*

In this implementation, each employee is represented by an `Employee` object that stores their name, ID, and attendance for each day of the month. The attendance system is represented by an `AttendanceSystem` object that keeps track of the usernames and passwords for each employee, as well as their attendance records.

When an employee registers, they provide their name, ID, username, and password. The system stores their credentials in the `credentials` map and creates a new `Employee` object for them, which is stored in the `employees` map.

When an employee logs in, they provide their username, password, and ID. If their credentials are valid, they are prompted to enter the day number and whether they were present or not. Their attendance record for that day is then updated.

Finally, an employee can view their attendance record by providing their ID. The system looks up their `Employee` object in the `employees` map and prints out their attendance record for each day of the month.

*/