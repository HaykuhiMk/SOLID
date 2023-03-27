#include <iostream>
#include "iprinter.h"
#include "iscanner.h"
#include "mixedmachine.h"
#include "scanner.h"

int main()
{
    IScanner* ptrS = new Scanner();
    ptrS->scan();
    delete ptrS;
    IPrinter* ptrP = new MixedMachine();
    ptrP->print();
    IScanner* ptrS1 = dynamic_cast<IScanner*>(ptrP);
    if(ptrS1)
    {
        ptrS1->scan();
    }
    delete ptrP;
}