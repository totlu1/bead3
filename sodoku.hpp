#ifndef SODOKU_HPP_INCLUDED
#define SODOKU_HPP_INCLUDED
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "alap.hpp"
#include "skocka.hpp"


using namespace std;
using namespace genv;

class sodoku
{
protected:
int x,y,sx,sy,r,g,b;


public:

bool kattintas;
char szam;
int x0, y0, kival;
event ev;
vector<ALAP*>a;
vector<vector<string> >s;


sodoku();
sodoku(int _x, int _y, int _sx, int _sy);
virtual void rajzolas();
     virtual void viselkedes();
bool kivalasztas (int x0, int y0)const;
void beolvasas();


};


#endif // SODOKU_HPP_INCLUDED
