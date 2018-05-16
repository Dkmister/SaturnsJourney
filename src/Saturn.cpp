#include "../include/Saturn.h"

bool Saturn::setlife()
{
    this->life = 100;

    return TRUE;
}

bool Saturn::getlife()
{
    cout << this->life << endl;

    return TRUE;
}


bool Saturn::setstamina();
{
    this->stamina = 100;

    return TRUE;
}
bool Saturn::getstamina();
{
    cout << this->stamina << endl;

    return TRUE;
}
bool Saturn::generatebackpack()
{   for(int i = 0 ; i<=5; ++i)
        {
        this->backpack.push_back(i)
        }
    if(this->backpack == NULL)
        return FALSE;
    else
        return TRUE;
};