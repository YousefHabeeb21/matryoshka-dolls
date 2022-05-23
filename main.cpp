/**------------------------------------------

    Program 1: Matryoshka Dolls
        Prompt for the number of dolls and display
        ASCII Matryoshka dolls in decending order
        above each other.

    Course: CS 141, Spring 2022.
    System:  Mac using Visual Studio
    Author: Yousef Habeeb

    Original ASCII graphics gives:
        ------------------------------------------
          Jeremiah the toad 
                    
             @    @   
              .  .               
          (  ------  ) 
          /          \           
         ( ~>  __  <~ ) 
        (              )      
        ^ ^___~~~~___^ ^ 
       / \           / \ 
        ^             ^  

        ------------------------------------------

 ---------------------------------------------*/




#include <iostream>   // for cin and cout
#include <iomanip>    // for setw. The number in setw(...) is the total of blank spaces including the printed item.

using namespace std; // so that we don't need to preface every cin and cout with std::

int main()
{
    // Display the menu and get the user choice
    int menuOption = 0;
    cout << "Program 1: Matryoshka Dolls            \n"
        << "Choose from among the following options:  \n"
        << "   1. Display original graphic  \n"
        << "   2. Display Matryoshka Dolls         \n"
        << "   3. Exit the program          \n"
        << "Your choice -> ";
    cin >> menuOption;

    // Handle menu option of 3 to exit
    if (menuOption == 3) {
        exit(0);
    }
    // Handle menu option of 1 to display custom ASCII graphics
    else if (menuOption == 1) {
        // My own graphic.  You must create your own.
        cout << setw(8) << " ";
        // Display a line across the top
        for (int i = 0; i < 42; i++) {
            cout << "-";
        }
        cout << endl;
        // Display ASCII graphics for "2022".  Yours must be different!
          cout<< setw(8) << " " << "Jeremiah the toad \n"<<endl;
      
         cout<<setw(11) << " " << "  @    @   \n"
      <<setw(10) << " " << "    .  .               \n"
      <<setw(10) << " " << "(  ------  ) \n"
      <<setw(10) << " " << "/          \\           \n "
      <<setw(8) << " " << "( ~>  __  <~ ) \n"
      <<setw(8) << " " << "(              )      \n"
      <<setw(8) << " " << "^ ^___~~~~___^ ^ \n"
      <<setw(7) << " " << "/ \\           / \\ \n"
      <<setw(7) << " " << " ^             ^  \n";

        cout << setw(8) << " ";
        // Display a line across the bottom
        for (int i = 0; i < 42; i++) {
            cout << "-";
        }
        cout << endl;
    } //end if( menuOption == 1)  // menu option to display custom graphic

    else if (menuOption == 2) {
        // Prompt for and get the number of dolls.
        int numDolls = 0;
        cout<<"Number of Dolls -> ";

        // Allows user input for the number of dolls 
        cin >> numDolls;

        //Assigns character "a" with "/" 
        char a = '/';

        //Assigns character "b" with "-"
        char b = '-';

        // Total number of dolls = the amount of space decremented per each doll
        int moving = numDolls;

        // Each line in the drawing 
        int numLines = 0;

        // The ":" or "-" on every other doll
        int bodyShape = 1;

        // The head or "()" on the doll
        int headSpacing= 3 + moving;

      // loop responsible for giving the head on every doll the correct amount of spaces 
       while(numDolls > 0){
         int theSpaces = 4 + moving;
         int middleSpace = 4;
         
          // prints the head 
         cout << setw(headSpacing) << "( )" <<endl;
          
          // Alternates the ":" and "-" on every other doll
         if(bodyShape % 2 == 1){
           cout<< setw(moving + 4) << "/ - \\"<<endl;
         }
         else{
           cout<< setw(moving + 4) << "/ : \\"<<endl;
         }

         // Upper body loop 
         for(int k = numLines ; k> 0; k--){

           cout<< setw(theSpaces - 5)<< a << setw(middleSpace +2) << "\\"<<endl;
           
           
           middleSpace = middleSpace +2;
           
          // keeps the spaces even 
           theSpaces--;

         }
          // Lower body loop
         for(int k = numLines ; k>=0 ; k-- ){
           cout << setw(theSpaces -3) << "\\"<< setw(middleSpace -2) << a<<endl;

           theSpaces++;
           //keeps bottom right going diagnal 
           middleSpace = middleSpace -2;
         }
          //prints the "-" ont he bottom of every doll 
         cout<<setw(headSpacing-1)<< b <<endl;

         numDolls--;
         bodyShape++;
         numLines++;
         
       }
      }
    //end if( menuOption == 2) // menu option to display dolls
    cout << "Exiting" << endl;
    return 0;
} 

    

  