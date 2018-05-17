#include "../include/Saturn.h"

bool Saturn::setlife()
{
    this->life = 100;

    return true;
}

bool Saturn::getlife()
{
    cout << this->life << endl;

    return true;
}


bool Saturn::setstamina()
{
    this->stamina = 100;

    return true;
}
bool Saturn::getstamina()
{
    cout << this->stamina << endl;

    return true;
}
bool Saturn::generatebackpack()
{   for(int i = 0 ; i<=5; ++i)
        {
        this->backpack[i] = i;
        }
    if(this->backpack == NULL)
        return false;
    else
        return true;
}
Saturn::Saturn()
{
   life = 100;
   stamina = 100;
   
}
