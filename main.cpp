#include <iostream>

using namespace std;

int main()
{int n,uc,S;
    cout<<"Introduceti numarul:";
    cin>>n;
    S=0;
    while(n>0)
    {
        uc=n%10;
        if(uc%2==0)
        {
            S=S+1;
        }
        n=n/10;
    }
    cout<<endl<<endl<<"Rezultatul este:"<<S<<endl;
    return 0;
}

