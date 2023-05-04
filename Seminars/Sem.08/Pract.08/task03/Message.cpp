#include "Message.h"
#include "MyString.h"

std::istream &operator>>(std::istream& is,Message& ms){
    size_t length;
    is.read((char*)&length,sizeof (length));
    is.read((char*)& ms.sender, length);
    length=0;
    is.read((char*)&length,sizeof (length));
    is.read((char*)& ms.sender, length);

    return is;
}
std::ostream &operator<<(std::ostream& os,const Message& ms ){
    int length = ms.sender.length();
    os.write((const char*)&length,sizeof (length));
    os.write((const char*)ms.sender.c_str(),length);
    length=0;
    os.write((const char*)&length,sizeof (length));
    os.write((const char*)ms.content.c_str(),length);

    return os;
}


//std::istream &operator>>(std::ifstream& is,Message& ms){
//    is.read(ms)
//
//    return is;
//}

