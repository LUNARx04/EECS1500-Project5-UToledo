#include<string>
#include<iomanip>
#include<iostream>
#include"class.cpp"
#include<fstream>

using namespace std;

int main() {
    string command;
        do {
            string name="";
            string accomp="";
            int byear = -1;
            int dyear = -1;
            int dd = -1;
            
            ElectricalEngineer ee2(byear, dyear, name, accomp);
                
                cout << "command >";
                getline(cin, command);  
            if (command == "add") {
                cout << "Input the name of the Electrical Engineer > " << endl;
                    getline(cin, name);
                cout << "Input the year they were born > " << endl;
                    cin >> byear;
                cout << "Input the year they passed away >" << endl;
                    cin >> dyear;
                cout << "Input the achievements of the Electrical Engineer >" << endl;
                    getline(cin, accomp);
                ElectricalEngineer ee2(byear, dyear, name, accomp);
            } else { 
                ElectricalEngineer ee2();
            } if (command == "print") {
                ee2.print();
            } else if (command == "died") {
                cout << "Input the year they passed away >" << endl;
                    cin >> dd;
                    ee2.died(dd);
            } else if (command != "quit") {
            cout << "Invalid Command." << endl;
            cout << "Valid Commands include >" << endl;
            cout << "     print > print the information out about the current engineer" << endl;
            cout << "     died > enter the year that the Electrical Engineer passed away" << endl;
            cout << "     add > add all the information about the current Electrical Engineer" << endl;
            cout << "     quit > close out the program" << endl;
            }
        } while (command != "quit");

return 0;

}
