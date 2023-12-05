#include <iostream> // For object cin and cout
#include <string> // For class string
#include <cmath> // For function pow
#include <iomanip> // For function setw, fixed and setprecision
#include <cstdlib> // For rand()function, exit(), to generate random int number
#include <ctime> // For time() function;
using namespace std;
void uppercase(int length){
    srand((unsigned) time(NULL));
    for ( int x = 1 ; x <= length ; x++ ){
        int num = rand() % 90;
        while ( num < 65 ){
            num = rand() % 90;
        }
        cout << char(num);
    }
}
void lowercase(int length){
    srand((unsigned) time(NULL));
    for ( int x = 1 ; x <= length ; x++ ){
        int num = rand() % 122;
        while ( num < 97 ){
            num = rand() % 122;
        }
        cout << char(num);
    }
}
void numbered(int length){
    srand((unsigned) time(NULL));
    for ( int x = 1 ; x <= length ; x++ ){
        int num = rand() % 57;
        while ( num < 48 ){
            num = rand() % 57;
        }
        cout << char(num);
    }
}
void specialcharacters(int length){
    srand((unsigned) time(NULL));
    for ( int x = 1 ; x <= length ; x++ ){
        int chances = 1 + (rand() % 4);
        if ( chances == 1 ){
            int num = rand() % 47;
            while ( num < 33 ){
                num = rand() % 47;
            }
            cout << char(num);
        }else if ( chances == 2 ){
            int num = rand() % 64;
            while ( num < 58 ){
                num = rand() % 64;
            }
            cout << char(num);
        }else if ( chances == 3 ){
            int num = rand() % 96;
            while ( num < 91 ){
                num = rand() % 96;
            }
            cout << char(num);
        }else if ( chances == 4 ){
            int num = rand() % 126;
            while ( num < 123 ){
                num = rand() % 126;
            }
            cout << char(num);
        }
    }
}
void upperlower(int length){
    srand((unsigned) time(NULL));
    for ( int x = 1 ; x <= length ; x++ ){
        int chances = 1 + (rand() % 2);
        if ( chances == 1 ){
            int num = rand() % 122;
            while ( num < 97 ){
                num = rand() % 122;
            }
            cout << char(num);
        }else if ( chances == 2 ){
            int num = rand() % 90;
            while ( num < 65 ){
                num = rand() % 90;
            }
            cout << char(num);
        }
    }
}
void upperlowernumber(int length){
    srand((unsigned) time(NULL));
    for ( int x = 1 ; x <= length ; x++ ){
        int chances = 1 + (rand() % 3);
        if ( chances == 1 ){
            int num = rand() % 122;
            while ( num < 97 ){
                num = rand() % 122;
            }
            cout << char(num);
        }else if ( chances == 2 ){
            int num = rand() % 90;
            while ( num < 65 ){
                num = rand() % 90;
            }
            cout << char(num);
        }else if ( chances == 3 ){
            int num = rand() % 57;
            while ( num < 48 ){
                num = rand() % 57;
            }
            cout << char(num);
        }
    }
}
void mixed(int length){
    srand((unsigned) time(NULL));
    for ( int x = 1 ; x <= length ; x++ ){
        int num = rand() % 126;
        while ( num < 33 ){
            num = rand() % 126;
        }
        cout << char(num);
    }
}
int main(){
    int length, choice;
    cout << "\n\nHello there!!!\n\n\tWelcome to Ricksy\'s Random password Generator\n\n";
    cout << "How long do you wish your password to be : ";
    cin >> length;
    cout << "\n\nSelect password Category : ";
    cout << "\n\n\t01. uppercase only (Weak Password)";
    cout << "\n\n\t02. lowercase only (Weak Password)";
    cout << "\n\n\t03. numbers only (Weak Password)";
    cout << "\n\n\t04. special characters only (Moderate Password)";
    cout << "\n\n\t05. uppercase and lowercase (Moderate Password)";
    cout << "\n\n\t06. uppercase, lowercase and numbers (Strong Password)";
    cout << "\n\n\t07. uppercase, lowercase, numbers and Special characters (Strong Password)";
    cout << "\n\n\tEnter here : ";
    cin >> choice;
    switch ( choice ){
        case 1:
        cout << "\n\nGenerating uppercase password...\n\nThe uppercase password is : ";
        uppercase(length);
        break;
        case 2:
        cout << "\n\nGenerating lowercase password...\n\nThe lowercase password is : ";
        lowercase(length);
        break;
        case 3:
        cout << "\n\nGenerating number password...\n\nThe numbered type password is : ";
        numbered(length);
        break;
        case 4:
        cout << "\n\nGenerating special characters password...\n\nThe special charactered password is : ";
        specialcharacters(length);
        break;
        case 5:
        cout << "\n\nGenerating uppercase and lowercase password...\n\nThe password mixed with uppercase and lowercase is : ";
        upperlower(length);
        break;
        case 6:
        cout << "\n\nGenerating uppercase, lowercase and numbers password...\n\nThe password mixed with uppercase, lowercase and numbers is : ";
        upperlowernumber(length);
        break;
        case 7:
        cout << "\n\nGenerating uppercase, lowercase, numbers and Special characters password...\n\nThe mixed characters password is : ";
        mixed(length);
        break;
        default:
        cout << "\n\n\tInvalid choice\n\n";
    }
    cout << endl << endl;
}