#ifndef RESULT_SAVER_H
#define RESULT_SAVER_H

class ResultSaver
{
public:
    ResultSaver();
    ResultSaver& operator=(const ResultSaver& rhs);
    void saveResult(int res);
    int getResult();

private:
    int mResult;
};

#endif  //RESULT_SAVER_H