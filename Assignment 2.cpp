#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct staff 
{
    string name;
    int staffProf;
};

int main()
{
    int i = 0;
    const string SENTINEL = "done";
    int count = 0;

    staff* s = new staff[ i ];
    while (s[ i ].name != SENTINEL)
    {
        cout << "Please enter the staff name: ";
        cin >> s[ i ].name;
        cout << "Please enter the profession of " << s[ i ].name;
        cin >> s[ i ].staffProf;
       
        count++;
        i++;
    }
       
    

    for (int i = 0; i < count; i++) {
        cout << left << s[ i ].name << s[ i ].staffProf << endl;
    }

  
    
    return 0;
}


