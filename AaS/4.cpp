#include <iostream>

using namespace std;

int main(int argc, char * argv[]){

    int charCount[128] = {0};

    string str = "tt";

    for(int i = 0; i < str.size(); i++){
        charCount[int(str[i])]++;
    }

    int single = 0;
    for(int i = 0; i < 128; i++){
        if(i != 32 && i < 65 && i > 90 && i < 97 && i > 122){
            if(charCount[i] == 1){
                if(single == 1){
                    cout << "false";
                    return 1;
                }
                else{
                    single = 1;
                }
            }
        }
        else if(i > 64 && i < 91){
            if(charCount[i] + charCount[i + 32] == 1){
                if(single == 1){
                    cout << "false";
                    return 1;
                }
                else{
                    single = 1;
                }
            }
        }
    }

    cout << "true";
    return 1;


}