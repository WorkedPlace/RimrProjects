#include "everyexception.h"

EveryException::EveryException(std::string mess)
{
    _message  = new std::string(mess);
}

std::string EveryException::what()
{
    return _message;
}

