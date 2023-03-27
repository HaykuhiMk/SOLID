#ifndef SCANNER_H
#define SCANNER_H
#include "iscanner.h"

class Scanner : public IScanner
{
public:
    ~Scanner() = default;
    void scan() override;
};

#endif  //SCANNER_H