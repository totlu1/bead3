#include <cstdlib>
#include <ctime>
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "alap.hpp"
#include "skocka.hpp"

SKOCKA::SKOCKA() {}
SKOCKA::SKOCKA(int _x, int _y, int _sx, int _sy,string _szam) : x(_x),y(_y),sx(_sx),sy(_sy),szam(_szam)
{
    kattintas=false;
    r=48;
    g=57;
    b=48;
    kival1=false;
    kival2=false;


}
void SKOCKA::rajzolas()
{


    gout<<move_to(x,y)<<color(r,g,b)<<box(sx,sy);
    gout<<move_to(x+2,y+2)<<color(255,255,255)<<box(sx-4,sy-4)<<color(0,0,0)<<move_to(x+((sx/2)-5),y+((sy/2)+5))<<text(szam);
}


void SKOCKA::viselkedes(int &x0, int &y0, event ev)
{

    if (ev.button==btn_left)
    {
        kattintas=true;
    }
    if (ev.button==-btn_left)
    {
        kattintas=false;;
    }

    if(kattintas&&x0>x&&x0<x+sx&&y0>y&&y0<y+sy)
    {

        kival1=true;
        kival2=false;


    }
    if(kival1)
        {


            if(ev.keycode>=49&&ev.keycode<58)
            {
                szam=ev.keycode;
                cout<<"kiírom:"<<szam<<endl;

            }
        }






}

bool SKOCKA::kivalasztas(int x0, int y0)const
{
    return x0>x and x0<x+sx and y0>y and y0<y+sy;
}
