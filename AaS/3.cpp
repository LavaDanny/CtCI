#include <iostream>

using namespace std;

// Method to replace all spaces in a string with '%20'

int main(int argc, char * argv[]){

    string str1 = "Mr John Smith    ";
    string str2 = "                                    ";

    int strSize = str1.size();

    int charCount = 0;
    for(int i = 0 ; i < strSize; i++){
        if(str1[i] != 32){
            charCount++;
        }
    }



    int j = 0;
    for(int i = 0 ; i < strSize; i++){
        if(int(str1[i] != 32)){
            str2[j] = str1[i];
            j++;
            charCount--;
        }
        else if(charCount != 0){

            str2[j] = '%';
            j++;
            str2[j] = '2';
            j++;
            str2[j] = '0';
            j++;

        }
    }

    cout << str2;
}