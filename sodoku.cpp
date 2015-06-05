#include <cstdlib>
#include <ctime>
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "alap.hpp"
#include "skocka.hpp"
#include "sodoku.hpp"

#define width 600
#define height 600
#define clr gout << move_to(0,0) <<color(100,200,100) <<box(width,height);


using namespace std;
using namespace genv;

sodoku::sodoku() {};
sodoku::sodoku(int _x, int _y, int _sx, int _sy):x(_x),y(_y),sx(_sx),sy(_sy)
{


    kival=-1;


    kattintas=false;


    SKOCKA * a1 = new SKOCKA(30,10, 50,50);
    a.push_back(a1);
    SKOCKA * b1 = new SKOCKA(30,61, 50,50);
    a.push_back(b1);
    SKOCKA * c1 = new SKOCKA(30,112, 50,50);
    a.push_back(c1);
    SKOCKA * d1 = new SKOCKA(30,170, 50,50);
    a.push_back(d1);

    SKOCKA * e1 = new SKOCKA(30,221, 50,50);
    a.push_back(e1);

    SKOCKA * f1 = new SKOCKA(30,272, 50,50);
    a.push_back(f1);
    SKOCKA * g1 = new SKOCKA(30,330, 50,50);
    a.push_back(g1);
    SKOCKA * h1 = new SKOCKA(30,381, 50,50);
    a.push_back(h1);
    SKOCKA * i1 = new SKOCKA(30,432, 50,50);
    a.push_back(i1);


    SKOCKA * a2 = new SKOCKA(81,10, 50,50);
    a.push_back(a2);
    SKOCKA * b2 = new SKOCKA(81,61, 50,50);
    a.push_back(b2);
    SKOCKA * c2 = new SKOCKA(81,112, 50,50);
    a.push_back(c2);
    SKOCKA * d2 = new SKOCKA(81,170, 50,50);
    a.push_back(d2);

    SKOCKA * e2 = new SKOCKA(81,221, 50,50);
    a.push_back(e2);

    SKOCKA * f2 = new SKOCKA(81,272, 50,50);
    a.push_back(f2);
    SKOCKA * g2 = new SKOCKA(81,330, 50,50);
    a.push_back(g2);
    SKOCKA * h2 = new SKOCKA(81,381, 50,50);
    a.push_back(h2);
    SKOCKA * i2 = new SKOCKA(81,432, 50,50);
    a.push_back(i2);


    SKOCKA * a3 = new SKOCKA(132,10, 50,50);
    a.push_back(a3);
    SKOCKA * b3 = new SKOCKA(132,61, 50,50);
    a.push_back(b3);
    SKOCKA * c3 = new SKOCKA(132,112, 50,50);
    a.push_back(c3);
    SKOCKA * d3 = new SKOCKA(132,170, 50,50);
    a.push_back(d3);

    SKOCKA * e3 = new SKOCKA(132,221, 50,50);
    a.push_back(e3);

    SKOCKA * f3 = new SKOCKA(132,272, 50,50);
    a.push_back(f3);
    SKOCKA * g3 = new SKOCKA(132,330, 50,50);
    a.push_back(g3);
    SKOCKA * h3 = new SKOCKA(132,381, 50,50);
    a.push_back(h3);
    SKOCKA * i3 = new SKOCKA(132,432, 50,50);
    a.push_back(i3);


    SKOCKA * a4 = new SKOCKA(190,10, 50,50);
    a.push_back(a4);
    SKOCKA * b4 = new SKOCKA(190,61, 50,50);
    a.push_back(b4);
    SKOCKA * c4 = new SKOCKA(190,112, 50,50);
    a.push_back(c4);
    SKOCKA * d4 = new SKOCKA(190,170, 50,50);
    a.push_back(d4);

    SKOCKA * e4 = new SKOCKA(190,221, 50,50);
    a.push_back(e4);

    SKOCKA * f4 = new SKOCKA(190,272, 50,50);
    a.push_back(f4);
    SKOCKA * g4 = new SKOCKA(190,330, 50,50);
    a.push_back(g4);
    SKOCKA * h4 = new SKOCKA(190,381, 50,50);
    a.push_back(h4);
    SKOCKA * i4 = new SKOCKA(190,432, 50,50);
    a.push_back(i4);


    SKOCKA * a5 = new SKOCKA(241,10, 50,50);
    a.push_back(a5);
    SKOCKA * b5 = new SKOCKA(241,61, 50,50);
    a.push_back(b5);
    SKOCKA * c5 = new SKOCKA(241,112, 50,50);
    a.push_back(c5);
    SKOCKA * d5 = new SKOCKA(241,170, 50,50);
    a.push_back(d5);

    SKOCKA * e5 = new SKOCKA(241,221, 50,50);
    a.push_back(e5);

    SKOCKA * f5 = new SKOCKA(241,272, 50,50);
    a.push_back(f5);
    SKOCKA * g5 = new SKOCKA(241,330, 50,50);
    a.push_back(g5);
    SKOCKA * h5 = new SKOCKA(241,381, 50,50);
    a.push_back(h5);
    SKOCKA * i5 = new SKOCKA(241,432, 50,50);
    a.push_back(i5);


    SKOCKA * a6 = new SKOCKA(292,10, 50,50);
    a.push_back(a6);
    SKOCKA * b6 = new SKOCKA(292,61, 50,50);
    a.push_back(b6);
    SKOCKA * c6 = new SKOCKA(292,112, 50,50);
    a.push_back(c6);
    SKOCKA * d6 = new SKOCKA(292,170, 50,50);
    a.push_back(d6);

    SKOCKA * e6 = new SKOCKA(292,221, 50,50);
    a.push_back(e6);

    SKOCKA * f6 = new SKOCKA(292,272, 50,50);
    a.push_back(f6);
    SKOCKA * g6 = new SKOCKA(292,330, 50,50);
    a.push_back(g6);
    SKOCKA * h6 = new SKOCKA(292,381, 50,50);
    a.push_back(h6);
    SKOCKA * i6 = new SKOCKA(292,432, 50,50);
    a.push_back(i6);


    SKOCKA * a7 = new SKOCKA(350,10, 50,50);
    a.push_back(a7);
    SKOCKA * b7 = new SKOCKA(350,61, 50,50);
    a.push_back(b7);
    SKOCKA * c7 = new SKOCKA(350,112, 50,50);
    a.push_back(c7);
    SKOCKA * d7 = new SKOCKA(350,170, 50,50);
    a.push_back(d7);

    SKOCKA * e7 = new SKOCKA(350,221, 50,50);
    a.push_back(e7);

    SKOCKA * f7 = new SKOCKA(350,272, 50,50);
    a.push_back(f7);
    SKOCKA * g7 = new SKOCKA(350,330, 50,50);
    a.push_back(g7);
    SKOCKA * h7 = new SKOCKA(350,381, 50,50);
    a.push_back(h7);
    SKOCKA * i7 = new SKOCKA(350,432, 50,50);
    a.push_back(i7);


    SKOCKA * a8 = new SKOCKA(401,10, 50,50);
    a.push_back(a8);
    SKOCKA * b8 = new SKOCKA(401,61, 50,50);
    a.push_back(b8);
    SKOCKA * c8 = new SKOCKA(401,112, 50,50);
    a.push_back(c8);
    SKOCKA * d8 = new SKOCKA(401,170, 50,50);
    a.push_back(d8);

    SKOCKA * e8 = new SKOCKA(401,221, 50,50);
    a.push_back(e8);

    SKOCKA * f8 = new SKOCKA(401,272, 50,50);
    a.push_back(f8);
    SKOCKA * g8 = new SKOCKA(401,330, 50,50);
    a.push_back(g8);
    SKOCKA * h8 = new SKOCKA(401,381, 50,50);
    a.push_back(h8);
    SKOCKA * i8 = new SKOCKA(401,432, 50,50);
    a.push_back(i8);


    SKOCKA * a9 = new SKOCKA(452,10, 50,50);
    a.push_back(a9);
    SKOCKA * b9 = new SKOCKA(452,61, 50,50);
    a.push_back(b9);
    SKOCKA * c9 = new SKOCKA(452,112, 50,50);
    a.push_back(c9);
    SKOCKA * d9 = new SKOCKA(452,170, 50,50);
    a.push_back(d9);

    SKOCKA * e9 = new SKOCKA(452,221, 50,50);
    a.push_back(e9);

    SKOCKA * f9 = new SKOCKA(452,272, 50,50);
    a.push_back(f9);
    SKOCKA * g9 = new SKOCKA(452,330, 50,50);
    a.push_back(g9);
    SKOCKA * h9 = new SKOCKA(452,381, 50,50);
    a.push_back(h9);
    SKOCKA * i9 = new SKOCKA(452,432, 50,50);
    a.push_back(i9);

}

