#include <cmath>     // std::abs, std::sqrt, std::pow
#include <cstdlib>   // std::srand, std::rand
#include <ctime>     // std::time
#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
  std::srand(std::time(0));  // seeding our random number generator

  int user_input = 0;
  int num1;
  int num2;
  int numerator;
  int denominator;
  while (user_input != 99)
  {
    std::cout << "Welcome to C++ Calculator!  Choose an option below!\n"
              << "0. Roll a dice\n"        
              << "1. Add\n"
              << "2. Subtract\n"
              << "3. Multiply\n"
              << "4. Divide\n"
              << "5. Square root\n"
              << "99. Quit\n\n> ";

    std::cin >> user_input;
    
    // implement calculator below
    if (user_input == 0)
    {
      int random_number = (std::rand() % 6) + 1;  // random numbers between 1 and 6
      std::cout << "You rolled a " << random_number << std::endl;
    }
    else
    {
      if (user_input == 1)
      {
        std::cout << "Enter two numbers\n";
        std::cin >> num1 >> num2;
        std::cout << "Their sum is " << (num1 + num2) << std::endl;
      }
      else
      {
        if (user_input == 2)
        {
          std::cout << "Enter two numbers\n";
          std::cin >> num1 >> num2;
          std::cout << "Their difference is " << (num1 - num2) << std::endl;
        }
        else
        {
          if (user_input == 3)
          {
            std::cout << "Enter two numbers\n";
            std::cin >> num1 >> num2;
            std::cout << "The product is " << (num1 * num2) << std::endl;
          }
          else
          {
            if (user_input == 4)
            {
              std::cout << "Enter two numbers\n";
              std::cin >> numerator >> denominator;

              if (denominator == 0)
              {
                std::cout << "error: undefined\n";
              }
              else
              {
                 std::cout << "The quotient is " << (numerator % denominator) << std::endl;
              }
            }
            else
            {
              if (user_input == 5)
              {
                std::cout << "Enter a number\n";
                std::cin >> num1;
              
                if (num1 < 0)
                {
                  std::cout << "Error: cannot take the square root of a negative number\n";
                }
                else
                {
                  std::cout << "The sqaure root of " << num1 << " is " << sqrt(num1) << std::endl;
                }

              }
              else
              {
                if (user_input != 99)
                {
                  std::cout << "Invalid input, please enter something else.\n";

                }
              }
            }
          }
        }
      }
    }
  }

  std::cout << "Goodbye!\n";
  return 0;
}
