 #include <iostream>
 using namespace std;

// First Example
class Innova
{
public:
    static int price;
    static int getPrice()
    {
        return price;
    }
};
int Innova::price = 20'000;


// Second Example
class Student
{
public:
    int roll;
    string name;
    static int addNo;
    Student(string n) 
    { 
        addNo++;
        roll = addNo;
        name = n;
    }

    void Display()
    {
        cout << "Name " << name << endl << "Roll " << roll << endl;
    }
    
};
int Student::addNo = 0;
int main()
 {
     // Example 1
    Innova i1, i2, i3;
    cout << i1.price << endl;
    cout << i2.price << endl;
    cout << i3.price << endl;
    cout << Innova::price << endl;

    // Example 2
    Student s1("John");
    Student s2("Max");
    Student s3("Khan");
    s1.Display();
    s3.Display();
    s2.Display();
    cout << "Number of admissions " << Student::addNo << endl;
    return 0;
 }