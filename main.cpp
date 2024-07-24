// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v(5);
    for(int i =0;i < 5;i++)
    {
        cin>>v[i];
    }
    
    int sum = 0;
    for(int i =0;i < 5;i++)
    {
        sum += v[i];
    }
    
    cout<<sum/5.0;
    return 0;
}
