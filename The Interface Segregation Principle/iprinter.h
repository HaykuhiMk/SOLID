#ifndef IPRINTER_H
#define IPRINTER_H

class IPrinter
{
public:
    virtual ~IPrinter() = default;
    virtual void print() = 0;
};

#endif  //IPRINTER_H
