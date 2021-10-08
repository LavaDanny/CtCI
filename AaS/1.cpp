#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>
using namespace std;

int main(int argc, char * argv[])
{
    vector<char> vec;

    string str = argv[1];
    int strSize = str.size();

    for(int i = 0; i < strSize; i++){
        if (find(vec.begin(), vec.end(), str[i]) == vec.end()){
            vec.push_back(str[i]);
        }
        else{
            cout << "not all unique";
            return 0;
        }
    }

    cout << "all unique";
    return 0;



}