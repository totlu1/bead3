#ifndef SKOCKA_HPP_INCLUDED
#define SKOCKA_HPP_INCLUDED
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

class SKOCKA : public ALAP
{
protected:
int x,y,sx,sy,r,g,b;
public:
bool kattintas,kival1,kival2;
char szam;
int vmi;
SKOCKA();
SKOCKA(int _x,int _y,int _sx,int _sy);
virtual void rajzolas();
     virtual void viselkedes(int &x0, int &y0, event ev);
bool kivalasztas (int x0, int y0)const;


};


#endif // SKOCKA_HPP_INCLUDED
