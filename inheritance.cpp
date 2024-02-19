#include <iostream>
#include <string>
using namespace std;

class work{
     public:
     	int age;
     	string fullName;
        string phoneNumber;
        
        
};


class Student : public work {

    public:
        int studentId;
        
        string schoolName;
        
        void study() {
            cout << "Studying" << endl;
        }
};

class Employee : public work {

    public:
        int employeeId;
        
        string companyName;
    
        void work() {
            cout << "Working" << endl;
        }
};


int main() {

    
    return 0;
}
