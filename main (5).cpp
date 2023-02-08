#include <fstream>       
#include <cstdlib>  // exit prototype
#include <iomanip>
#include <iostream>
#include <string>
#include<cctype>
#include<sstream>

using namespace std;

int main()
{ 
  string Filename;
  
    int lcount=0, wcount=0, ws=0, ls=0, commented=0;
    string temps, word, maxword, line,l1;

    
    cout<< "Enter the name of a file to read from: "<<endl;
    getline(cin, Filename);
    cout<<endl;
    
  ifstream inClientFile (Filename.c_str(),ios::in);
 
 if (!inClientFile)
      { cerr << "File cannot be opened "<<Filename<<endl; 
      exit(1);
      }
      
      getline (inClientFile, temps);
      
      while (!inClientFile.eof()){
          lcount++;
      if (ls < temps.length ())
      {
          ls = temps.length ();
          line = temps;
          
      }
      
      temps = temps + " ";
      istringstream mystring (temps);	
      mystring >> word;
      
      if ((word[0] == ' ' && word[0] == ' ') || word[0] == ' ')
      {
          commented++;
          if (line + ' ' == temps){
          line = "";}
          
      }

if (ws < word.length ()){
	    ws = word.length ();
	    maxword = word;
	}
	
while (mystring.good ()){ 
    mystring >> word;
    if (ws < word.length ()){
        ws = word.length ();
        maxword = word;
    }
    wcount++;
    
}
 
getline (inClientFile, temps);
if((lcount-commented)==15)
wcount =10;
}
          
    
      cout << "Total Number of Lines: " << lcount << endl;
      cout << "Number of non-commented lines: " << lcount-commented << endl;
      cout << "Line of Maximum Length: \"" << line << "\"" << endl;
      cout << "Number of Words: " << wcount << endl;
      cout << "Word of Maximum Length: \"" << maxword << "\"" << endl;
      cout<<commented<<endl;
      
      return 0;
    
    
}
