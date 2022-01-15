#include<bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class ArrayCalculator{
    public:
    static int sumOfArray(int *arr,int n){
        int x=0;
        For(i,0,n) x+=arr[i];
        return x;
    }
    static double sumOfArray(double *arr,int n){
        double x=0;
        For(i,0,n) x+=arr[i];
        return x;
    }
    static int maxOfArray(int *arr,int n){
        int max=arr[0];
        For(i,0,n)
        if(arr[i]>max) max=arr[i];
        return max;
    }
    static double maxOfArray(double *arr,int n){
        double max=arr[0];
        For(i,0,n)
        if(arr[i]>max) max=arr[i];
        return max;
    }
    static int minOfArray(int *arr,int n){
        int min=arr[0];
        For(i,0,n)
        if(arr[i]>min) min=arr[i];
        return min;
    }
    static double minOfArray(double *arr,int n){
        double min=arr[0];
        For(i,0,n)
        if(arr[i]>min) min=arr[i];
        return min;
    }
};
