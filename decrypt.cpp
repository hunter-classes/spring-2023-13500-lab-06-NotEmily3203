#include <iostream>
#include "decrypt.h"

char deShift(char c, int rshift){
    int ascii = int(c) - rshift;
    return ascii;
}

std::string decryptCaesar(std::string ciphertext, int rshift){
    std::string old_str;
    int length = ciphertext.length();
    for(int i = 0; i<length; i++){
        if(isalpha(ciphertext[i])){
            if(int(ciphertext[i])>=65 && int(ciphertext[i])<=90){
                if(int(ciphertext[i])-rshift < 65){
                    ciphertext[i] = deShift(ciphertext[i], -26);
                }
            }else if(int(ciphertext[i])>=97 && int(ciphertext[i])<=122){
                if(int(ciphertext[i])-rshift < 97){
                    ciphertext[i] = deShift(ciphertext[i], -26);
                }
            }
            old_str+=deShift(ciphertext[i], rshift);
        }else{
            old_str+=ciphertext[i];
        }
    }
    return old_str;
}
std::string decryptVigenere(std::string ciphertext, std::string keyword){
    std::string old_str;
    const int klength = keyword.length();
    int shift[klength];
    for(int i = 0; i < klength; i++){
        shift[i] = int(keyword[i]-97);
    }
    int plength = ciphertext.length();
    int index=0;
    for(int j = 0; j < plength; j++){ 
        if(isalpha(ciphertext[j])){
            if(index>=klength){
                do{
                    index-=klength;
                }while(index>=klength);
            }
            if(int(ciphertext[j])>=65 && int(ciphertext[j])<=90){
                if(int(ciphertext[j])-shift[index] < 65){
                    ciphertext[j] = deShift(ciphertext[j], -26);
                }
            }else if(int(ciphertext[j])>=97 && int(ciphertext[j])<=122){
                if(int(ciphertext[j])-shift[index] < 97){
                    ciphertext[j] = deShift(ciphertext[j], -26);
                }
            }
            old_str+=deShift(ciphertext[j], shift[index]);
            index++;
        }else{
            old_str+=ciphertext[j];
        }
    }
    return old_str;
}