#include<string>
#include<iomanip>
#include<iostream>


using namespace std;


class ElectricalEngineer {
    private: //Private Methods
        int birthYear;
        int deathYear;
        string engineerName;
        string engineerAccomplishments;
    public: //Public Methods
        void print();
        void died(int dd);
        ElectricalEngineer(int a, int b, string c, string d);
        ElectricalEngineer();
};
//Implements
//defualt constructor
ElectricalEngineer::ElectricalEngineer() {
    birthYear=0;
    deathYear=0;
    engineerName="";
    engineerAccomplishments="";
}
//complete constructor
//Print Function
void ElectricalEngineer::print() {
    cout << engineerName << endl;
    cout << birthYear << " - " << deathYear << endl;
    cout << "Claim to fame: " << engineerAccomplishments << endl;
}
//Add Function
ElectricalEngineer::ElectricalEngineer(int a, int b, string c, string d) {
    birthYear=a;
    deathYear=b;
    engineerName=c;
    engineerAccomplishments=d;
}
//Died Function
void ElectricalEngineer::died(int dd) {
    deathYear=dd;
}
