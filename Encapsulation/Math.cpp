#include<bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Math{
    public:
    static int abs(int x);
    static int add(int x,int y);
    static int subtract(int x,int y);
    static int min(int x,int y);
    static int max(int x,int y);
    static int pow(int x,int y);
};
int Math::abs(int x){
    return (x>0)? x:-x;
}
int Math::add(int x,int y){
    return x+y;
}
int Math::subtract(int x,int y){
    return x-y;
}
int Math::min(int x,int y){
    return x<y ? x:y;
}
int Math::max(int x,int y){
    return x>y ? x:y;
}
int Math::pow(int x,int y){
    int k=1;
    For(i,0,y) k*=x;
    return k;
}