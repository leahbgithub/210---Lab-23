#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string names[], string colors[]);
void display_trip(list<Goat> &trip);
int main_menu();

int main() {
    srand(time(0));

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();
    
    list<Goat> trip; // Manager for Goat
    bool running = true;

    return 0;
}

// create main_menu()
int main_menu() {
    int choice;
    cout << "\n*** GOAT MANAGER 3001 ***" << endl;
    cout << "[1] Add a Goat" << endl;
    cout << "[2] Delete a Goat" << endl;
    cout << "[3] List a Goat" << endl;
    cout << "[4] Quit" << endl;
    cout << "Choice: ";
    cin >> choice;
}

