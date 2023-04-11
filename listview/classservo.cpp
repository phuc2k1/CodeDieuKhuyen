#include "classservo.h"
#include"stdint.h"
classservo::classservo()
{

}

void classservo::setangle(int angle)
{
    if(angle<0){angle=0;}
    if(angle>180){angle=180;}
    uint32_t intension=5+ (angle/9);
    //them
}
int classservo::getangle(){
    return angle;
}


