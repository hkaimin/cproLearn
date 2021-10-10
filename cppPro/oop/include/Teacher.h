#include <string>
using namespace std;
class Teacher 
{
    public:
        Teacher(string name,int age);
        ~Teacher();
        void setSalary(int salary);
        int getSalary();
        string getName();
        int getAge();

    private:
        string name;
        int age;
        int salary;
};