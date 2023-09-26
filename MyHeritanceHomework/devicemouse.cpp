#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{

}

void DeviceMouse::setPrimaryButton()
{
    cout <<"choose your primarybuttom 1-2 " <<endl;
    cin >> primaryButton;
    cout<<"  "<<endl;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
