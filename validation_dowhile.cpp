#include <iostream>
using namespace std;
int main(){

    //Declare an integer variable to store the user's input
    // we initialise it to 0 so the do-while loop will run at least once
    int number = 0;

    //do-while loop: executes the body first, then checks the condition
    //This guarantees the body runs at least once
    do{
        cout << "Enter a positive number: ";
        cin >> number;

        //Check if input is invalid
        if (number <=0){
            cout << "Invalid!";
        }

    }while (number <=0);//Condition checked after the body runs

    // This line runs only when a valid number is entered
    cout << "You entered: " << number << endl;
    
    return 0; //Return 0 to indicate that the program has completed successfully
}