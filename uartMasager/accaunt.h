#ifndef UARTSETTING_H
#define UARTSETTING_H


class Accaunt::QSerialPort
{
    private:
        std::string *_name;
    public:
        void setName();
        std::string getName();
        ~Accaunt();
};

#endif // UARTSETTING_H
