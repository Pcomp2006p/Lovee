#include <iostream>
#include <string>

using namespace std;

// Function to display a heart using ASCII Art
void displayHeart() {
    cout << "   ♥♥♥     ♥♥♥   " << endl;
    cout << " ♥♥♥♥♥   ♥♥♥♥♥ " << endl;
    cout << "♥♥♥♥♥♥♥ ♥♥♥♥♥♥♥" << endl;
    cout << " ♥♥♥♥♥♥♥♥♥♥♥♥♥ " << endl;
    cout << "   ♥♥♥♥♥♥♥♥♥♥♥   " << endl;
    cout << "     ♥♥♥♥♥♥♥     " << endl;
    cout << "       ♥♥♥       " << endl;
    cout << "        ♥        " << endl;
}

int main() {
    string name;

    // Get the user's name
    cout << "Hello! Please enter your name: ";
    getline(cin, name);

    // Display a romantic message
    cout << "\n" << name << ", you light up my world and fill my heart with love!" << endl;
    cout << "Every moment I think of you, the world becomes more beautiful... ❤️" << endl;

    // Display the heart
    cout << "\n";
    displayHeart();

    cout << "\nWith love, from your romantic programmer! 😊" << endl;

    return 0;
}