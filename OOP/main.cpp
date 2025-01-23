#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    srand(int(time(NULL)));
    int x;
    cin>>x;
    int g = 1+rand()%15;
        while(x!=g){
            cout<<"NO. Want to continue ?"<<"\n";
            string d,y;
            cin>>d;
            y.resize(d.size());
            for(int i=0; i<d.size(); i++){
                y[i]=char(tolower(d[i]));
            }
            if(y=="yes"){
                int l;
                cin>>l;
                if(l==g){
                    cout<<"YOU WON!"<<endl;
                    break;
                }
            } else {
                break;
            }
        }
}
