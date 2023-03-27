#ifndef ISCANNER_H
#define ISCANNER_H

class IScanner
{
public:
    virtual ~IScanner() = default;
    virtual void scan() = 0;
};

#endif  //ISCANNER_H
