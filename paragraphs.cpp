#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "paragraphs.h"
using namespace std;

//////////////////////////////////////////////////////////////////////////////
//class paragraph definitions
//////////////////////////////////////////////////////////////////////////////

//constructor definition
paragraphs::paragraphs(){
    words_count =1;
    len_para=0;
    para="";
    TOPIC=topic_number();

    srand(time(0));  //time for creating random number
    int x= rand()%5; //creating random number

    ifstream files[6];
 ///////////////////////////////////////////////////////////////////////////////
    if(x==0){
    files[0].open("E:files\\internet\\1.txt");
    files[1].open("E:files\\reading\\1.txt");
    files[2].open("E:files\\Ethical Hacking\\1.txt");
    files[3].open("E:files\\Universe\\1.txt");
    files[4].open("E:files\\computer programing\\1.txt");
    files[5].open("E:files\\planet earth\\1.txt");
    }
    else
    if(x==1){
    files[0].open("E:files\\internet\\2.txt");
    files[1].open("E:files\\reading\\2.txt");
    files[2].open("E:files\\Ethical Hacking\\2.txt");
    files[3].open("E:files\\Universe\\2.txt");
    files[4].open("E:files\\computer programing\\2.txt");
    files[5].open("E:files\\planet earth\\2.txt");
    }
    else
    if(x==2){
    files[0].open("E:files\\internet\\3.txt");
    files[1].open("E:files\\reading\\3.txt");
    files[2].open("E:files\\Ethical Hacking\\3.txt");
    files[3].open("E:files\\Universe\\3.txt");
    files[4].open("E:files\\computer programing\\3.txt");
    files[5].open("E:files\\planet earth\\3.txt");
    }
    else
    if(x==3){
    files[0].open("E:files\\internet\\4.txt");
    files[1].open("E:files\\reading\\4.txt");
    files[2].open("E:files\\Ethical Hacking\\4.txt");
    files[3].open("E:files\\Universe\\4.txt");
    files[4].open("E:files\\computer programing\\4.txt");
    files[5].open("E:files\\planet earth\\4.txt");
    }
    else{
    files[0].open("E:files\\internet\\5.txt");
    files[1].open("E:files\\reading\\5.txt");
    files[2].open("E:files\\Ethical Hacking\\5.txt");
    files[3].open("E:files\\Universe\\5.txt");
    files[4].open("E:files\\computer programing\\5.txt");
    files[5].open("E:files\\planet earth\\5.txt");
    }
///////////////////////////////////////////////////////////////////

  for(int i=0;i<6;i++){
         
		 while(files[i].getline(file_paragraph[i],500)){

            strcpy(arr[i],file_paragraph[i]);

        }

                 files[i].close();

        }

}

//////////////////////////////////////////////////////////////////////////////////////////////////
 //returning paragraphs definitions
string paragraphs::get_para1(){

           return arr[0];
}
string paragraphs::get_para2(){

      return arr[1];
    }

string paragraphs::get_para3(){

    return arr[2];

    }

string paragraphs::get_para4(){

     return arr[3];

    }

string paragraphs::get_para5(){


    return arr[4];

    }


string paragraphs::get_para6(){

       return arr[5];

    }
///////////////////////////////////////////////////////////////////////////////////////////////////


//returning paragraphs length definitions
int paragraphs::get_para1_length(){

           return strlen(arr[0]);
}

int paragraphs::get_para2_length(){

           return strlen(arr[1]);
}

int paragraphs::get_para3_length(){

           return strlen(arr[2]);
}

int paragraphs::get_para4_length(){

           return strlen(arr[3]);
}

int paragraphs::get_para5_length(){

           return strlen(arr[4]);
}

int paragraphs::get_para6_length(){

           return strlen(arr[5]);
}
////////////////////////////////////////////////////////////////////////////////////////////////////


//calculation of selected paragraph by the user i.e to find their word length and which paragraph is selected definition
void paragraphs::count_words(paragraphs p1){

    if(TOPIC == 1){

    len_para = p1.get_para1_length();
    para=p1.get_para1();
       for(int i=0; i< len_para; i++){
        if (para[i] == ' '){
            words_count++;
                           }
                                     }
                  }
      else
        if(TOPIC == 2){

        len_para = p1.get_para2_length();
        para=p1.get_para2();
        for(int i=0; i< len_para; i++){
           if (para[i] == ' '){
             words_count++;
                             }

                                    }
                      }
      else
        if(TOPIC == 3){

        len_para = p1.get_para3_length();
        para=p1.get_para3();
        for(int i=0; i< len_para; i++){
           if (para[i] == ' '){
             words_count++;
                             }
                                    }

                      }

      else
        if(TOPIC == 4){

        len_para = p1.get_para4_length();
        para=p1.get_para4();
        for(int i=0; i< len_para; i++){
           if (para[i] == ' '){
             words_count++;
                             }
                                    }

                      }

      else
        if(TOPIC == 5){

        len_para = p1.get_para5_length();
        para=p1.get_para5();
        for(int i=0; i< len_para; i++){
           if (para[i] == ' '){
             words_count++;
                             }
                                    }

                      }

       else
        if(TOPIC == 6){

        len_para = p1.get_para6_length();
        para=p1.get_para6();
        for(int i=0; i< len_para; i++){
           if (para[i] == ' '){
             words_count++;
                             }
                                    }

                      }

}
//////////////////////////////////////////////////////////////////////////////////////////

//returning paragraphs word length definition
int paragraphs:: get_topic_words_number(){

return words_count;
}
//////////////////////////////////////////////////////////////////////////////////////////////


 //returning paragraphs selected definition
string paragraphs ::get_paragraph_selected(){

return para;
}

/////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