void sodoku::beolvasas()
{
int j=0;
string elem=" ";
ifstream f("sudoku.txt");
if (f.is_open())
{
while (j!=9)
        {
            for(int i=0;i<9;i++)
            {
                getline(f,elem,' ');
                s[j][i]=elem;

            }
            j=j+1;
        }
}

}
void sodoku::rajzolas()

{

    for (int i=0; i<a.size(); i++)
    {
        a[i]->rajzolas();
        //gout<<move_to(a.x+)
    }

}

void sodoku::viselkedes()
{
 gout.open(width,height);
 // event ev;
    while(gin >> ev and ev.keycode!=key_escape)
    {

        if(ev.type==ev_mouse)
        {
            x0=ev.pos_x;
            y0=ev.pos_y;

        }

        clr;
        if(ev.type==ev_mouse and ev.button==btn_left)
        {
            for (size_t i=0; i<81; i++)
            {
                if (a[i]->kivalasztas(x0,y0))
                {
                    kival=i;
                    cout<<"Az aktív kocka:"<<i+1<<endl;

                }
            }

        }
        if (kival!=-1)
        {
            a[kival]->viselkedes(x0,y0, ev);



        }

        for (size_t i=0; i<a.size(); i++)
        {

            a[i]->rajzolas();


        }

        gout<<refresh;


}

}


bool sodoku::kivalasztas(int x0, int y0)const
{
    return x0>x and x0<x+sx and y0>y and y0<y+sy;
}
