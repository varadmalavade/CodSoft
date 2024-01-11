#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
using namespace std;

int main() 
{   
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int secretNumber = std::rand() % 100 + 1;
    int guess = 0;
    int attempt = 0;

    std::cout << "Welcome to the Guess the Number game!\n";
    std::cout << "I have chosen a number between 1 and 100. Can you guess it?\n";

    while (guess != secretNumber) 
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempt++;

        if (std::cin.fail()) 
        {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear();  
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        } 
        else 
        {
            if (guess == secretNumber) 
            {
                std::cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempt << " attempts.\n";
            } 
            else if (guess < secretNumber) 
            {
                std::cout << "Too low! Try again.\n";
            } else 
            {
                std::cout << "Too high! Try again.\n";
            }
        }
    }
    return 0;
}