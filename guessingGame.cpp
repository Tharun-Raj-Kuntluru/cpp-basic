// /*Player has to guess the number that is already defined in the program, When everytime he do wrong guess he has to be given repeated chances untill he guess it, Finally his data has to store about number of attempts*/
// #include <iostream>

// using namespace std;

// int main()
// {
//     int secretNum = 7;
//     int guessNum;
//     int attempts = 0;
//     cout << "Welcome to the Guessing Game 2024" <<endl;
//     while(guessNum !=  secretNum)
//     {
//         if (attempts)
//         {
//             cout << "Oops !!! Wrong guess :(  ,Try again--->" <<endl;

//         }
//         cout << "Guess the number" <<endl;
//         cin >> guessNum;
//         attempts++;
//     }
//     cout << "Eurekha !!! You guessed it right " <<endl;
//     cout << "You have taken " << attempts << " attempts to guess it :)" <<endl;
// }

/*Player has to guess the number that is already defined in the program, When everytime he do wrong guess he has to be given repeated chances untill he guess it, Finally his data has to store about number of attempts*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int secretNum;
    int guessNum;
    int attempts = 0;
    srand(static_cast<unsigned>(time(0)));
    secretNum = rand() % 6;     //after %(you have to give total number of numbers STARTING ALWAYS FROM ZERO(0)) you can give the numbers you want upto for example if you want 0 to 5 give 6; 0 to 10 give 11; if you want 0 to 100 give 101
    cout << secretNum << endl; // To reveal the  key
    cout << "Welcome to the Guessing Game 2024" << endl;
    while (guessNum != secretNum)
    {
        if (attempts)
        {
            cout << "Oops !!! Wrong guess :(  ,Try again--->" << endl;
        }
        cout << "Guess the number" << endl;
        cin >> guessNum;
        attempts++;
    }
    cout << "Eurekha !!! You guessed it right " << endl;
    cout << "You have taken " << attempts << " attempts to guess it :)" << endl;
}