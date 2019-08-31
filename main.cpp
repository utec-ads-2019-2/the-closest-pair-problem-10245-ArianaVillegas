#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void minDistance(double *arr, int num){
    double actual;
    double min=pow(arr[2]-arr[0],2)+pow(arr[3]-arr[1],2);
    for(int i=0; i<num-2; i+=2){
        for(int j = i+2; j < num; j+=2) {
            actual=pow(arr[i]-arr[j],2)+pow(arr[i+1]-arr[j+1],2);
            if(actual<min){
                min=actual;
            }
        }
    }
    double min1=pow(min,0.5);
    if(min1<10000.0) cout << fixed << setprecision(4) << min1 << '\n';
    else cout << "INFINITY" << '\n';
}

int main() {
    int num;
    while (scanf("%d",&num)==1 && num>0){
        double arr[num*2];
        for (int i = 0; i < num*2; i++) {
            cin >> arr[i];
        }
        if(num>1) minDistance(arr, num*2);
        else cout << "INFINITY" << '\n';
    }

    return 0;
}