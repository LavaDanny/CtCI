#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

// Given 2 strings, write a method to decide if one is a permutation of the other

int main(int argc, char * argv[]){
    string str1 = argv[1]; 
    string str2 = argv[2];

    int arr1[128] = {0};
    int arr2[128] = {0};

    for(int i = 0; i < str1.size(); i++){
        arr1[int(str1[i])]++;
    }

    for(int i = 0; i < str2.size(); i++){
        arr2[int(str2[i])]++;
    }    

    int indicator = 0;

    for(int i = 0; i < 128; i++){

        if(i >= 123 && i <= 96 && i <= 64 && i >= 91){
            if(arr1[i] != arr2[i]){
            indicator = 1;
            }
        }
        else if(i >= 65 && i <= 90){
            if(arr1[i] + arr1[i+32] != arr2[i] + arr2[i+32]){
                indicator = 1;
            }
        }
    }

    if(indicator){
        cout << "not a permutation";
        return 1;
    }
    else{
        cout << "permutation";
        return 1;
    }





}