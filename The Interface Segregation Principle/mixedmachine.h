#ifndef MIXED_MACHINE_H
#define MIXED_MACHINE_H
#include "iprinter.h"
#include "iscanner.h"

class MixedMachine : public IPrinter, public IScanner
{
public:
    ~MixedMachine() = default;
    void print() override;
    void scan() override;
};

#endif  //MIXED_MACHINE_H