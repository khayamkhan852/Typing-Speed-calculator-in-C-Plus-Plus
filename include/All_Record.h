#ifndef ALL_RECORD_H
#define ALL_RECORD_H

#include <string.h>
#include <fstream>
using namespace std;


int get_input_wc();
int get_words_length();
int get_Words_per_min();
int get_seconds();
int get_minutes();
int get_count_error();
int get_wrong_word_count();

float get_total_minutes();


class All_Record
{
    private:

    char name[15];
    int wrong_wc, c_error,Words_per_min,seconds,input_wc,words_length,minutes ;
    float total_minutes;


    public:

       All_Record();

       void data();

       void store_All();


};

#endif // ALL_RECORD_H
