#include<iostream>
using namespace std;
int main ()
{
char A;
cout<<"Enter Character";
cin>> A;
if(((A>='a')&&(A<='z'))||((A>='A')&&(A<='Z'))||((A>='0')&&(A<='9')))
cout << "It is  not special character"<<endl;
else
cout << "It is special character"<<endl;
}
