# include "group.h"
using namespace std ;

int main (){
    Group group ;
    char ch ;
    do{
        group.addStudent () ;
        cout << " Enter next (y/n)? ";
        cin >> ch ;
    } while (ch == 'y');

    group.display();
    cout << " Number students : " << Student::snumber << endl;
    cout << " Average rating : " << Student::srating/Student :: snumber << endl;
    return 0;
}