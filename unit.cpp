#ifndef unit_cpp
#define unit_cpp
#define N 6
#include "unit.h"
//------------------------------------------------   unit  ------------------------------------------------//
void unit::info()
{
    cout<<"---"<<nickname<<"---"<<endl;
    cout<<"<"<<name<<">::"<<endl;
    //cout<<"\t damage = "<<damage<<endl;
    //cout<<"\t distance="<<distance<<endl;
    //cout<<"\t health="<<health<<endl;
    cout<<"\t movement="<<movement<<endl;
    cout<<"\t amount="<<amount<<endl;
    cout<<"\t xPosition="<<xPosition<<endl;
    cout<<"\t yPosition="<<yPosition<<endl;
    cout<<"\t totalHP="<<totalHP<<endl;
    cout<<"\t totalDMG="<<totalDMG<<endl;

}

//------------------------------------------------   unit  ------------------------------------------------//

//------------------------------------------------   warrior  ------------------------------------------------//
warrior::warrior()
{
    name="Wojownik";
    damage=10;
    distance=1;
    health=100;
    movement=2;
    amount=5;
    totalHP=health*amount;
    totalDMG=damage*amount;
    xPosition=0;
    yPosition=0;
}
void warrior::ruchV(unit*&fBegin, unit*&fEnd, int bx, int by)
{
    if (fabs((bx-fBegin->xPosition+by-fBegin->yPosition))<=fBegin->movement)
    {
        cout<<"\n \t\t ruch z ["<<fBegin->xPosition<<"]"<<"["<<fBegin->yPosition<<"]  na ["<<bx<<"]"<<"["<<by<<"]"<<endl;
        fEnd=fBegin;
        fEnd->xPosition=bx;
        fEnd->yPosition=by;
        fBegin=0;
    }
    else
       cout<<"\n utrata ruchu, chciales sie ruszyc o "<<fabs(bx-fBegin->xPosition+by-fBegin->yPosition)<<" majac movement =="<<fBegin->movement<<endl;
}
void warrior::attackV(unit *&attacking, unit *&reciving)
{
    if (attacking->nickname==reciving->nickname) cout<<endl<<"--------nie mozna zaatakowac wlasnej jednostki -----------"<<endl;
    else if (reciving->totalHP==0)
    {
        cout<<endl<<"------Przeciwnik juz jest martwy"<<endl;
    }
    else if (fabs((reciving->xPosition-attacking->xPosition+reciving->yPosition-attacking->yPosition))<=attacking->distance)
    {reciving->totalHP=reciving->totalHP-attacking->totalDMG;
    cout<<endl<<attacking->name<<attacking->nickname<<" -> zaatakowal za   "<<attacking->totalDMG<<" ->"<<reciving->name<<reciving->nickname<<endl<<endl;
    }
    else
        cout<<"\n utrata ataku, bo odleglosc "<<fabs(reciving->xPosition-attacking->xPosition+reciving->yPosition-attacking->yPosition)<<" wieksza niz zacieg =="<<attacking->distance<<endl;
}

//------------------------------------------------   warrior  ------------------------------------------------//

