#ifndef TASK03_MESSAGE_H
#define TASK03_MESSAGE_H
#include "MyString.h"
#include <fstream>

class Message {
    MyString sender;
    MyString content;

public:
    friend std::istream &operator>>( std::istream&,Message&  );
    friend std::ostream &operator<<( std::ostream&,const Message&  );

    //friend std::istream &operator>>( std::ifstream&,Message&  );
    //friend std::ostream &operator<<( std::ofstream&,const Message&  );

};

std::istream &operator>>( std::istream&,Message& );
std::ostream &operator<<(std::ostream&,const Message&  );

//std::istream &operator>>( std::ifstream&,Message&  );
//std::ostream &operator<<( std::ofstream&,const Message&  );




#endif //TASK03_MESSAGE_H
