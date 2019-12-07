#include <iostream>
using namespace std;

//Welcome Screen
int main_menu(){
  int topic;
  cout <<"\n\t\t\t\t \"TYPING SPEED CALCULATOR\"\n\t\t\t       ****************************\n\n";
  cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
  cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
  cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
  cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
  cout<<"\t     ||  \t\t\tChoose any of the given topics...  \t\t    || "<<endl;
  cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
  cout<<"\t     ||  \t\t\t1: INTERNET   \t\t\t\t\t    || "<<endl;
  cout<<"\t     ||  \t\t\t2: READING    \t\t\t\t\t    || "<<endl;
  cout<<"\t     ||  \t\t\t3: HACKING           \t\t\t\t    || "<<endl;
  cout<<"\t     ||  \t\t\t4: THE UNIVERSE   \t\t\t\t    || "<<endl;
  cout<<"\t     ||  \t\t\t5: COMPUTER PROGRAMMING    \t\t\t    || "<<endl;
  cout<<"\t     ||  \t\t\t6: PLANET EARTH   \t\t\t\t    || "<<endl;
  cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
  cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
  cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
  cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
  cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
  cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
  cout <<" \n\n";

  khayam:
  cout<<"\t     TOPIC NUMBER = ";
  cin >> topic;
  if(topic <0 || topic >6){
  cout<<"\t     Choose from the menu given "<<endl;
  goto khayam;

  }
 return topic;
}


