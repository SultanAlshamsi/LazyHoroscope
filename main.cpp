//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    string firstname;
    string lastname;


  //get user input

  cout<<"What is your first name?\n";
  cin>>firstname;

cout<<"What is your last name?\n";
cin>>lastname;

  //tell fortune
    cout<<"Welcome,"<<firstname[0]<<"."<<lastname[0]<<".,here is your fortune...\n";
    

    //predict lucky number

    int lucky;
    lucky = firstname.length();

    cout<<"your lucky number is "<<lucky<<endl;



  return 0;
}
