#include "All_Record.h"
#include <iostream>
#include <fstream>
using namespace std;

All_Record::All_Record()
{
    strcpy(name,"");
    wrong_wc=get_wrong_word_count();
    c_error=get_count_error();
    Words_per_min=get_Words_per_min();
    seconds=get_seconds();
    input_wc=get_input_wc();
    words_length=get_words_length();
    minutes=get_minutes();
    total_minutes=get_total_minutes();

}


void All_Record::data(){

cout<<"\n\nEnter your name to save your records:: "<<endl;
cout<<"Name = ";
cin.ignore();
cin.getline(name,15);

}

void All_Record::store_All(){

  ofstream store;
  store.open("E:files\\Records.txt",ios::out|ios::app);

  store<<endl<<name<<endl;

  store<<"\nRESULTS !!! \n\n" ;

  store<< input_wc<<" Words Typed out of " <<words_length <<" Words ... \n" ;

  if (minutes == 1){
  store << "\n\nTotal time ::  " <<minutes  << " minute and "<< seconds << " seconds...\n\n" ;
  }
  else
  if (minutes>1){
  store << "\n\nTotal time ::  " <<minutes  << " minutes and "<< seconds << " seconds...\n\n" ;

  store <<"\nWPM  (Words Per Minute)  :: " << Words_per_min;
 }
 else
 {
     store <<"\n time taken...\t" << seconds <<" seconds";

 }
      store<<"\n\n Number of wrong characters : " << c_error<< " \nNumber of wrong words : " << wrong_wc <<" out of  " << input_wc;


  store.close();

 cout<<"CONGRATULATIONS !!!!!!!!! \n YOUR RECORDS ARE SAVED "<<endl;

}


