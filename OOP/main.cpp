#include <iostream>
#include <vector>
using namespace std;


int main() {
    int a;
    cin>>a;
    vector <int> vec;
    vector <int> vec1;
    int j=a,digit;
    while(j!=0){
        digit=j%10;
        j/=10;
        vec.push_back(digit);
    }
    for(int k=int(vec.size())-1; k>=0; k--){
        vec1.push_back(vec[k]);
    }
    int l=0;
    for(int i=0; i<vec.size(); i++){
        if(vec[i]==vec1[i]){
            l++;
        }
    }
    if(l==vec.size()){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}
