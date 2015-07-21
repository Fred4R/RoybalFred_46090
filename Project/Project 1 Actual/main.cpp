/* 
 * File:   main.cpp
 * Author: Fred
 *
 * Created on July 18, 2015, 3:10 PM
 */

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
const unsigned int LIGHT=299792458;     //The speed of light in miles per sec.



//Function Prototypes

void TtlScrn ();
void Continu ();
void BtlMenu ();
short tutBat (short, short, short, short, short);
void battle1 ();

//Execution Begins Here
int main(int argc, char** argv) {
    
    srand(static_cast<unsigned short>(time(0)));
    unsigned short dice=rand()%19+1;
    
    int NamSlct=0;
    string FName, MName, LName, FulName;
    
    char Contin;
    string MainC;
    char clsSlct;
    unsigned short clsCoun=0;
    
    short maxHlth=100;
    short str=10;
    short dex=10;
    short mag=10;
    float crit=10.5f;
    
    TtlScrn ();
    
    
    cout<<dice<<endl;
    
    cout<<endl;
    cout<<"Type (c) and press the enter key afterwards to continue"<<endl;
    cout<<"Or type in a space or tab to stay here"<<endl;
    cout<<"Or type anything else to exit"<<endl;
    
    
    cin>>Contin;
    cout<<endl;
    

    switch (Contin){
        case 'C':
        case 'c': break;
        default: return 0;
    }
    
    
    cout<<"Before the game starts, are you male or female?"<<endl;
    cout<<"This choice will generate the main character's name."<<endl;
    cout<<"(Type 1 for male and 2 for female)"<<endl;
    cin>>MainC;


    if(MainC=="1"){

       FName="Joseph";
       MName="Jerry";
       LName="Jackson";

     }else if(MainC=="2"){

         FName="Bonnie";
         MName="Bea";
         LName="Boxley";

     }else{

         cout<<endl;
         cout<<"That answer isn't one that was given....oh well..."<<endl;
         cout<<endl;
         
         
         FName="White";
         MName="The";
         LName="Fox";
         
     }
    
    FulName=FName+" "+MName+" "+LName;
\
    cout<<"*****************************************************************\n";
    cout<<"Chapter 0- Tutorial\n"<<endl;
    cout<<"-----------------------------------------------------------------\n";
    
            
    cout<<"You are the great candy making adventurer, "<<FulName<<"."<<endl;
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
    cout<<dice<<endl;
    
    Continu ();
   
    do{
        
    
    cout<<"Your years of training as a....as a.....uh...."<<endl;
    cout<<"What was that thing you trained for years as again?"<<endl;
    
    cout<<"Menu**********"<<endl;
    cout<<"1: A Strong Knight"<<endl;
    cout<<"2: A Quick Ninja"<<endl;
    cout<<"3: A Witty Mage"<<endl;
    cout<<"**************"<<endl;
    
    cout<<"(Whenever you see a menu like the one above, enter the number"<<endl;
    cout<<"listed next to the option to select it)"<<endl;
    cin>>clsSlct;
    cout<<endl;
    
    
    switch (clsSlct){
        

        case '1':
            cout<<"Oh yeah, you remember all that time you hit the gym with\n";
            cout<<"your fellow knights and getting pumped."<<endl;
            maxHlth+=25;
            str+=5;
            mag-=5;
            clsCoun++;
            break;
        case '2':
            cout<<"Oh yeah, you remember all that time you spent dodging\n";
            cout<<"shurikens and practicing running quietly."<<endl;
            maxHlth-=25;
            str+=2;
            dex+=5;
            crit+=10;
            clsCoun++;
            break;
        case '3':
            cout<<"Oh yeah, you remember all that time you spent studying\n";
            cout<<"magic tomes and having spells blow up in your face"<<endl;
            cout<<"when you first started."<<endl;
            maxHlth-=25;
            str+=2;
            dex+=5;
            crit-=5.5;
            clsCoun++;
        default:
            cout<<"Your head explodes from trying to think"<<endl;
            break;
        }
                      
    }while(clsCoun==0);

            
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
    
    tutBat (maxHlth, str, dex, mag, crit);
    
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

short tutBat (short mcHp, short mcStr, short mcDex, short mcMag, short mcCrit,
        short clsSlct){
    
    cout<<"placeholder"<<endl;
    unsigned char Cmd;
    unsigned char turnOvr;
    
    unsigned short pHp=50;
    unsigned short pStr=8;
    unsigned short pDex=5;
    unsigned short pMag=10;
    
    
    cout<<mcHp<<endl;
    cout<<"Giant Pudding hits you!"<<endl;
    cout<<"You have "<<(mcHp-=(rand()%19+1))<<"left"<<endl;
    
    cout<<"Continue..."<<endl;
    Continu ();
    
    do{
    cout<<"Menu**********"<<endl;
    cout<<"1: Attack"<<endl;
    cout<<"2: Use Skill"<<endl;
    cout<<"**************"<<endl;
    cin<<Cmd;
   switch (Cmd){
        

        case '1':
            cout<<"You attack the pudding!"endl;
            cout<<"It has"<<(pHp-=(rand()%19+1))<<"left"<<endl;
            break;
        case '2':
            if 
        default:
            cout<<"Your head explodes from trying to think"<<endl;
            break;
        }
                      
    }while(clsCoun==0);

    turnOvr++;
    
}
 
short BtlMenu (){
    cout<<"Menu**********"<<endl;
    cout<<"1: Attack"<<endl;
    cout<<"2: Use Item"
    cout<<"**************"<<endl;
}