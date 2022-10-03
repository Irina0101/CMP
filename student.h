#ifndef PROJECT_STUDENT_H
#define PROJECT_STUDENT_H

#endif //PROJECT_STUDENT_H

# include <iostream>
using namespace std ;

class Student {
    private :
        string name ;
        float rating;
    public :
        Student *next ;
        void setName () ;
        string getName () ;
        void getRating();
        void sumRating();
        Student () ;
        static int snumber ;
        static float srating;
};