#include <iostream>

using namespace std;
class Forest{
public:
int Trees;
float Plant(int a){
if((Trees + a) > 200){
    cout<<"Ошибка\n";
    return Trees;
} else{
    return Trees =Trees + a;
}
}
float Cut(int a){
    if((Trees - a) < 0){
    cout<<"Ошибка\n";
    return Trees;
} else{
    return Trees =Trees - a;
}
}
Forest (int a){
Trees = a;

}
};
int main()
{
    Forest les(100);
cout << "1)" << les.Trees << "\n";
 les.Plant(50);
cout << "2)" << les.Trees << "\n";
 les.Cut(20);
cout << "3)" <<les.Trees << "\n";

    return 0;
}
