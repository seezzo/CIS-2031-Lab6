#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

//A function that returns the LARGER of the two
//parameters
int max(int a, int b){
    if ( a > b ){
        return a;
    } else {
        return b;
    }
}

//A function that returns the SMALLER of the two
//parameters
int min(int a, int b){
    if ( a < b ){
        return a;
    } else {
        return b;
    }
}


void main(){
    cout << "Which is larger, 42 or 96? " << max(42, 96) << endl;

    cout << "Which is smaller, 12 or 100? " << min(12, 100) << endl;

    //Starting at zero, try each consecutive number until we
    //find the first number larger than 10;
    int guess = 0;
    tryTheNextNumber:
    if ( guess <= 10 ){
        guess = guess + 1;
        cout << guess << " is smaller than 10" << endl;
        goto tryTheNextNumber;
    }

    cout << "Found it! " << guess << " is bigger than 10!" << endl;

    //Starting at zero, try each consecutive number until we
    //find the first number larger than 10;
    guess = 0;
    while( guess <= 10 ){
        guess = guess + 1;
        cout << guess << " is smaller than 10" << endl;
    }

    cout << "Found it! " << guess << " is bigger than 10!" << endl;
}