//------------------------------------------------   mage  ------------------------------------------------//
mage::mage()
{
    name="Mag";
    damage=4;
    distance=4;
    health=30;
    movement=2;
    amount=40;
    totalHP=health*amount;
    totalDMG=damage*amount;
    xPosition=1;
    yPosition=0;
}
void mage::ruchV(unit*&fBegin, unit*&fEnd, int bx, int by)
{
    if (fabs((bx-fBegin->xPosition+by-fBegin->yPosition))<=fBegin->movement)
    {
        cout<<"\n \t\t ruch z ["<<fBegin->xPosition<<"]"<<"["<<fBegin->yPosition<<"]  na ["<<bx<<"]"<<"["<<by<<"]"<<endl;
        fEnd=fBegin;
        fEnd->xPosition=bx;
        fEnd->yPosition=by;
        fBegin=0;
    }
    else
       cout<<"\n utrata ruchu, chciales sie ruszyc o "<<fabs(bx-fBegin->xPosition+by-fBegin->yPosition)<<" majac movement =="<<fBegin->movement<<endl;
}
void mage::attackV(unit *&attacking, unit *&reciving)
{
    if (attacking->nickname==reciving->nickname) cout<<endl<<"--------nie mozna zaatakowac wlasnej jednostki -----------"<<endl;
    else if (reciving->totalHP==0)
    {
        cout<<endl<<"------Przeciwnik juz jest martwy"<<endl;
    }
    else if (fabs((reciving->xPosition-attacking->xPosition+reciving->yPosition-attacking->yPosition))<=attacking->distance)
    {reciving->totalHP=reciving->totalHP-attacking->totalDMG;
    cout<<endl<<attacking->name<<attacking->nickname<<" -> zaatakowal za   "<<attacking->totalDMG<<" ->"<<reciving->name<<reciving->nickname<<endl<<endl;
    }
    else
        cout<<"\n utrata ataku, bo odleglosc "<<fabs(reciving->xPosition-attacking->xPosition+reciving->yPosition-attacking->yPosition)<<" wieksza niz zacieg =="<<attacking->distance<<endl;
}
//------------------------------------------------   mage  ------------------------------------------------//

//------------------------------------------------   horseman  ------------------------------------------------//
horseman::horseman()
{
    name="Jezdziec";
    damage=7;
    distance=2;
    health=80;
    movement=6;
    amount=20;
    totalHP=health*amount;
    totalDMG=damage*amount;
    xPosition=2;
    yPosition=0;
}
void horseman::ruchV(unit*&fBegin, unit*&fEnd, int bx, int by)
{
    if (fabs((bx-fBegin->xPosition+by-fBegin->yPosition))<=fBegin->movement)
    {
        cout<<"\n \t\t ruch z ["<<fBegin->xPosition<<"]"<<"["<<fBegin->yPosition<<"]  na ["<<bx<<"]"<<"["<<by<<"]"<<endl;
        fEnd=fBegin;
        fEnd->xPosition=bx;
        fEnd->yPosition=by;
        fBegin=0;
    }
    else
       cout<<"\n utrata ruchu, chciales sie ruszyc o "<<fabs(bx-fBegin->xPosition+by-fBegin->yPosition)<<" majac movement =="<<fBegin->movement<<endl;
}
void horseman::attackV(unit *&attacking, unit *&reciving)
{
    if (attacking->nickname==reciving->nickname) cout<<endl<<"--------nie mozna zaatakowac wlasnej jednostki -----------"<<endl;
    else if (reciving->totalHP==0)
    {
        cout<<endl<<"------Przeciwnik juz jest martwy"<<endl;
    }
    else if (fabs((reciving->xPosition-attacking->xPosition+reciving->yPosition-attacking->yPosition))<=attacking->distance)
    {reciving->totalHP=reciving->totalHP-attacking->totalDMG;
    cout<<endl<<attacking->name<<attacking->nickname<<" -> zaatakowal za   "<<attacking->totalDMG<<" ->"<<reciving->name<<reciving->nickname<<endl<<endl;
    }
    else
        cout<<"\n utrata ataku, bo odleglosc "<<fabs(reciving->xPosition-attacking->xPosition+reciving->yPosition-attacking->yPosition)<<" wieksza niz zacieg =="<<attacking->distance<<endl;
}
//------------------------------------------------   horseman  ------------------------------------------------//

