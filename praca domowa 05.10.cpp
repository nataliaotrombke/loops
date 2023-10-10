#include <iostream>
using namespace std;
int main() {

//Task 1. Write a program that takes the integer "x" from users
// and prints out all numbers from 1 to x that are divisible by 3
    int x;
    cout << "Give an integer" << endl;
    cin >> x;

    for (int i=1; i<=x; i++){
      if (i % 3 == 0)
          cout << i << " ";
    }

// Task 2. Write a program to calculate "x" to the power "y" using a while loop.
    int z, y, result = 1;
    cout << "Give two numbers ";
    cin >> z >> y;
    while (y >0) {
        result *=z;
        y--;
    }
    cout << "The result is " << result;


// Task 3. Write a programme to display the number of 'digits' in a given integer > 0
    int a;
    int answer = 0;
    cin >> a;
    while (a > 0){
        a = a /10;
        answer++;
    }
    cout << answer;


// // Task 4. Write a program that takes an integer 'x' from the user
// and displays a triangle with side 'x'.Using the while loop

    int c;
    string star = "*";
    int b=1;
    cout << "Enter an integer" << endl;
    cin >> c;
    while (b <= c){
        cout << star << endl;
        star+="*";
        b++;
    }

    return 0;
}
