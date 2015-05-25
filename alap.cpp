#include "graphics.hpp"
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "alap.hpp"

using namespace std;
using namespace genv;


ALAP::ALAP( )
{


}
ALAP::ALAP(int _x,int _y, int _sx, int _sy, int _r, int _g, int _b)
{
    x=_x;
    y=_y;
    sx=_sx;
    sy=_sy;
    r=_r;
    g=_g;
    b=_b;
   // csuszszel=_csuszszel;

}

/*ALAP::ALAP(int _x,int _y, int _sx, int _sy, int _r, int _g, int _b)
{
    x=_x;
    y=_y;
    sx=_sx;
    sy=_sy;
    r=_r;
    g=_g;
    b=_b;

}
*/


 void ALAP::rajzolas(){};
 void ALAP::viselkedes(int &x0, int &y0, event ev){};
 bool ALAP::kivalasztas(int x0, int y0)const
{
return x0>x and x0<x+sx and y0>y and y0<y+sy;

};


