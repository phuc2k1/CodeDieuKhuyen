#ifndef CLASSROBOT_H
#define CLASSROBOT_H
#include "classservo.h"

#define TRANGTHHAI_1 {1,2,3,4,5}
#define TRANGTHHAI_2 {1,2,3,4,5}
#define TRANGTHHAI_3 {1,2,3,4,5}
#define TRANGTHHAI_4 {1,2,3,4,5}
#define TRANGTHHAI_5 {1,2,3,4,5}
class classrobot
{
public:
    classrobot();

private:
    classservo* servo1;
    classservo* servo2;
    classservo* servo3;
    classservo* servo4;
    classservo* servo5;
public:
    void settrangthai1();
    void settrangthai2();
    void settrangthai3();
    void settrangthai4();
    void settrangthai5();

};

#endif // CLASSROBOT_H
