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


    cout << endl << endl << "\"I'd like to welcome you to the world of Pokemon! I am Professor Oak.\"\n\n";
    cout << "\"You can choose one of the following Pokemon:\n";
    cout << "1. Bulbasar\n2. Charmander\n3. Squirtle\n";
    cout << "\nWhich Pokemon would you like? Enter the associated number!\"";

    //player chooses pokemon

    int choice;
    string chosen_pokemon;

    cout << endl;
    cin >> choice;


    switch (choice) {
        case 1: cout << "\"You chose Bulbasaur! A wise choice.\"\n";
            chosen_pokemon = "Bulbasaur";

            break;
        case 2: cout << "\"You chose Charmander! A fiery choice.\"\n";
                chosen_pokemon = "Charmander";

            break;
        case 3: cout << "\"You chose Squirtle! A cool choice.\"\n";
                chosen_pokemon = "Squirtle";

            break;
        default: cout << "\"I'm afraid I do not have that number, so here is Pikachu! An electric choice.\"\n"; 
                chosen_pokemon = "Pikachu";

    }

    //continuing dialogue
    cout << "\n\n\"Beware, Trainer. This is only the beginning. Your journey is about to unfold!\n Now let's see if you've got what it takes to keep going!\nGood luck, and remember... Choose wisely!\"\n";

    return 0;
}