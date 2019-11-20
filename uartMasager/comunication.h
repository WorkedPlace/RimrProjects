#ifndef COMUNICATION_H
#define COMUNICATION_H


class Comunication
{
public:
    Comunication();

private:
    std::list<std::string> *_sendMessageStory = NULL;
    std::list<std::string> *_getMessageStory = NULL;
    Accaunt *_companion = NULL;
};

#endif // COMUNICATION_H
