// School Club.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class SchoolClub {
public:
    string name;
    string leader;
    vector<string> members;
    int memberLimit;

    void addMember(string m) {
        if (members.size() < memberLimit) {
            members.push_back(m);
        }
        else {
            cout << name << " is already at capacity.";
        }
    }

    void display() {
        cout << name << " is led by " << leader << endl;
        cout << "Membership: " << members.size() << endl << endl;
        for (int i = 0; i < members.size(); i++) {
            cout << members[i] << endl;
        }
        cout << "This club can support " << memberLimit - members.size() << " additional members" << endl << endl;
    }
};


int main()
{
    //Create a SchoolClub object
    SchoolClub myClub;

    //Enter the name of the club
    cout << "Enter the name of the club:" << endl;
    getline(cin, myClub.name);

    //Enter the leader of the club
    cout << endl << "Enter the leader of the club:" << endl;
    getline(cin, myClub.leader);

    //Enter the leader of the club
    cout << endl << "What is the maximum number of members?" << endl;
    cin >> myClub.memberLimit;

    //Enter the members
    cout << endl;
    while (true) {
        cout << "Enter the first name of a member (or 'done' to continue)" << endl;
        string name;
        cin >> name;
        if (name == "done") {
            break;
        }
        myClub.addMember(name);
    }

    //Display the club
    cout << endl;
    myClub.display();


    system("pause");
}

