// Game Stats
// Demonstrates declaring and initializing variables

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int score = 0;
    double distance = 1200.76;
    char playAgain = 'y';
    bool shieldsUp = true;
    short lives = 3, aliensKilled = 10; 
    double engineTemp = 6572.89;

    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    cout << "shieldsUp: " << shieldsUp << endl;
    cout << "lives: " << lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;

    int fuel;

    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;

    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;

    return 0;
}