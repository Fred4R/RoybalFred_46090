/* 
 * File:   main.cpp
 * Author: Fred Roybal IV
 * Created on July 18, 2015, 3:10 PM
 * Purpose: Project 1. A text based RPG to show what was taught so far
 */

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
const unsigned int LIGHT=299792458;     //The speed of light in miles per sec.

//Function Prototypes

void TtlScrn ();                            //The title screen
void Continu ();                            //Used to pause text
unsigned short CritRt (short, float);       //Used to calculate critical rate
short Battle (short, short, short, float);  //A battle with an enemy

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    srand(static_cast<unsigned short>(time(0)));//Sets random number seed
    unsigned short dice=rand()%19+1;            //Used for event outcomes
    
    char input[20];                             //Used for file input
    
    char txtName=0;                             //Used for file output
    
    const unsigned short ledge=10;              //Sets chances for event success
    
    bool Event1=false;                          //Used for distributing bonus
                                                //for event
    
    unsigned short gameOvr;                     //Used to end the game if player
                                                //is defeated
    
    int NamSlct=0;                              //For choosing the main
                                                //characters name
    
    string FName, MName, LName, FulName;        //Used for storing the name for
                                                //later use
    
    char Contin;                                //Used to start the game from
                                                //The title screen
    
    string MainC;                               //Used for selecting a name for
                                                //the main character
    
    short maxHlth=100;                          //The main character's maximum
                                                //health
    
    short str=10;                               //The main character's strength
    short dex=13;                               //dexterity, magic aptitude, and                                          
    short mag=11;                               //critical hit rate
    float crit=10.5f;
    
    
    //Begin Game
    
    TtlScrn ();                                 //Displays Title Screen

    cout<<endl;
    cout<<"Type (c) and press the enter key afterwards to continue"<<endl;
    cout<<"Or type in a space or tab to stay here"<<endl;
    cout<<"Or type anything else to exit"<<endl;
    
    cin>>Contin;                                //Used for waiting until the user
    cout<<endl;                                 //is ready
    
    switch (Contin){
        case 'C':
        case 'c': break;
        default: return 0;
    }
    
    //Generate Main Character's Name
    cout<<"Before the game starts, are you male or female?"<<endl;
    cout<<"This choice will generate the main character's name."<<endl;
    cout<<"(Type 1 for male and 2 for female)"<<endl;
    cin>>MainC;
    
    if(MainC=="1"){

       FName="Joseph ";
       MName="Jerry ";
       LName="Jackson";

     }else if(MainC=="2"){

         FName="Bonnie ";
         MName="Bea ";
         LName="Boxley";

     }else{

         cout<<endl;
         cout<<"That answer isn't one that was given....oh well..."<<endl;
         cout<<endl;
         
         
         FName="White ";
         MName="The ";
         LName="Fox";
         
     }
    
    
    FulName=FName+" "+MName+" "+LName;
    
    //Output Name to file
    ofstream outputFile;
    outputFile.open("NameData.txt");


    outputFile<<FName<<" "<<endl;
    
    outputFile.close();
    cout<<endl;
    cout<<"Done, name saved!\n";

    
    cout<<"*****************************************************************\n";
    cout<<"Chapter 0- Tutorial\n"<<endl;
    cout<<"-----------------------------------------------------------------\n";
    
    //Output Name in File to terminal
    fstream textfile;
    textfile.open("NameData.txt");
    
    while(! textfile.eof()){
        textfile>>input[txtName];
        cout<<input[txtName];
        txtName++;
    }
    
    
    cout<<"...You are the great candy making adventurer, "<<FulName<<"."<<endl;
    cout<<"Amongst your travels, you have heard of a legendary candy bar \n";
    cout<<"that, when eaten, will give the consumer the secrets to creating\n";
    cout<<"the most amazing confectionary delights the world has ever known.\n";
    
    cout<<endl;
    cout<<"Continue..."<<endl;
    cout<<"(Whenever you see this message by itself, type in anything other\n";
    cout<<" than a space or tab to move on.)"<<endl;
    
    Continu ();
    
    cout<<"Among your many years of traveling the world in search of amazing\n";
    cout<<"sugary artifacts, you have finally gathered enough information to\n";
    cout<<"find the location of THE CANDY BAR"<<endl;
    
    Continu ();
   
            
    cout<<"*****************************************************************\n";
    cout<<"Chapter 1- The Forest\n"<<endl;
    cout<<"-----------------------------------------------------------------\n";
    
    cout<<"You begin to travel out of town and head towards the forest"<<endl;
    cout<<"where you heard the candy bar was located. It seems quite\n";
    cout<<"for most of the walk."<<endl;
    
    cout<<"Continue..."<<endl;
    Continu ();
    
    
    
    cout<<"You're almost at your destination, when suddenly, you hear a loud\n";
    cout<<"PLOP behind you."<<endl;
    
    cout<<"Continue..."<<endl;
    Continu();
    
    cout<<"A living blob of chocolate and vanilla pudding, easily twice your\n";
    cout<<"your size has decided to make YOU its next meal!."<<endl;
    
    cout<<"Continue..."<<endl;
    Continu();
    
    //Initiates battle function and checks for a "Game Over"
    gameOvr=Battle (maxHlth, str, mag, crit);
    
    //Ends game if main character is defeated
    if(gameOvr==1){
        return 0;
    }
    
     
    cout<<"After you deal the final blow on the giant pudding, it wiggles, \n";
    cout<<"stays perfectly still for a bit, and then lies flat on the ground\n";
    cout<<"as it makes a sound like a deflating whoopee cushion";
    cout<<endl;
    
    cout<<"After dealing with the giant pudding, you venture more towards\n";
    cout<<"the last known location of the candy bar."<<endl;
    
    cout<<"Continue..."<<endl;
    Continu();
   
    cout<<"*****************************************************************\n";
    cout<<"Chapter 2 - The Cave\n"<<endl;
    cout<<"-----------------------------------------------------------------\n";
    
    cout<<"After traveling for several hours, you make your way to the cave\n";
    cout<<"where the Candy Bar lies. The caves entrance has frosting moss\n";
    cout<<"growing around it, a testament to the years the cave has existed\n";
    
    cout<<"Continue..."<<endl;
    Continu();
    
    cout<<"Mysteriously, a few lollipop torches catch flame and illuminate\n";
    cout<<"the way inside. As an explorer extraordinaire and a seeker of\n";
    cout<<"sweets, you confidently stride forth into the cavern"<<endl;
     
    cout<<"Continue..."<<endl;
    Continu();
    
    cout<<"A loud thudding sound comes from behind you. The cave just sealed\n";
    cout<<"itself off. A second thud soon follows, this time coming from a\n";
    cout<<"large boulder\n.";
    
    cout<<"Continue..."<<endl;
    Continu();
    
    cout<<"You start running away from the boulder. Its starting to gain on you\n";
    cout<<"Luckily there's a ledge ahead of you that you can jump to and get\n";
    cout<<"out of the boulders way\n"<<endl;
    
    cout<<"Continue..."<<endl;
    Continu();
    
    //Random event and check if succeed
    if(rand()%19+1>8){
        cout<<"You survived!!!"<<endl;
        cout<<"Upon hoisting yourself up, you spot the Candy Bar!"
        Event1=true;
        
        Continu ();
    }else{
        cout<<"You got squished"<<endl;
        
    }
