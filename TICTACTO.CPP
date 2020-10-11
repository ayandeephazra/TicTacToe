#include<iostream.h>
#include<conio.h>
#include<process.h>

int wincount=0;
int losecount=0;
int gnum=0;

class ttt
{
private:

char game[3][3];

public:

int mndc,mjdc,hc,vc,breakv,breaku;

ttt()
{
mndc=0;
mjdc=0;
hc=0;
vc=0;
breakv=0;
breaku=0;
}

void clearbox();

void win();

void lose();

void display();

void cfx();

void hso();

void hfx();

void cso();

void compfirst();

void humanfirst();

void checkhx();

void checkho();

void checkcx();

void checkco();
};

void ttt::win()
{
cout<<"\nWinner\n\n";
breakv=1;
}

void ttt::lose()
{
cout<<"\nLoser\n\n";
breaku=1;
}

void ttt::clearbox()
{

for(int i=0; i<3; i++)
{

for(int j=0; j<3; j++)
game[i][j]='_';
}

}

void ttt::checkcx()
{
int j,i;
mjdc=0;
for(i=0;i<3; i++)
{
if((game[i][i]=='x'))
mjdc++;
}

if(mjdc==3)
{lose();
return;
}
mndc=0;
for(i=0,j=2; i<3,j>=0; i++,j--)
{
if((game[i][j]=='x')&&(game[i][j]!='_'))
{mndc++;
}
}
if(mndc==3)
{lose();
return;
}


for( i=0; i<3; i++)
{
hc=0;
for(j=0; j<3; j++)
{
if((game[i][j]=='x')&&(game[i][j]!='_'))
hc++;
}
if(hc==3)
{lose();
return;
}


}


for(j=0; j<3; j++)
{
vc=0;
for( i=0; i<3; i++)
{
if((game[i][j]=='x')&&(game[i][j]!='_'))
vc++;
}
if(vc==3)
{lose();
return;
}

}

}


void ttt::checkhx()
{
int j,i;
mjdc=0;
for(i=0;i<3; i++)
{
if((game[i][i]=='x'))
mjdc++;
}

if(mjdc==3)
{win();
return;
}
mndc=0;
for(i=0,j=2; i<3,j>=0; i++,j--)
{
if((game[i][j]=='x')&&(game[i][j]!='_'))
{mndc++;
}
}
if(mndc==3)
{win();
return;
}


for( i=0; i<3; i++)
{
hc=0;
for(j=0; j<3; j++)
{
if((game[i][j]=='x')&&(game[i][j]!='_'))
hc++;
}
if(hc==3)
{win();
return;
}


}


for(j=0; j<3; j++)
{
vc=0;
for( i=0; i<3; i++)
{
if((game[i][j]=='x')&&(game[i][j]!='_'))
vc++;
}
if(vc==3)
{win();
return;
}

}

}

void ttt::checkco()
{
int j,i;
mjdc=0;
for(i=0;i<3; i++)
{
if((game[i][i]=='o'))
mjdc++;
}

if(mjdc==3)
{lose();
return;
}
mndc=0;
for(i=0,j=2; i<3,j>=0; i++,j--)
{
if((game[i][j]=='o')&&(game[i][j]!='_'))
{mndc++;
}
}
if(mndc==3)
{lose();
return;
}


for( i=0; i<3; i++)
{
hc=0;
for(j=0; j<3; j++)
{
if((game[i][j]=='o')&&(game[i][j]!='_'))
hc++;
}
if(hc==3)
{lose();
return;
}


}


for(j=0; j<3; j++)
{
vc=0;
for( i=0; i<3; i++)
{
if((game[i][j]=='o')&&(game[i][j]!='_'))
vc++;
}
if(vc==3)
{lose();
return;
}

}

}


void ttt::checkho()
{
int j,i;
mjdc=0;
for(i=0;i<3; i++)
{
if((game[i][i]=='o'))
mjdc++;
}

if(mjdc==3)
{win();
return;
}
mndc=0;
for(i=0,j=2; i<3,j>=0; i++,j--)
{
if((game[i][j]=='o')&&(game[i][j]!='_'))
{mndc++;
}
}
if(mndc==3)
{win();
return;
}


for( i=0; i<3; i++)
{
hc=0;
for(j=0; j<3; j++)
{
if((game[i][j]=='o')&&(game[i][j]!='_'))
hc++;
}
if(hc==3)
{win();
return;
}

}

for(j=0; j<3; j++)
{
vc=0;
for( i=0; i<3; i++)
{
if((game[i][j]=='o')&&(game[i][j]!='_'))
vc++;
}
if(vc==3)
{win();
return;
}

}

}

void ttt::display()
{

for(int i=0; i<3; i++)

{
for(int j=0; j<3; j++)
{
cout<<game[i][j]<<"\t";
}

cout<<"\n\n\n";
}
}



