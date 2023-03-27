#include <iostream>
#include "resultSaver.h"

ResultSaver::ResultSaver() :
mResult() 
{}

ResultSaver& ResultSaver::operator=(const ResultSaver &rhs)
{
    this->mResult = rhs.mResult;
    return *this;
}

void ResultSaver::saveResult(int res)
{
    mResult = res;
}

int ResultSaver::getResult()
{
    return mResult;
}


