#include<bits/stdc++.h>
using namespace std;

namespace first{
int val =6;
void printing(){
cout<<"By Using First namespace: "<< val<<endl;
}}
namespace second{
int val =3;
void printing(){
cout<<"By Using second namespace :"<<val<<endl;
}

}
int main(){
using namespace first ;
first::printing();
using namespace second ;
//cout<<val<<endl;
second::printing();

}
