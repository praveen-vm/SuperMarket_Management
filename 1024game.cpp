#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
void start();
void create();
void print(int [][4]);

void cals(int v [][4])
{
    int i,k,j,f=3;
    for(i=0;i<4;i++)
    {
       
    int z=-1,s=-1;
    for(j=3;j>=0;j--)
    {
        if(v[j][i]==0&&z==-1)z=j;
        if(v[j][i]!=0&&s==-1&&z!=-1)s=j;
        if(z>s)
        if(z!=-1&&s!=-1&&z>s)
        {
            v[z][i]=v[s][i];
            v[s][i]=0;
            j=z;
            z=-1;
            s=-1;
            
        }
    }
     for(j=3;j>0;j--)
    {
        if(v[j][i]==0)break;
        if(v[j][i]==v[j-1][i])
        {
            v[j][i]= v[j][i]+v[j][i];
            v[j-1][i]=0;
            k=j;
            while(k--)
            {
                v[k][i]=v[k-1][i];
            }
           
        }
            v[0][i]=0;
        
    
    }}
}
void calw(int v [][4])
{
    int i,k,j,fl=3;
    for(i=0;i<4;i++)
    {
       
    int z=-1,s=-1;
    for(j=0;j<4;j++)
    {
        if(v[j][i]==0&&z==-1)z=j;
        if(v[j][i]!=0&&s==-1&&z!=-1)s=j;
        if(z!=-1&&s!=-1&&z<s)
        {
            v[z][i]=v[s][i];
            v[s][i]=0;
           j=z;
           z=-1;
            s=-1;
            
        }
    }
    for(j=0;j<3;j++)
    {
        if(v[j][i]!=0)
        if(v[j][i]==v[j+1][i])
        {
            v[j][i]= v[j][i]+v[j][i];
            v[j+1][i]=0;
            k=j+1;
            for(;k<3;k++)v[k][i]=v[k+1][i];
            v[3][i]=0;
        }
           
    
    }
    }
}
void cala(int v [][4])
{
    int i,k,j,fl=3;
    for(i=0;i<4;i++)
    {
       
    int z=-1,s=-1;
    for(j=0;j<4;j++)
    {
        if(v[i][j]==0&&z==-1)z=j;
        if(v[i][j]!=0&&s==-1&&z!=-1)s=j;
        if(z!=-1&&s!=-1&&z<s)
        {
            v[i][z]=v[i][s];
            v[i][s]=0;
           j=z;
           z=-1;
            s=-1;
            
        }
    }
    for(j=0;j<3;j++)
    {
        if(v[i][j]!=0)
        if(v[i][j]==v[i][j+1])
        {
            v[i][j]= v[i][j]+v[i][j];
            v[i][j+1]=0;
            k=j+1;
            for(;k<3;k++)v[i][k]=v[i][k+1];
            v[i][3]=0;
        }
           
    
    }
    }
}
void cald(int v [][4])
{
    int i,k,j,fl=3;
    for(i=0;i<4;i++)
    {
       
    int z=-1,s=-1;
    for(j=3;j>=0;j--)
    {
        if(v[i][j]==0&&z==-1)z=j;
        if(v[i][j]!=0&&s==-1&&z!=-1)s=j;
        if(z>s)
        if(z!=-1&&s!=-1&&z>s)
        {
            v[i][z]=v[i][s];
            v[i][s]=0;
            j=z;
            z=-1;
            s=-1;
            
        }
    }
   
    for(j=3;j>0;j--)
    {
        if(v[i][j]!=0)
        if(v[i][j]==v[i][j-1])
        {
            v[i][j]= v[i][j]+v[i][j];
            v[i][j-1]=0;
            k=j;
            while(k--)
            {
                v[i][k]=v[i][k-1];
            }
           v[i][0]=0;
        }
            
        
    }
    }
}
bool check(int v[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        
        for(j=0;j<4;j++)
        {
            if(v[i][j]==0){return true;}
        }
       
    }
    return false;
}
void create(int v[][4])
{
    srand(time(0));
    int i,j,k=3;
    

   while(k--)v[rand()%4][rand()%4]=2;
}
void print(int v[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        cout<<"| ";
        for(j=0;j<4;j++)
        {
            cout<<v[i][j]<<" "<<'|';
        }
        cout<<endl;
        cout<<"---------------"<<endl;
    }

}
void add(int v[][4],int c)
{
    srand(time(0));
    int i,j,k=3;
    while(1)
    {
        i=rand()%4;
        j=rand()%4;
        if(v[i][j]==0)
        {
                v[i][j]=pow(2,(c/5));
                break;
        }
    }
}
void ser(int v[][4],int &z, int &n)
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(v[i][j]==0)z++;
            if(v[i][j]==1024)n++;
            if(n)return;
        }
        

    }
}
void start()
{
    int v[4][4],c=15;
    memset(v,0,sizeof(v));
    create(v);
    print(v);
    
    while(1)
    {
        
        c++;
        string t="s";
        char p;
        cout<<"Enter a move \nw=top\na=left \ns=down\n d=right";
        cin>>p;
        t=p;
        if(t.size()!=1)
        {
            cout<<"enter a valid move ";
            continue;
        }
        switch(p)
        {
            case 's':cals(v);
            add(v,c);
            break;
            case 'w':calw(v);
            add(v,c);
            break;
            case 'a':cala(v);
            add(v,c);
            break;
            case 'd':cald(v);
            add(v,c);
            break;
            default:cout<<"Invalid Move";
            continue;
        }
        int z=0,n=0;
        ser(v,z,n);
        print(v);
        if(n){cout<<"\n-----------------WON THE GAME---------------------\n-------MOVES USED "<<c-7<<"--------------";break;}
        if(!z){cout<<"\n-----------------LOST THE GAME---------------------\n";break;}

    }
}

int main()
{
    start();
    return 0;
}