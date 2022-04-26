#include <iostream>
#include <string>

using namespace std ;

float abc(float a)
{
int i=0;
string z[26]={
"a", "b", "c", "d", "e", "f", "g", "h", "i",
"j", "k", "l", "m", "n", "o", "p", "q", "r",
"s", "t", "u", "v", "w", "x", "y", "z"
};
for (i;i<a;i++){
cout<<z[i]<<"\n";
}

return a;
}

int main ()
{
float n;
cin>>n;
if (n>25){
cout<<"Ошибка" << "\n";
} else {
abc(n);
}
}
