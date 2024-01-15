#include<bits/stdc++.h>

using namespace std;

int GCD(int a,int b)
{
    int r;

    while(b!=0){
        if(r==0){
            return b;
        }

        else{
            r=a%b;
            a=b;
            b=r;
            GCD(a,b);
        }
    }
}

int main()
{
    int a,b;

    cin>>a>>b;

    cout<<GCD(a,b)<<endl;


}
