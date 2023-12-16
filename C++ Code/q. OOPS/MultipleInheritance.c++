#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Father
{
public:
    Father()
    {
        cout << "Father Class" << endl; // Display message when Father class is called
    }
};

class Mother
{
public:
    Mother()
    {
        cout << "Mother Class" << endl; // Display message when Mother class is called
    }
};

class Child : public Father, public Mother // Multiple inheritance: Child class inherits from both Father and Mother classes
{
public:
    Child()
    {
        cout << "Child Class" << endl; // Display message when Child class is called
    }
};

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Child baccha; // Create an object of Child class

    return 0;
}
