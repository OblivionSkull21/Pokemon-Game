#include <iostream>
#include <string>
using namespace std;


int main() {
    
    string player_name;

    //Professor Oak:
    cout << "\"Trainer! Before you embark on your journey," << endl
        << "the Pokemon world needs to know who you are!\"" << endl << endl

        << "\"Time to step up and tells us your name." << endl
        << "And remember, a great name is the start of every great adventure!\"" << endl << endl;

    //ask player for their name
    cout << "What is your name? ";
    cin >> player_name;

    //Professor Oak:
    
    cout << endl << "\"Great start, " << player_name << "! Looks like you've mastered the opening of every code adventure." << endl << "Keep this up, and you'll be a coding master in no time!\"";

    return 0;
}