//------------------------------------------------   archer  ------------------------------------------------//
archer::archer()
{
    name="Lucznik";
    damage=13;
    distance=10;
    health=50;
    movement=4;
    amount=24;
    totalHP=health*amount;
    totalDMG=damage*amount;
    xPosition=3;
    yPosition=0;
}
void archer::ruchV(unit*&fBegin, unit*&fEnd, int bx, int by)
{
    if (fabs((bx-fBegin->xPosition+by-fBegin->yPosition))<=fBegin->movement)
    {
        cout<<"\n \t\t ruch z ["<<fBegin->xPosition<<"]"<<"["<<fBegin->yPosition<<"]  na ["<<bx<<"]"<<"["<<by<<"]"<<endl;
        fEnd=fBegin;
        fEnd->xPosition=bx;
        fEnd->yPosition=by;
        fBegin=0;
    }
    else
       cout<<"\n utrata ruchu, chciales sie ruszyc o "<<fabs(bx-fBegin->xPosition+by-fBegin->yPosition)<<" majac movement =="<<fBegin->movement<<endl;
}
void archer::attackV(unit *&attacking, unit *&reciving)
{
    if (attacking->nickname==reciving->nickname) cout<<endl<<"--------nie mozna zaatakowac wlasnej jednostki -----------"<<endl;
    else if (reciving->totalHP==0)
    {
        cout<<endl<<"------Przeciwnik juz jest martwy"<<endl;
    }
    else if (fabs((reciving->xPosition-attacking->xPosition+reciving->yPosition-attacking->yPosition))<=attacking->distance)
    {reciving->totalHP=reciving->totalHP-attacking->totalDMG;
    cout<<endl<<attacking->name<<attacking->nickname<<" -> zaatakowal za   "<<attacking->totalDMG<<" ->"<<reciving->name<<reciving->nickname<<endl<<endl;
    }
    else
        cout<<"\n utrata ataku, bo odleglosc "<<fabs(reciving->xPosition-attacking->xPosition+reciving->yPosition-attacking->yPosition)<<" wieksza niz zacieg =="<<attacking->distance<<endl;
}
//------------------------------------------------   archer  ------------------------------------------------//

