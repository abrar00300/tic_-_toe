#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int check(char [][3]);
using namespace std;
int main()
{
        for(int m=0;m<100;m++)
            cout<<"#";
        cout<<endl<<"\t\t\tWelcome to Tic & Toe Game\n";
         for(int m=0;m<100;m++)
            cout<<"#";
    while(1)
    {
         int i,j,e,flag=0,ar[9]={0},q=0,cnt=0;
         char c;
         srand(time(0));
        char s[2]={'O','X'};
        char a[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
        cout<<"\n\n\n1.play with computer \n2.play with player \n3.exit\n";
        c=getch();
        int z=c-'0';
        switch(z)
        {
        case 1:
            {
                while(1)
                {
                        system("cls");
                         for(int m=0;m<100;m++)
                        cout<<"#";
                        cout<<"\n\n Computer : X\n Player :   O\n";
                        for(i=0;i<3;i++)
                        {
                            cout<<"           |           |           \n";
                            for(j=0;j<3;j++)
                            {
                                if(j==2)
                                cout<<"    "<<a[i][j]<<"      ";
                                else
                                cout<<"     "<<a[i][j]<<"     |";
                            }
                            cout<<"\n___________|___________|__________\n";
                        }
                        cout<<"\n\n\n";
                        for(int a=1;a<100;a++)
                            cout<<"#";
                        if(cnt>4)
                        {
                            int g=0;
                            g=check(a);
                            if(g==1){
                                if(cnt%2==0){
                                    cout<<"\n\n---- CONGRATULATIONS You'O' Won -----";
                                    break;}
                                else{
                                    cout<<"\n\n----   Computer 'X' Won _ Better Luck Next Time -----";
                                    break;
                                }
                            }
                        }
                        if(cnt==9)
                        {
                            cout<<"\n DRAW";
                            break;
                        }
                        if(flag==0)
                        {
                             flag=1;
                             cnt++;
                                        while(1)
                                          {
                                            int e,pp=0;
                                                e=rand()%10;
                                           if(e<4)
                                           {
                                               if(a[0][e-1]==' ')
                                               {
                                                   pp++;
                                                        a[0][e-1]=s[1];
                                               }
                                           }
                                           else if(e>3 && e<7)
                                           {
                                               if(a[1][e-4]==' ')
                                               {
                                                   pp++;
                                                        a[1][e-4]=s[1];
                                               }
                                           }
                                           else if(e>6 && e<10)
                                           {
                                               if(a[2][e-7]==' ')
                                               {
                                                   pp++;
                                                        a[2][e-7]=s[1];
                                               }
                                           }
                                            if(pp!=0)
                                                break;
                                        }
                                         if(flag==0)
                                                cnt--;
                        }
                        else if(flag==1)
                        {
                            cnt++;
                            flag=0;
                            char u;
                            cout<<endl<<"Player Turn\n";
                            u=getch();
                            int e=u-'0';
                            if(e>9)
                            {
                                cout<<"Invalid";
                                flag=1;
                            }
                            else if(e>0 && e<4)
                            {
                                if(a[0][e-1]==' ')
                                    a[0][e-1]=s[0];
                                 else
                                    flag=1;
                            }
                            else if(e>3 && e<7)
                            {
                                if(a[1][e-4]==' ')
                                    a[1][e-4]=s[0];
                                 else
                                    flag=1;
                            }
                            else if(e>6 && e<10)
                            {
                                if(a[2][e-7]==' ')
                                    a[2][e-7]=s[0];
                                else
                                    flag=1;
                            }
                            if(flag==1)
                                cnt--;
                        }
                    }
                break;
            }
        case 2:
            {
            while(1){
                system("cls");
                 for(int m=0;m<100;m++)
                    cout<<"#";
                cout<<"\n\n First Player : X\nSecond Player : O\n";
                for(i=0;i<3;i++)
                {
                    cout<<"           |           |           \n";
                    for(j=0;j<3;j++)
                    {
                        if(j==2)
                        cout<<"    "<<a[i][j]<<"      ";
                        else
                        cout<<"     "<<a[i][j]<<"     |";
                    }
                    cout<<"\n___________|___________|__________\n";
                }
                cout<<"\n\n\n";
                for(int a=1;a<100;a++)
                    cout<<"#";
                if(cnt>4)
                {
                    int g=0;
                    g=check(a);
                    if(g==1){
                        if(cnt%2==0){
                            cout<<"\n\n---- CONGRATULATIONS Second Player 'O' Won -----";
                            break;}
                        else{
                            cout<<"\n\n---- CONGRATULATIONS First Player 'X' Won -----";
                            break;
                        }
                    }
                }
                if(cnt==9)
                {
                    cout<<"\n DRAW ";
                    break;
                }
                if(flag==0)
                {
                    cnt++;
                    flag=1;
                            char u;
                            cout<<"\n first player turn \n";
                            u=getch();
                            int e=u-'0';
                            if(e>9)
                            {
                                cout<<"Ivalid move";
                                cnt--;
                                flag=0;
                            }
                            if(e>0&&e<4){
                                if(a[0][e-1]==' ')
                                    a[0][e-1]=s[flag];
                                 else{
                                        flag=0;
                                    }
                            }
                            else if(e>3 && e<7)
                            {
                                if(e==4)
                                {
                                    if(a[1][0]==' ')
                                        a[1][0]=s[flag];
                                    else{
                                        flag=0;
                                    }
                                }
                                else if(e==5)
                                {
                                     if(a[1][1]==' ')
                                    a[1][1]=s[flag];
                                    else{
                                        flag=0;
                                    }
                                }
                                else
                                {
                                     if(a[1][2]==' ')
                                    a[1][2]=s[flag];
                                    else{
                                        flag=0;
                                    }
                                }
                            }
                            else if(e>6&&e<10)
                            {
                                if(e==7){
                                     if(a[2][0]==' ')
                                    a[2][0]=s[flag];
                                    else{
                                        flag=0;
                                    }
                                }
                                else if(e==8){
                                     if(a[2][1]==' ')
                                    a[2][1]=s[flag];
                                else{
                                        flag=0;
                                    }
                                }
                                else{
                                     if(a[2][2]==' ')
                                    a[2][2]=s[flag];
                                else{
                                        flag=0;
                                    }
                                }
                            }
                        if(flag==0)
                                cnt--;
                }
                else if(flag==1)
                {
                    cnt++;
                    flag=0;
                    char u;
                    cout<<"\n second player turn \n";
                    u=getch();
                    int e=u-'0';
                         if(e>9)
                            {
                                cout<<"Ivalid move";
                                cnt--;
                                flag=1;
                            }
                            if(e>0&&e<4){
                                if(a[0][e-1]==' ')
                                a[0][e-1]=s[flag];
                             else{
                                        flag=1;
                                    }
                            }
                            else if(e>3 && e<7)
                            {
                                if(e==4)
                                {
                                    if(a[1][0]==' ')
                                        a[1][0]=s[flag];
                                    else{
                                        flag=1;
                                    }
                                }
                                else if(e==5)
                                {
                                     if(a[1][1]==' ')
                                        a[1][1]=s[flag];
                                     else{
                                        flag=1;
                                    }
                                }
                                else
                                {
                                     if(a[1][2]==' ')
                                    a[1][2]=s[flag];
                                 else{
                                        flag=1;
                                    }
                                }
                            }
                            else if(e>6&&e<10)
                            {
                                if(e==7){
                                     if(a[2][0]==' ')
                                    a[2][0]=s[flag];
                                 else{
                                        flag=1;
                                    }
                            }
                                else if(e==8){
                                     if(a[2][1]==' ')
                                    a[2][1]=s[flag];
                                     else{
                                        flag=1;
                                    }
                                }
                                else{
                                     if(a[2][2]==' ')
                                    a[2][2]=s[flag];
                                     else{
                                        flag=1;
                                    }
                                }
                            }
                            if(flag==1)
                                cnt--;
                    }
            }
                break;
            }
        case 3:
            {
                exit(0);
            }
        default:
            {
                cout<<"\r";
            }
        }
    }
    return 0;
}
int check(char a[3][3])
{
    int k=0;
    for(int i=0;i<3;i++)
    {
        if(a[i][k]=='X' && a[i][k+1]=='X' && a[i][k+2]=='X')
            return 1;
       else if(a[k][i]=='X' && a[k+1][i]=='X' && a[k+2][i]=='X')
            return 1;
       else if(a[k][k]=='X' && a[k+1][k+1]=='X' && a[k+2][k+2]=='X')
            return 1;
         else if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
            return 1;
    }
    for(int i=0;i<3;i++)
    {
        if(a[i][k]=='O' && a[i][k+1]=='O' && a[i][k+2]=='O')
            return 1;
       else if(a[k][i]=='O' && a[k+1][i]=='O' && a[k+2][i]=='O')
            return 1;
       else if(a[k][k]=='O' && a[k+1][k+1]=='O' && a[k+2][k+2]=='O')
            return 1;
        else if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')
            return 1;
    }
    return 0;
}
