#include <iostream>
#include Incident.h
using namespace std;

//Def: this is a todo list class contains 0 or more incidents

class TODO {

    int maxInc;// the max number of incidents in this todo
    vector<Incident> todos;

    public:
    //create and init a todolist, return a todo pointer
    TODO * create();
    //add an incident to this todo position
    void addInc(int pos, Incident i);
    //delete an incident at the given position
    void deleteInc(int pos);
};