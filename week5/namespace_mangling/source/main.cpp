#include <iostream>

namespace EnglishBook 
{
    int bookCount = 0;
    
    int getBookNum() 
    {
        return bookCount;
    }
}

namespace ChineseBook 
{
    int bookCount = 0;
    
    int getBookNum() 
    {
        return bookCount;
    }
}

int main() {
    
    EnglishBook::bookCount = 10;
    std::cout << EnglishBook::getBookNum() << std:: endl;
    
    ChineseBook::bookCount = 8;
    std:: cout << ChineseBook::getBookNum() << std::endl;
    
    return 0;
}


