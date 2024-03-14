// EVERY FIFTH

#include <iostream>
using namespace std;

int everyFifth(int a, int b);

int main()
{
    cout << "_____________________________________________" << endl << endl; // Formatting

    int start, end;
    cout << "Enter the start integer: ";
    cin >> start;

    cout << "Enter the end integer: ";
    cin >> end;

    cout <<"\nThe sum of every fifth integer between (" << start << " and " <<end << "): " << everyFifth(start, end) <<endl <<endl;

    cout << "_____________________________________________" << endl; // Formatting

    return 0;
}

int everyFifth(int a, int b){

    int sum = 0;

    //if a < b
    if (a < b){
        for(int i = a; i < b; i += 5){
            sum += i;
        }
        sum += b;
    }

    // if b >= a
    else {
        for(int i = a; i > b; i -= 5){
            sum += i;
        }
        sum += b;
    }

    return sum;
}