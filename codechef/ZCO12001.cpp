//written by nirajx1d

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=1,x_len=0,xlen=0,prev=0,depth=0,depth_pos;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            s.push(a[i]);
            if(s.size()>depth)
            {
                depth=s.size();
                depth_pos=i+1;
            }
            //flag=1;
        }
        else
        {
            s.pop();
            //flag=2;
            //one=0;
            if(s.empty())
            {
                xlen=i-prev+1;
                if(xlen>x_len)
                {
                    x_len=xlen;
                    x=i+2-x_len;
                }
                prev=i+1;
            }
        }
    }
    cout<<depth<<" "<<depth_pos<<" "<<x_len<<" "<<x<<endl;
    return 0;
}