void ttt::cfx()
{
for(int i=0; i<3; i++)
{
for(int j=0; j<3; j++)
{
if((game[i][j]=='x')||(game[i][j]=='o'))
{continue;
}
if((game[i][j]!='x')&&(game[i][j]!='o'))
{if((i==1)&&(j==1))
{game[i][j]='x';}
if((i%2==0)&&(j%2==0))
{game[i][j]='x';}
else
{game[i][j]='x';}
}
return;
}
//
}
//
}

void ttt::hso()
{
int a,b;
cout<<"\nEnter coordinates => i,j\n";
cin>>a>>b;
if((a<3)&&(b<3)&&(game[a][b]!='o')&&(game[a][b]!='x'))
game[a][b]='o';
else
{
cout<<"Taken/Invalid\n";
hso();
}

}


void ttt::hfx()
{
int a,b;
cout<<"\nEnter coordinates i,j\n";
cin>>a>>b;
if((a<3)&&(b<3)&&((game[a][b]!='o')||(game[a][b]!='x')))
game[a][b]='x';
else
{
cout<<"Taken/Invalid\n";
hfx();
}
}

void ttt::cso()
{
for(int i=0; i<3; i++)
for(int j=0; j<3; j++)
{
if((game[i][j]=='o')||(game[i][j]=='x'))
continue;
if((game[i][j]!='o')&&(game[i][j]!='x'))
{
if((i==1)&&(j==1))
{game[i][j]='o';}
if((i%2==0)&&(j%2==0))
{game[i][j]='o';}
else
{game[i][j]='o';}
}
return;
}

}


void ttt::compfirst()
{
clearbox();
for(int i=0; i<9, breakv!=1, breaku!=2;i++)
{
if(i%2==0)
{cfx();}
if(i%2==1)
{hso();}
cout<<"\n";
display();
cout<<"\n";
checkho();
if(breakv==1)
{wincount++;
return;}
checkcx();
if(breaku==1)
{losecount++;
return;}
}

if(i==8)
{
if((mndc!=3)||(mjdc!=3)||(hc!=3)||(vc!=3))
{cout<<"Draw";
return;
}
}
}

void ttt::humanfirst()
{
clearbox();
for(int i=0; i<9, breakv!=1, breaku!=1;i++)
{
if(i%2==0)
{hfx();
}
if(i%2==1)
{cso();
}
cout<<"\n";
display();
cout<<"\n";
checkhx();
if(breakv==1)
{wincount++;
return;}
checkco();
if(breaku==2)
{losecount++;
return;}
}
if(i==8)
{
if((mndc!=3)||(mjdc!=3)||(hc!=3)||(vc!=3))
{lose();
return;
}
}
}

ttt g[100];

void rules()
{
long int ch;
cout<<"There are 9 blanks and each can be filled with either x or o."<<endl;
cout<<"There are two rounds, one where the player starts and one "<<endl;
cout<<"where the computer starts."<<endl;
cout<<"These take place alternately starting with the round of"<<endl;
cout<<"the human player initially."<<endl<<endl;
cout<<"                             LAY-OUT              "<<endl<<endl;
cout<<"                       _        _        _"<<endl;
cout<<"                      (0,0)    (0,1)    (0,2)"<<endl<<endl<<endl;
cout<<"                       _        _        _"<<endl;
cout<<"                      (1,0)    (1,1)    (1,2)"<<endl<<endl<<endl;
cout<<"                       _        _        _"<<endl;
cout<<"                      (2,0)    (2,1)    (2,2)"<<endl<<endl<<endl;
cout<<"Continue? Positive Number for yes, Negative Number for exit.";
cin>>ch;

if((ch<=2147483647)&&(ch>=0))
{clrscr();
return;
}
else
exit(0);
}

void record()
{
cout<<"\nNumber of Games Played :"<<gnum+1;
cout<<"\nNumber of Wins :"<<wincount;
cout<<"\nNumber of Loses :"<<losecount;
}

void main()
{
clrscr();

cout<<"WELCOME TO THE TIC TAC TOE GAME"<<endl;
cout<<"ENJOY"<<endl<<endl;
rules();

int ch;

do
{
cout<<endl<<"Game: "<<gnum+1<<endl;

if(gnum%2==0)
{g[gnum].humanfirst();
}
if(gnum%2==1)
{g[gnum].compfirst();
}

cout<<"Continue? 1 for exit , 2 for continue, 3 for Record"<<endl;
cin>>ch;

if(ch==3)
record();

cout<<"\n\nContinue? 1 for exit , 2 for continue"<<endl;
cin>>ch;

if(ch==1)
exit(0);

gnum++;

}while(ch==2, gnum<100);

getch();
}