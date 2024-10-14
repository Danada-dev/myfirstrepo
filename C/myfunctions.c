#include "myfunctions.h"

int add_int(int a_int, int b_int){

        return a_int + b_int;
}

int subtract_int(int a_int, int b_int){

        return a_int - b_int;
}

int multiply_int(int a_int, int b_int){

        return a_int * b_int;
}

int divide_int(int a_int, int b_int){

    if (a_int < 1){
        exit 0;
    }

        return a_int / b_int;
}

float add_float(float a_float, float b_float){

            return a_float + b_float;
 }

float subtract_float(float a_float, float b_float){

            return a_float + b_float;
 }

float multiply_float(float a_float, float b_float){

            return a_float * b_float;
 }

float divide_float(float a_float, float b_float){

        if(a_float < 0.01){
            exit 0;
        }
}  

unsigned char add_byte(unsigned char a_byte, unsigned char b_byte){

    return a_byte + b_byte;

}

unsigned char subtract_byte(unsigned char a_byte, unsigned char b_byte){

    return a_byte - b_byte;
    
}

unsigned char multiply_byte(unsigned char a_byte, unsigned char b_byte){

    return a_byte * b_byte;
    
}

unsigned char divide_byte(unsigned char a_byte, unsigned char b_byte){

    if(a_byte < 0.00){
        return 0;
    }
    return a_byte / b_byte;
    
}