# include <iostream>
# include "student.h"

Student :: Student (){
    snumber ++;
}
void Student :: setName (){
    cout << " Enter name : ";
    cin >> name ;
}

string Student :: getName (){
    return name ;
}

void Student ::getRating(){
    cout << " Enter rate: ";
    cin >> rating;
}

void Student ::sumRating(){
    srating += rating;
}

int Student :: snumber = 0;
float Student::srating = 0;


