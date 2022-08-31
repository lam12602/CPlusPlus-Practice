// CPlusPlus Practice porject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


int main()
{
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

    bool decision = true;
    if (descision == true)
    {
        std::cout << "was ture.\n";
    }

    else
    {
        std::cout << "was false.\n";
    }



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
