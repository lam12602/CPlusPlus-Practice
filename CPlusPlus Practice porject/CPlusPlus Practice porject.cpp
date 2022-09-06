// CPlusPlus Practice porject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void BasicFunction()
{
    std::cout << "Basic function ran";
}


int main()
{
    /*
    int testInt = 9;
    float testFloat = 5.7f;
    bool testBool = false;
    char testChar = 'K';

    std::string lastName = "Mead";

    std::string firstName = "Liam";

    std::string fullName = firstName + " " + lastName;
    
    std::string Initials = fullName.substr(0, 1); 
    std::size_t spacePos = fullName.find("");

    Initials += fullName.substr(spacePos + 1, 1);

    //std::string Paragraph = "Last year, you worked primarily with the C# programming language. This year, you will be working in C++. The names sound a bit similar, and that's for a reason - C# was built after C++ and shares much of the same syntax! However, they are still different languages and there are definitely some differences between them";
    //std::string TwentyChar = Paragraph.substr(0, 20);
    //std::string breaktext = TwentyChar + "\n";
    //breaktext += Paragraph.substr(20, std::string::np)

    std::cout << "Hello World!" << std::endl;
    std::cout << "F in the chat\n";
       // << TwentyChar << std::endl;
    //input
    int length = 4;
    int width = 6;

    int area = length * width;
    int perimiter = length * 2 + width * 2;

    std::cout << "the area and perimiter are " << area << " and" << perimiter;

    int hours = 4;
    int minuets = hours * 60;
    std::cout << "The time in hours and minuets is " << hours << "hours and in minuets it is " << minuets;
    
    std::cout << "please enter the day you were born.\n";
    int day;
    std::cin >> day;
    std::cout << "please enter the month you were born.\n";
    int month;
    std::cin >> month;
    std::cout << "please enter the year you were born.\n";
    int year;
    std::cin >> year;

    std::cout << " you were born on " << day << "/" << month << "/" << year;

    std::string insult = "absolute tool";
    std::string start = "you are a ";
    std::cout << start << insult;

    
    
    
    
    
    
    
    
    
    
    
    std::cout << "Please enter word.\n";
    std::string entryString;
    std::cin >> entryString;
    std::cout << "You typed " << entryString << "!\n";

    int entryInt;
    std::cout << "Please enter whole number.\n";
    std::cin >> entryInt;
    std::cout << "You typed " << entryInt << "!\n";

    float entryFloat;
    std::cout << "Please enter decimal number.\n";
    std::cin >> entryFloat;
    std::cout << "You typed " << entryFloat << "!\n";

    std::string lineoftext;
    std::cout << "Please enter a line of text.\n";
    std::getline(std::cin, lineoftext);
    std::cout << "you typed " << lineoftext << "!\n";

    int direction;
    std::cout << "Please enter a direction 1 - 4.\n";
    std::cin >> direction;
    if (direction == 1)
    {
        std::cout << "passed a hospital .\n";
    }

    else if (direction == 2)
    {
        std::cout << "passed graveyard.\n";
    }

    else if (direction == 3)
    {
        std::cout << "passed shop.\n";
    }
    else if (direction == 4)
    {
        std::cout << "you decided to just head home.\n";
    }
    else
    {
        std::cout << "Direction not regognised.\n";
    }

    int errorcode = 2;

    switch (errorcode)
    {
    case 0:
    {
        std::cout << "error was 0\n";


        break;
    }
      
    case 1:
    {
        std::cout << "error was 1\n";

        break;
    }

    case 2:
    {
        std::cout << "error was 2\n";

        break;

    }

    default:
    {
        std::cout << "error was not recognised \n";
        break;
    }
        
    }
    
    bool whileb = true;

    while (whileb == true)
    {
        whileb = false;
    }

    int doI = 0;
    do {
        ++doI;
        std::cout << "do while ran " << doI << " times!\n";
        
    } while (doI<2);
    
    std::string google = "go";

    for (int i = 0 ;i < 5 ; ++i)
    {
        google += 'o';
        std::cout << google << "gle.\n";
    }
    */

BasicFunction();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
