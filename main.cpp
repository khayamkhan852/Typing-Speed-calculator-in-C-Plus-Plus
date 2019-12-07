#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctime>
#include <windows.h>

#include "paragraphs.h"
#include "Welcome_screen.h"
#include "All_Record.h"


using namespace std;

int Topic;
int len_para2,wrong_wc=0, c_error=0,Words_per_min,seconds,input_wc,words_length,minutes ;
float total_minutes;

int main_menu(); // main function prototype


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//MAIN FUNCTION
int main(){
 UET:

  Topic = main_menu();
  paragraphs p1;

  p1.count_words(p1);
  words_length=p1.get_topic_words_number();
  string  paragraph_selected=p1.get_paragraph_selected();
  char user_input[500];

  cout <<"\nYou have to type total of " << words_length <<" words.\n\n";

    Sleep(2000);
    system("cls");
    for(int i=3; i>0; i--){

    cout <<"The Test will start in "<< i <<" seconds ..." ;
    Sleep( 1000 );
    system("cls");
    }

    system("COLOR F3");
    cout<<"\nParagraph:\n---------\n" << paragraph_selected<<" " ;

    cout<<"\n\n\t\t\t******************" <<"\n\n\nTYPE...!!!\n\n" ;

       cin.ignore();
       time_t start,stop;
       start=clock();
       cin.get(user_input,499) ;
       stop=clock();

 len_para2 = strlen(user_input);
 input_wc=1;
 int input_len = strlen(user_input);
 for(int i=0; i<input_len; i++){
    if(user_input[i] == ' ')
        input_wc++;
 }

  int milliseconds =(stop-start)/double(CLOCKS_PER_SEC)*1000;
  seconds = (int) (milliseconds / 1000) % 60 ;
   minutes = (int) ((milliseconds / (1000*60)) % 60);
  total_minutes = (float) (milliseconds / 1000) / 60 ;



    int  k=0;   // to count wrong words
    for(int i=0; i<len_para2; i++){

        if(user_input[i] != paragraph_selected[i]){
            c_error++;

        if (k==0 )
        {
            wrong_wc++;
            k=1;
        }

    }
    if( paragraph_selected[i] == ' ' )
        k=0;
}
 system("cls");
 system("COLOR 0F");
 cout <<"\nASSESSING";
 Sleep(1000);
 cout<<".";
 Sleep(1000);
 cout<<".";
 Sleep(1000);
 cout<<".\n";
 Sleep(1000);

 cout<<"\nRESULTS !!! \n\n" ;

 cout<< input_wc<<" Words Typed out of " <<words_length <<" Words ... \n"  ;
 if (minutes > 0){
 Words_per_min= input_wc/total_minutes;
if (minutes == 1)
cout << "\n\nTotal time ::  " <<minutes  << " minute and "<< seconds << " seconds...\n\n" ;
 if (minutes>1)
 cout << "\n\nTotal time ::  " <<minutes  << " minutes and "<< seconds << " seconds...\n\n" ;
 cout <<"\nWPM  (Words Per Minute)  :: " << Words_per_min;
 }
 else
 {
     cout <<"\n time taken...\t" << seconds <<" seconds";

 }
      cout<<"\n\n Number of wrong characters : " << c_error<< " \nNumber of wrong words : " << wrong_wc <<" out of  " << input_wc;

   All_Record a1;
   a1.data();
   a1.store_All();

     int again;
     cout<<"\n\n\tEnter from the following "<<endl;
     cout<<"\t1. For returning to main menu "<<endl;
     cout<<"\t2. For exiting program "<<endl;
     cout<<"\tOption = ";
     cin>>again;
     if(again==1){
      system("cls");
     goto UET;
     }
    else

    getch();

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int topic_number(){

return Topic;

}

int get_input_wc(){

return input_wc;

}

int get_words_length(){

return words_length;

}

int get_Words_per_min(){

return Words_per_min;


}

int get_seconds(){

return seconds;
}

int get_minutes(){


return minutes;

}

float get_total_minutes(){

return total_minutes;

}


int get_count_error(){

return c_error;

}

int get_wrong_word_count(){

return wrong_wc;

}

