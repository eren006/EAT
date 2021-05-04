#include <iostream>
#include <string>
using namespace std;

//Def: an incident that has a styring and a type
class Incident {

    string type; // the type of incident
    string content;// the content of the incident
    bool done;// 0 if not done, 1 if done

    public:
    //create an incident with the given string and type
    Incident * createInc(string type, string s);
    //set invident to done
    void done();
};