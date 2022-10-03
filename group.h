#ifndef PROJECT_GROUP_H
#define PROJECT_GROUP_H

#endif //PROJECT_GROUP_H

# include "student.h"

class Group {
    Student *first ;
    Group *firstg;
    string number ;
public :
    Group *next;
    Group () ;
    ~ Group () ;
    void addStudent () ;
    void display () ;
    void addGroup();
};