// The game was redesigned by Ricksy on Wednesday 07 June 2023 18:50:30.
#include <iostream> // For object cin and cout
#include <string> // For class string
#include <cmath> // For function pow
#include <iomanip> // For function setw, fixed and setprecision
#include <cstdlib> // For rand()function, exit(), to generate random int number
#include <ctime> // For time() function;
using namespace std;
//The randomNumber function generates the random number from 1 t0 3
int randomNumber(){
    srand((unsigned) time(NULL));
    int randomNumber = rand() % 4;
    while ( randomNumber <= 0 ){
        randomNumber = rand() % 4;
    }
    return randomNumber;
}
//Function to display computer's choice
void computersChoice(int choice){
    if ( choice == 1 ){
        cout << "\nThe computer have choosed a Rock" << endl;
    }else if ( choice == 2 ){
        cout << "\nThe computer have choosed a Paper" << endl;
    }else if ( choice == 3 ){
        cout << "\nThe computer have choosed a Scissor" << endl;
    }
}
//Function to display player's choice
void playersChoice(int choice){
    if ( choice == 1 ){
        cout << "\nYou have choosed a Rock" << endl;
    }else if ( choice == 2 ){
        cout << "\nYou have choosed a Paper" << endl;
    }else if ( choice == 3 ){
        cout << "\nYou have choosed a Scissor" << endl;
    }
}
void winner(int computer, int player){
    if(computer == 1 && player == 3){
        cout << "\n\nSorry, you losed the game; The rock smashes the scissors\n\n";
    }else if(computer == 3 && player == 1){
        cout << "\n\nYou are the winner!!! The rock smashes the scissors\n\n";
    }else if(computer == 3 && player == 2){
        cout << "\n\nSorry, you losed the game; Scissors cuts paper\n\n";
    }else if(computer == 2 && player == 3){
        cout << "\n\nYou are the winner!!! Scissors cuts paper\n\n";
    }else if(computer == 2 && player == 1){
        cout << "\n\nSorry, you losed the game; Paper wraps rock\n\n";
    }else if(computer == 1 && player == 2){
        cout << "\n\nYou are the winner!!! Paper wraps rock\n\n";
    }else if(computer == player){
        cout << "\n\nYou got the same choice as that of the computer\n\nRestarting...\n\n";
    }
}
int main(){
    int PChoice;
    Start:;
    cout << "\n\nHello!!!\n\nYou are going to play the Rock, Paper and Scissors game against the computer\n\n";
    cout << "\nHere is how to play the game;\nType:-\n\t01. To select Rock\n\t02. To select Paper\n\t03. To select Scissor\n\nType Here : ";
    cin >> PChoice;
    while(PChoice != 1 && PChoice != 2 && PChoice != 3){
        cout << "\n\nInvalid Choice\n\nType:-\n\t01. To select Rock\n\t02. To select Paper\n\t03. To select Scissor\n\nType Here : ";
        cin >> PChoice;
    }
    //Displaying player's Choice using the playersChoice function
    playersChoice(PChoice);
    //Determining computers choice using the randomNumber function
    int Choice = randomNumber();
    //Displaying computer's Choice using the computersChoice function
    computersChoice(Choice);
    //Determining the winner
    winner(Choice, PChoice);
    if(Choice == PChoice){
        goto Start;
    }
    return 0;
}