#include "accaunt.h"
#include <exception>
#include "everyexception.h"
#include <QtSerialPort/QSerialPort>

void Accaunt::setName(std::string name)
{
    _name = new std::string(name);
}

std::string Accaunt::getName()
{
    if (_name == NULL)
        throw EveryException("NullPointerException");
    return *_name;
}
