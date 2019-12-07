#ifndef PARAGRAPHS_H
#define PARAGRAPHS_H

#include <string.h>

using namespace std;


int topic_number(); //topic function call from main

///////////////////////////////////////////////////////////////////////////////////////////
//class paragraph
///////////////////////////////////////////////////////////////////////////////////////////

class paragraphs{
 private:

    char arr[6][500],file_paragraph[6][500];
    int words_count,len_para,TOPIC ;
    string para;

 public:
    //Functions prototype
    paragraphs();//constructor


    //returning paragraphs prototypes
    string get_para1();
    string get_para2();
    string get_para3();
    string get_para4();
    string get_para5();
    string get_para6();

    //returning paragraphs length prototypes
    int get_para1_length();
    int get_para2_length();
    int get_para3_length();
    int get_para4_length();
    int get_para5_length();
    int get_para6_length();

    //calculation of selected paragraph by the user i.e to find their word length and which paragraph is selected prototypes
    void count_words(paragraphs p1);

    //returning paragraphs word length prototypes
    int  get_topic_words_number();

     //returning paragraphs selected prototypes
    string get_paragraph_selected();

};
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#endif // PARAGRAPHS_H








