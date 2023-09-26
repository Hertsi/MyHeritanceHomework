#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{

}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout <<"Choose your touchpadsensitivity 1-5" <<endl;
    cin >> touchPadSensitivity;
    cout <<" "<<endl;
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
