#include <iostream>
using namespace std;

namespace str
{
    int* string_to_num(string num_as_string) 
    {
        int num = 0;
        int i = 0, digit_count = 0;
        while(num_as_string[i] != '\0') { digit_count++; i++; }
        int number[digit_count] = {};

        while(num_as_string[i] != '\0') 
        {
            if(num_as_string[i] == '0') { number[i] = 0; }
            else if(num_as_string[i] == '1') { number[i] = 1; }
            else if(num_as_string[i] == '2') { number[i] = 2; }
            else if(num_as_string[i] == '3') { number[i] = 3; }
            else if(num_as_string[i] == '4') { number[i] = 4; }
            else if(num_as_string[i] == '5') { number[i] = 5; }
            else if(num_as_string[i] == '6') { number[i] = 6; }
            else if(num_as_string[i] == '7') { number[i] = 7; }
            else if(num_as_string[i] == '8') { number[i] = 8; }
            else if(num_as_string[i] == '9') { number[i] = 9; }
            i++; //digit_count++;
        }
        // for(int i=0; i<digit_count; i++) { cout << number[i]; }
        // cout << endl << sizeof(number);
        return(number);
    }

}