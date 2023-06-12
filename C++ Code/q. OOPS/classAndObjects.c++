#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Creating a class by the name of Fruit and having properties name, color and taste and all of them are public and could be accessed by all objects of the same class, from anywhere in the program
class Fruit
{
public:
    string name;  //
    string color; //
    string taste; //
};

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Object 1: Directly and could be accessed using the dot (.) operator
    Fruit Apple;
    Apple.name = "Apple";
    Apple.color = "Red";
    Apple.taste = "Sweet";

    // Object 2 : Using the new Keyword and has to be accessed using the arrow (->) operator
    Fruit *Pear = new Fruit(); // this new keyword gets a pointer to that object
    Pear->name = "Pear";
    Pear->color = "Greenish";
    Pear->taste = "Sour";

    cout << Apple.name << " " << Apple.color << " " << Apple.taste << endl;
    cout << Pear->name << " " << Pear->color << " " << Pear->taste << endl;

    return 0;
}