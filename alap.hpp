#ifndef ALAP_HPP_INCLUDED
#define ALAP_HPP_INCLUDED
#include "graphics.hpp"
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;
using namespace genv;

class ALAP
{
protected:
int x,y,sx,sy,r,g,b, skalamin;

public:

    ALAP();
    ALAP(int _x, int _y, int _sx, int _sy, int _r, int _g, int _b);
     ALAP(int _x, int _y, int _sx, int _sy, int _r, int _g, int _b, int _skalamin);


virtual void rajzolas();
virtual void viselkedes(int &x0, int &y0, event ev);
virtual bool kivalasztas(int x0, int y0)const;



};



#endif // ALAP_HPP_INCLUDED
