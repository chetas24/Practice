#include <iostream>
#include <string>

using namespace std;

// these are static memory space as they are outside of any functions
const string unk {"unknown"}; // these are declared outside class
const string clone_prefix {"clone"};

class Animal
{
    // variables are defaultly private when they are in class
    string a_type;
    string a_name;
    string a_sound;

    public:
    Animal();  // Default Constructor
    Animal(const string& type, const string& name, const string& sound);  // Parameterized Constructor
    Animal(const Animal&);  // Copy Constructor
    ~Animal(); // Destructor
    Animal& operator = (const Animal&); // copy/assignment Operator
    void print() const;
};

Animal::Animal() : a_type(unk), a_name(unk), a_sound(unk)
{
    cout << "Default Contructor - \n";
}

Animal::Animal(const string& type, const string& name, const string& sound)
: a_type(type), a_name(type), a_sound(type)
{
    cout << "Parameterized Constructor - \n";
}

Animal::Animal(const Animal& a)
{
    cout << "Copy Constructor - \n";
    a_name = clone_prefix + a.a_name;
    a_type = a.a_type;
    a_sound = a.a_sound;
}

Animal::~Animal()
{
    cout << "Destructor - " << a_name << "then" << a_type;
}

Animal& Animal::operator=(const Animal& o)
{
    cout << "Assignment Operator\n";
    if(this != &o)
    {
        a_name = clone_prefix + o.a_name;
        a_type = o.a_type;
        a_sound = o.a_sound;
    }
    return *this;
}

void Animal::print() const
{
    cout << a_name << " the " << a_type << " says " << a_sound << endl;
}

int main()
{
    Animal a;
    a.print();

    const Animal b("goat", "bob", "baah");
    b.print();

    const Animal c = b;
    c.print();

    a = c;
    a.print();

    cout << "End of main\n";
    return 0;
}