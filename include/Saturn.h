#include <iostream>
#include <list>
#include <cstdlib>
#include <iostream>
#include <string>

#define SUNGLASSES 0
#define HAMMER 1
#define FORK 2
#define BAT 3 
#define BINOCLES 4
#define SWORD 5 

class Saturn {
    private:
        int life;
        int stamina;
        list <int> backpack;
    public:
        bool setlife();
        bool getlife();
        bool setstamina();
        bool getstamina();
        bool generatebackpack();
        bool init();
};