//    (rand()%19+1>8?"You survived!!!":"You got squished");
            

    
    
    
    
    return 0;
}


//The Title Screen
void TtlScrn (){
    
    cout<<"                   Fred Roybal IV Presents:                      \n";
    cout<<"*****************************************************************\n";
    cout<<"-----------------------------------------------------------------\n";
    cout<<"                   The     Legend      of                        \n";
    cout<<"                            The                                  \n";
    cout<<"                 Amazingly      Spectacular                      \n";
    cout<<"                         CANDY BAR                               \n";
    cout<<"-----------------------------------------------------------------\n";
    cout<<"*****************************************************************\n";
    return;
}

void Continu (){
    
    string Verify;
    
    cin>>Verify;
    
    cout<<endl;
 
}

unsigned short CritRt (short base, float rate){
    
    unsigned short damage;
    unsigned short crit;
    float calc=rand()%99+1.5;
    
    
    if (calc<=rate){
        cout<<"CRITICAL HIT!!! ";
        damage=base*2;
        cout<<damage<<endl;
    }else{
        damage=base;
        cout<<damage<<endl;
        
    }
    
    return damage;
}

short Battle (short mcHp, short mcStr, short mcMag, float mcCrit){
   
    unsigned short damage;
    unsigned char mnstrUp=1;
    unsigned char Cmd;
    unsigned char trnOver=0;
    unsigned char ablMenu;
    unsigned char ablSlct=0;
    
    short pHp=100;
    unsigned short pStr=8;
    unsigned char gameOvr;
    
    
    cout<<"The Giant Pudding slaps you!"<<endl;
    cout<<"You have "<<(mcHp-=(rand()%19+1)+pStr)<<" left"<<endl;
    cout<<endl;
    cout<<"(You are in a battle!)"<<endl;
    cout<<"(The battle is over when either you or the enemy is defeated)"<<endl;
    
    cout<<"Continue..."<<endl;
    Continu ();
    
    do{
        
        
        if(mcHp<=0){
            cout<<"You just got defeated by the tutorial monster"<<endl;
            cout<<"Were you even trying?"<<endl;
            cout<<"Continue..."<<endl;
            Continu ();
            cout<<"The Giant Pudding takes your lunch money and skulk"<<endl;
            cout<<"into the sunset. You cease your adventures as a candy making explorer"<<endl;
            cout<<"and go to work in the Chocolate Mines for minimum wage"<<endl;
            cout<<"...for the rest of your life"<<endl;
            cout<<endl;
            cout<<"Continue..."<<endl;
            Continu ();
            
            cout<<"GAME OVER"<<endl;
            return gameOvr=1;
            cout<<endl;
            ;
        }
    
    if(mcHp>0){    
    cout<<"Menu**********"<<endl;
    cout<<"1: Attack"<<endl;
    cout<<"2: Use Skill"<<endl;
    cout<<"3: Aggressively Breakdance"<<endl;
    cout<<"**************"<<endl;
    cin>>Cmd;
    
        switch (Cmd){

            case '1':
                cout<<"You attack the pudding!"<<endl;
                cout<<"It has "<<endl;
                cout<<(pHp-=(rand()%39+1)+(mcStr))<<endl;
                cout<<"health left"<<endl;
                ablSlct++;
                break;
            case '2':
                do{
                cout<<"Menu**********"<<endl;
                cout<<"1: Critical Strike"<<endl;
                cout<<"2: Reckless Charge"<<endl;
                cout<<"3: GET PUMPED!!!"<<endl;
                cout<<"4: back"<<endl;
                cout<<"**************"<<endl;
                cin>>ablMenu;

                switch (ablMenu){
                        case '1':
                        cout<<"You focus on hitting a weak point\n";
                        cout<<"The pudding has "<<endl;
                        cout<<(pHp-=CritRt((rand()%14+1),50))<<endl;
                        cout<<" health left."<<endl;
                        ablSlct++;
                        break;

                        case '2':
                        cout<<"You charge head on at the enemy, and over exert";
                        cout<<" yourself to deal more damage."<<endl;
                        cout<<"The pudding has "<<endl;
                        cout<<(pHp-=(rand()%19+15));
                        cout<<" health left."<<endl;
                        cout<<"You hurt yourself in the attack!"<<endl;
                        cout<<"You have "<<(mcHp-=(rand()%4+1))<<"left"<<endl;
                        ablSlct++;
                        break;

                        case '3':
                        cout<<"You flex your muscles and GET PUMPED!!!"<<endl;
                        cout<<"Your strength has increased to ";
                        cout<<(mcStr+=(rand()%4+(mcMag-3)))<<endl;
                        ablSlct++;
                        break;

                        case '4':
                        cout<<" "<<endl;    
                        break;

                        default:
                        cout<<"Your head hurts from trying to think"<<endl;
                        cout<<"(That isn't a valid response)"<<endl;

                        Continu ();
                        break;
                    }
                
                }while (ablSlct==0);
                break;
            case '3':
                cout<<"You decide to pull off some sweet dance moves"<<endl;
                cout<<"Giant Pudding just go dissed"<<endl;
                cout<<rand()%99+1;
                cout<<" style points gained"<<endl;
                ablSlct++;
                break;
                
            default:
                    cout<<"Your head hurts from trying to think"<<endl;
                    cout<<"(That isn't a valid response)"<<endl;
                    break;

        }
        if(pHp<=0){
            --mnstrUp;
            cout<<"You defeated the Giant Pudding!!!"<<endl;
            cout<<"Continue..."<<endl;
            Continu ();
            cout<<"You leveled up to level 17!"<<endl;
            cout<<"Giant Pudding dropped 413 gold"<<endl;
            cout<<"Continue..."<<endl;
            Continu ();   
        }
        
         cout<<"The Giant Pudding slaps you!"<<endl;
         cout<<"You have "<<(mcHp-=(rand()%19+1)+pStr)<<" left"<<endl;
         cout<<endl;   
            
     }
        
     
    }while(!mnstrUp==0);
    
    return gameOvr=0;
}
