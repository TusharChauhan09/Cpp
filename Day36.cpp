#include <iostream>
#include<string>
#include<cstring>
using namespace std;

// (1)   Structure 
struct employee {  // normal structure    
    int e_id;
    string e_name;
    float salary;
};

typedef struct employeee {  // typedef structure
    int e_id;
    string e_name;
    float salary;
} ep;

// (2) Union
union employeeee {
    int e_id;          // space of 4 bytes
    char e_name[50];     // space of 24-32 bytes
    float salary;      // space of 4 bytes
};

// (3) Enumeration
enum days{Sunday, Monday, Tuesday=10, Wednesday, Thursday, Friday, Saturday};

int main() {
    // Using the normal structure
    struct employee tushar;
    tushar.e_id = 1;
    tushar.e_name = "Tushar";
    tushar.salary = 120000000;
    cout << tushar.e_id << "\n" << tushar.e_name << "\n" << tushar.salary << "\n";

    // Using the typedef structure
    ep tarshit;
    tarshit.e_id = 2;
    tarshit.e_name = "Tarshit";
    tarshit.salary = 120000000;
    cout << tarshit.e_id << "\n" << tarshit.e_name << "\n" << tarshit.salary << "\n";

    
    union employeeee tanish;
    // one at a time
    tanish.e_id = 3; 
    cout << "Union - e_id: " << tanish.e_id << endl;
    strcpy(tanish.e_name, "Tanish"); 
    cout << tanish.e_name << endl;
    tanish.salary = 80000.50;  
    cout << tanish.salary << endl;
 // Note that only the last set value is valid, as all members share the same memory space.

    days today = Monday;
    cout<<today<<"\n";
    days tommorrow = Tuesday;
    cout<<tommorrow<<"\n";
    days next1 = Wednesday;
    cout<<next1<<"\n";

    return 0;
}