//------------------------------------------------   game  ------------------------------------------------//
void game::stworz()
{
    int i=0;
    int j=0;
    int k=0;
    vector<unit*> Player;
    vector<vector<unit*> > Field(N, vector<unit*>(N));

    Player.push_back(new warrior());    // Player_1[0]  = = WARRIOR
    Player.push_back(new mage());       // Player_1[1]  = = MAGE
    Player.push_back(new horseman());   // Player_1[2]  = = HORSEMAN
    Player.push_back(new archer());     // Player_1[3]  = = ARCHER

    for(i=0;i<4;i++)
        Field[i][0]=Player[i];

    Player.push_back(new warrior());    // Player_1[4]  = = WARRIOR
    Player.push_back(new mage());       // Player_1[5]  = = MAGE
    Player.push_back(new horseman());   // Player_1[5]  = = HORSEMAN
    Player.push_back(new archer());     // Player_1[6]  = = ARCHER
    for(i=4;i<8;i++)
        {   Player[i]->yPosition=5;
            Field[i-4][5]=Player[i];}

    for(i=0;i<Player.size();i++)
    {
        if(i>=4)
            Player[i]->nickname="Gracz_2";
        else
            Player[i]->nickname="Gracz_1";
        Player[i]->info();
        cout<<"\n \t\ti == "<<i<<endl;
    }

    //Player[2]->move(5,5);
    Player[0]->info();
    attack(Player[7],Player[0]);
    Player[0]->info();

    for (j=0;j<N;j++)
    {
        for (k=0;k<N;k++)
        {
         if (Field[k][j]==0)
            cout<<"  0  ";
        else if (Field[k][j]==Player[0])
            cout<<"  W1 ";
        else if (Field[k][j]==Player[1])
            cout<<"  M1 ";
        else if (Field[k][j]==Player[2])
            cout<<"  H1 ";
        else if (Field[k][j]==Player[3])
            cout<<"  A1 ";
        else if (Field[k][j]==Player[4])
            cout<<"  W2 ";
        else if (Field[k][j]==Player[5])
            cout<<"  M2 ";
        else if (Field[k][j]==Player[6])
            cout<<"  H2 ";
        else if (Field[k][j]==Player[7])
            cout<<"  A2 ";
        }
        cout<<endl;
    }

    int ax,ay,bx,by;
    for (i=0;i<9;i++)
    {//---------- akcja gry ---------
        if (i==8)
            i=0;
        ax=Player[i]->xPosition;
        ay=Player[i]->yPosition;
        Player[i]->info();
        if(Player[i]->totalHP==0)
        {
            cout<<"martwa jednostka"<<Player[i]->name<<Player[i]->nickname<<endl;
            i++;
            Player[i]->info();
        }
        cout<<endl<<Player[i]->name<<Player[i]->nickname<<"\n Gdzie [x][y]_"<<i<<" : ";
        cin>>bx>>by;

        if (Field[bx][by]==0)
            Field[ax][ay]->ruchV(Field[ax][ay],Field[bx][by],bx,by); // to ruch, lecz na metodzie virtualnej
            //ruch(Field[ax][ay],Field[bx][by],bx,by);
        else
        {if (Field[ax][ay]==Player[5]||Field[ax][ay]==Player[1])
            {if (Field[ax][ay-1]!=0)
                cout<<endl<<"\t ! \t mag otoczony - brak ataku !"<<endl;
            }
        else
            Field[ax][ay]->attackV(Field[ax][ay],Field[bx][by]); // to atak, lecz na metodzie virtualnej
            //attack(Field[ax][ay],Field[bx][by]);
        }


        if (Field[bx][by]==0)
            Field[ax][ay]->info();
        else
            Field[bx][by]->info();

     for (j=0;j<N;j++)
        {
            for (k=0;k<N;k++)
            {
            if (Field[k][j]==0)
                cout<<"  0  ";
            else if (Field[k][j]==Player[0])
                cout<<"  W1 ";
            else if (Field[k][j]==Player[1])
                cout<<"  M1 ";
            else if (Field[k][j]==Player[2])
                cout<<"  H1 ";
            else if (Field[k][j]==Player[3])
                cout<<"  A1 ";
            else if (Field[k][j]==Player[4])
                cout<<"  W2 ";
            else if (Field[k][j]==Player[5])
                cout<<"  M2 ";
            else if (Field[k][j]==Player[6])
                cout<<"  H2 ";
            else if (Field[k][j]==Player[7])
                cout<<"  A2 ";
            }
            cout<<endl;
        }
    }//---------- akcja gry ---------
}
game::game()
{
    cout <<"-----------------------------poczatek gry-------------------------";
}
void game::ruch(unit*&fBegin, unit*&fEnd, int bx, int by)
{
    if (fabs((bx-fBegin->xPosition+by-fBegin->yPosition))<=fBegin->movement)
    {
        cout<<"\n \t\t ruch z ["<<fBegin->xPosition<<"]"<<"["<<fBegin->yPosition<<"]  na ["<<bx<<"]"<<"["<<by<<"]"<<endl;
        fEnd=fBegin;
        fEnd->xPosition=bx;
        fEnd->yPosition=by;
        fBegin=0;
    }
    else
       cout<<"\n utrata ruchu, chciales sie ruszyc o "<<fabs(bx-fBegin->xPosition+by-fBegin->yPosition)<<" majac movement =="<<fBegin->movement<<endl;
}
void game::attack(unit *&attacking, unit *&reciving)
{
    if (fabs((reciving->xPosition-attacking->xPosition+reciving->yPosition-attacking->yPosition))<=attacking->distance)
    {reciving->totalHP=reciving->totalHP-attacking->totalDMG;
    cout<<endl<<attacking->name<<attacking->nickname<<" -> zaatakowal za   "<<attacking->totalDMG<<" ->"<<reciving->name<<reciving->nickname<<endl<<endl;
    }
    else
        cout<<"\n utrata ataku, bo odleglosc "<<fabs(reciving->xPosition-attacking->xPosition+reciving->yPosition-attacking->yPosition)<<" wieksza niz zacieg =="<<attacking->distance<<endl;
}
//------------------------------------------------   game  ------------------------------------------------//

#endif unit_cpp
