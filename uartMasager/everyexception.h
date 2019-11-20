#ifndef EVERYEXCEPTION_H
#define EVERYEXCEPTION_H


class EveryException : std::exception
{
    std::string *_message = nullptr;
public:
    EveryException(std::string mess);
    std::string what();

};

#endif // EVERYEXCEPTION_H
