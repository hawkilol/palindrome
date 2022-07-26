//Kalil Saldanha Kaliffe
#include <iostream>
#include <string>
#include "palindromo.h"

using namespace std;

bool palindromo (string palavra){
 
  string palavrainv;
  for(int i = palavra.length()-1; i >= 0; --i){
    palavrainv += palavra[i];
  }
  
  if(palavra == palavrainv){
    cout<<"\n "<<palavrainv<< " true";
    return true;
  } 
  else{
    cout<<"\n "<<palavrainv<< " false";
    return false;
  }
}
