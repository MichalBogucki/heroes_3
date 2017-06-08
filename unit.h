#ifndef unit_h
#define unit_h

#include<cmath>
#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<vector>


using std::vector;
using namespace std;


class unit
{
    friend class warrior;
    friend class horseman;
    friend class mage;
    friend class archer;
    friend class game;
     protected:
        string name;string nickname;
        int damage, distance, health, movement, amount, xPosition, yPosition, totalHP,totalDMG;
        bool available;
    public:
        virtual void ruchV(unit*&fBegin, unit*&fEnd,int bx,int by)=0;
        virtual void attackV(unit *&attacking, unit *&reciving)=0;
         void info();
         virtual ~unit(){};
};
class warrior : public unit
{
    public:
        void attackV(unit *&attacking, unit *&reciving);
        void ruchV(unit*&fBegin, unit*&fEnd,int bx,int by);
        warrior();
        ~warrior(){};
};

class horseman : public unit
{
    public:
    void attackV(unit *&attacking, unit *&reciving);
    void ruchV(unit*&fBegin, unit*&fEnd,int bx,int by);
    horseman();
    ~horseman(){};
};
class mage : public unit
{
    public:
    void attackV(unit *&attacking, unit *&reciving);
    void ruchV(unit*&fBegin, unit*&fEnd,int bx,int by);
    mage();
    ~mage(){};
};
class archer : public unit
{
    public:
    void attackV(unit *&attacking, unit *&reciving);
    void ruchV(unit*&fBegin, unit*&fEnd,int bx,int by);
    archer();
    ~archer(){};
};

class game
{
    public:
    void attack(unit *&attacking, unit *&reciving);
    void ruch(unit*&fBegin, unit*&fEnd,int bx,int by);
    void stworz();
    game();
    ~game(){};

};

#endif unit_h
