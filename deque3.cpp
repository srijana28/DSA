#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    deque<int> dq={10,20,30,5,12};
    auto it=dq.begin();
    it++;
    dq.insert(it,20);
    dq.pop_front();
    dq.pop_back();
    cout<<dq.size();
    return 0;
}
