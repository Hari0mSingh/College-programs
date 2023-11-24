#include<iostream>
using namespace std;
class person{
private:
string name;
string nationality;
public:
person(string a,string b){
name=a;
nationality=b;
cout<<"Your name is "<<name<<" and your nationality is "<<nationality<<endl;//Name and Nationality
}
person(string c){
string sur;
sur = c;
cout<<"and Your surname is "<<sur;//Surname
}
};
int main(){
person p1("Hariom","India");
person p2("Singh");
return 0;
}
