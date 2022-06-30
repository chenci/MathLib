//
// Created by cc on 2022/6/30.
//

#include <iostream>

#include "Geometric2D.h"

using namespace std;


int main(){

    vector<int> start1(2,1);
    vector<int> end1(2,4);
    vector<int> start2(2,3);
    vector<int> end2(2,2);
    vector<double> v = Geometric2D::intersection(start1, end1, start2, end2);
    for(double i : v){
        cout << i << endl;
    }
    return 0;
}
