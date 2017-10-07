#include<iostream>
 
using namespace std;
 
int main()
{
    int n,h;
    cin>>n>>h;
    int stack[n];
    for(int i=0;i<n;++i)
        cin>>stack[i];
    int com,crane=0,loaded=0;
    do
    {
        cin>>com;
        switch(com)
        {
            case 1: if(crane != 0) crane--;break;
            case 2: if(crane != (n-1)) crane++;break;
            case 3: if(loaded == 0 && stack[crane] != 0){stack[crane]--; loaded = 1;}break;
            case 4: if(loaded == 1 && stack[crane] != (h)){stack[crane]++; loaded = 0;}break;
        }
    }while(com!=0);
    for(int i=0; i<n;++i)
    {
        cout<<stack[i]<<" ";
    }
}
