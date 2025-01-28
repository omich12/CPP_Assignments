#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Employee
{

private:
    string name{};
    int id{};
    float salary{};

public:
    Employee(string n, int i, float s)
    {
        name = n;
        id = i;
        salary = s;

        cout << "Employee constructor for: " << name << id << "balance" << endl;
    }

    string get_name()
    {
        return name;
    }

    int get_id()
    {
        return id;
    }

    float get_salary()
    {
        return salary;
    }
};

int main()
{
    Employee ("Ram", 101, 10000);

    return 0;
}