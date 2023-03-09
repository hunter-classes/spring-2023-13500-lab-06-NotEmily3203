#include <iostream>
#include <cctype>
#include "vigenere.h"
char shift2(char c, int rshift){
    int ascii = int(c) + rshift;
    return ascii;
}
std::string encryptVigenere(std::string plaintext, std::string keyword){
    std::string encrypt;
    const int klength = keyword.length();
    int shift[klength];
    for(int i = 0; i < klength; i++){
        shift[i] = int(keyword[i]-97);
    }
    int plength = plaintext.length();
    int index=0;
    for(int j = 0; j < plength; j++){ 
        if(isalpha(plaintext[j])){
            //int index = 0;
            if(index>=klength){
                do{
                    index-=klength;
                }while(index>=klength);
            }
            if(int(plaintext[j])>=65 && int(plaintext[j])<=90){
                if(int(plaintext[j])+shift[index] > 90){
                    plaintext[j] = shift2(plaintext[j], -26);
                }
            }else if(int(plaintext[j])>=97 && int(plaintext[j])<=122){
                if(int(plaintext[j])+shift[index] > 122){
                    plaintext[j] = shift2(plaintext[j], -26);
                }
            }
        encrypt+=shift2(plaintext[j], shift[index]);
        index++;
        }else{
            encrypt+=plaintext[j];
        }
    }
    return encrypt;
}