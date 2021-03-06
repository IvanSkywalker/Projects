#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main()
{

    cout<<"Welcome to EpikGames! Choose a game:"<<endl;
    int money=1500,game=1;
//zapochva igrata
    while(game==1)
    {
        cout<<" "<<endl;
        cout<<"Type 'lottery' and try your luck!"<<endl;
        cout<<"Type 'rps' to play Rock-Paper-Scissor!"<<endl;
        cout<<"Type 'guessNum' to play Guess The Number!"<<endl;
        cout<<"Type 'guessWord' to play Guess The Word!"<<endl;
        cout<<"Type 'trivia' to play Trivia!"<<endl;
        string ch,tryAgain="yes";
        cin>>ch;


//lottery
        if(ch=="lottery")
        {
            cout<<" "<<endl;
            cout<<"You have $"<<money<<". Every try costs $500!"<<endl;
            while(tryAgain=="yes")
            {
                srand(time(0)); //seed random number generator
                int lottery=rand()%900+100; //random number between 100 and 999
                int lotteryDigit1=lottery/100;
                int lotteryDigit2=(lottery/10)%10;
                int lotteryDigit3=lottery%10;

                while(lotteryDigit1==lotteryDigit2||lotteryDigit2==lotteryDigit3||lotteryDigit3==lotteryDigit1)
                {
                    lottery=rand()%900+100;
                    lotteryDigit1=lottery/100;
                    lotteryDigit2=(lottery/10)%10;
                    lotteryDigit3=lottery%10;
                }

                cout<<"Enter your lottery pick (three distinct digits): ";
                int guess=0;// enter a guess
                cin>>guess;
                int guessDigit1=guess/100;
                int guessDigit2=(guess/10)%10;
                int guessDigit3=guess%10;

                while(guessDigit1==guessDigit2||guessDigit2==guessDigit3||guessDigit3==guessDigit1)
                {
                    cout<<"Please enter your lottery pick with three distinct digits: ";
                    cin>>guess;
                    guessDigit1=guess/100;
                    guessDigit2=(guess/10)%10;
                    guessDigit3=guess%10;
                }
                cout<<"The lottery number is "<<lottery<<endl;
                money=money-500;
                if(guess==lottery)
                {
                    cout<<"Exact match: you win $10,000"<<endl;
                    money=money+10000;
                }
                else if((guessDigit1==lotteryDigit2 && guessDigit2==lotteryDigit3 && guessDigit3==lotteryDigit1)
                        || (guessDigit1==lotteryDigit2 && guessDigit2==lotteryDigit1 && guessDigit3==lotteryDigit3)
                        || (guessDigit1==lotteryDigit1 && guessDigit2==lotteryDigit3 && guessDigit3==lotteryDigit2)
                        || (guessDigit1==lotteryDigit3 && guessDigit2==lotteryDigit2 && guessDigit3==lotteryDigit1)
                        || (guessDigit1==lotteryDigit3 && guessDigit2==lotteryDigit1 && guessDigit3==lotteryDigit2))
                {
                    cout<<"Match all digits: you win $3,000"<<endl;
                    money=money+3000;
                }
                else if((guessDigit1==lotteryDigit1 && guessDigit2==lotteryDigit2)
                        || (guessDigit1==lotteryDigit1 && guessDigit2==lotteryDigit3)
                        || (guessDigit1==lotteryDigit1 && guessDigit3==lotteryDigit2)
                        || (guessDigit1==lotteryDigit1 && guessDigit3==lotteryDigit3)
                        || (guessDigit1==lotteryDigit2 && guessDigit2==lotteryDigit1)
                        || (guessDigit1==lotteryDigit2 && guessDigit2==lotteryDigit3)
                        || (guessDigit1==lotteryDigit2 && guessDigit3==lotteryDigit1)
                        || (guessDigit1==lotteryDigit2 && guessDigit3==lotteryDigit3)
                        || (guessDigit1==lotteryDigit3 && guessDigit2==lotteryDigit1)
                        || (guessDigit1==lotteryDigit3 && guessDigit2==lotteryDigit2)
                        || (guessDigit1==lotteryDigit3 && guessDigit3==lotteryDigit1)
                        || (guessDigit1==lotteryDigit3 && guessDigit3==lotteryDigit2)
                       )
                {
                    cout<<"Match two digits: you win $2,000"<<endl;
                    money=money+2000;
                }
                else if(guessDigit1==lotteryDigit1
                        || guessDigit1==lotteryDigit2
                        || guessDigit1==lotteryDigit3
                        || guessDigit2==lotteryDigit1
                        || guessDigit2==lotteryDigit2
                        || guessDigit2==lotteryDigit3
                        || guessDigit3==lotteryDigit1
                        || guessDigit3==lotteryDigit2
                        || guessDigit3==lotteryDigit3)
                {
                    cout<<"Match one digit: you win $1,000"<<endl;
                    money=money+1000;
                }
                else
                {
                    cout<<"Sorry, no match"<<endl;
                }
                cout<<"Now you have $"<<money<<"!"<<endl;
                cout<<"Would you like to try again? Type yes or no: ";
                cin>>tryAgain;
            }
        }


//rps
        else if(ch=="rps")
        {
            while(tryAgain=="yes")
            {
                srand(time(0));
                int num=rand()%3;
                string rps;
                cout<<" "<<endl;
                cout<<"Rock-Paper-Scissor!"<<endl;//Rock_Paper_Scissor
                cout<<"Please type 'rock','paper' or 'scissor':  ";
                cin>>rps;
                if(num==0)
                {
                    if(rps=="scissor")
                    {
                        cout<<"The computer is scissor. You are scissor too. Draw!"<<endl;
                    }
                    else if(rps=="rock")
                    {
                        cout<<"The computer is scissor. You are rock. You won!"<<endl;
                    }
                    else if(rps=="paper")
                    {
                        cout<<"The computer is scissor. You are paper. The computer won."<<endl;
                    }
                }
                if(num==1)
                {
                    if(rps=="scissor")
                    {
                        cout<<"The computer is rock. You are scissor. The computer won."<<endl;
                    }
                    else if(rps=="rock")
                    {
                        cout<<"The computer is rock. You are rock too. Draw!"<<endl;
                    }
                    else if(rps=="paper")
                    {
                        cout<<"The computer is rock. You are paper. You won!"<<endl;
                    }
                }
                if(num==2)
                {
                    if(rps=="scissor")
                    {
                        cout<<"The computer is paper. You are scissor. You won!"<<endl;
                    }
                    else if(rps=="rock")
                    {
                        cout<<"The computer is paper. You are rock. The computer won, better luck next time!"<<endl;
                    }
                    else if(rps=="paper")
                    {
                        cout<<"The computer is paper. You are paper too. Draw!"<<endl;
                    }
                }
                cout<<"Would you like to play again? Type yes or no: ";
                cin>>tryAgain;
            }
        }


//guess the number
        else if(ch=="guessNum")
        {
            while(tryAgain=="yes")
            {
                cout<<" "<<endl;
                cout<<"Guess The Number Game!"<<endl;
                int x,y;
                cout<<"Enter number range: ";
                cin>>x;
                cin>>y;
                srand(time(0));
                int num2=rand()%(y-x+1)+x;
                int z=0,guess2=0;
                while(guess2!=num2)
                {
                    cout<<"Enter a guess between "<<x<<" and "<<y<<":";
                    cin>>guess2;
                    z=z+1;
                    if(guess2>num2)
                    {
                        cout<<"Too high!\n";
                    }
                    else if(guess2==0)
                    {
                        break;
                    }
                    else if(guess2<num2)
                    {
                        cout<<"Too low!\n";
                    }
                    else
                    {
                        cout<<"\nCorrect! You got it in with "<<z<<" tries!"<<endl;
                    }
                }
                cout<<"Would you like to play again? Type yes or no: ";
                cin>>tryAgain;
            }
        }


//guess the word
        else if(ch=="guessWord")
        {
            while(tryAgain=="yes")
            {
                cout<<" "<<endl;
                cout<<"Guess The Word Game!"<<endl;
                srand(time(0));
                int att=3,num3=rand()%10+1;
                string word;

                while(att>=0)
                {
                    if(att==0)
                    {
                        cout<<"Sorry, better luck next time!"<<endl;
                        break;
                    }
                    cout<<"You have "<<att<<" attempt(s) left."<<endl;
                    if(num3==1)
                    {
                        cout<<"Find the secret word: s n _ _ e"<<endl;
                        cin>>word;
                        if(word=="snake")
                        {
                            cout<<"Correct! You got it with "<<4-att<<" try(s)!"<<endl;
                            break;
                        }
                    }
                    else if(num3==2)
                    {
                        cout<<"Find the secret word: s c _ _ _ l"<<endl;
                        cin>>word;
                        if(word=="school")
                        {
                            cout<<"Correct! You got it with "<<4-att<<" try(s)!"<<endl;
                            break;
                        }
                    }
                    else if(num3==3)
                    {
                        cout<<"Find the secret word: a _ _ l e"<<endl;
                        cin>>word;
                        if(word=="apple")
                        {
                            cout<<"Correct! You got it with "<<4-att<<" try(s)!"<<endl;
                            break;
                        }
                    }
                    else if(num3==4)
                    {
                        cout<<"Find the secret word: g _ m e _"<<endl;
                        cin>>word;
                        if(word=="games")
                        {
                            cout<<"Correct! You got it with "<<4-att<<" try(s)!"<<endl;
                            break;
                        }
                    }
                    else if(num3==5)
                    {
                        cout<<"Find the secret word: j a c _ _ t"<<endl;
                        cin>>word;
                        if(word=="jacket")
                        {
                            cout<<"Correct! You got it with "<<4-att<<" try(s)!"<<endl;
                            break;
                        }
                    }
                    else if(num3==6)
                    {
                        cout<<"Find the secret word: s m _ _ e"<<endl;
                        cin>>word;
                        if(word=="smile")
                        {
                            cout<<"Correct! You got it with "<<4-att<<" try(s)! :D"<<endl;
                            break;
                        }
                    }
                    else if(num3==7)
                    {
                        cout<<"Find the secret word: g l _ _ s"<<endl;
                        cin>>word;
                        if(word=="glass")
                        {
                            cout<<"Correct! You got it with "<<4-att<<" try(s)!"<<endl;
                            break;
                        }
                    }
                    else if(num3==8)
                    {
                        cout<<"Find the secret word: c r e _ p _ r"<<endl;
                        cin>>word;
                        if(word=="creeper")
                        {
                            cout<<"Aww man! You got it with "<<4-att<<" try(s)!"<<endl;
                            break;
                        }
                    }
                    else if(num3==9)
                    {
                        cout<<"Find the secret word: n e _ _ r"<<endl;
                        cin>>word;
                        if(word=="never")
                        {
                            cout<<"Never gonna give you up, never gonna let you down! You got it with "<<4-att<<" try(s)!"<<endl;
                            break;
                        }
                    }
                    else if(num3==10)
                    {
                        cout<<"Find the secret word: f o r _ _"<<endl;
                        cin>>word;
                        if(word=="force")
                        {
                            cout<<"The Force is strong with this one! You got it with "<<4-att<<" try(s)!"<<endl;
                            break;
                        }
                    }
                    att=att-1;
                }
                cout<<"Would you like to play again? Type yes or no: ";
                cin>>tryAgain;
            }
        }


//trivia
        else if(ch=="trivia")
        {
            cout<<" "<<endl;
            cout<<"Welcome to the Trivia! Choose the right answer (A,B,C or D):"<<endl;
            while(tryAgain=="yes")
            {
                cout<<" "<<endl;
                srand(time(0));
                int num4=rand()%10+1;
                string tr;
                if(num4==1)
                {
                    cout<<"How long is an Olympic swimming pool?"<<endl;
                    cout<<"A)50 meters"<<endl;
                    cout<<"B)30 meters"<<endl;
                    cout<<"C)70 meters"<<endl;
                    cout<<"D)100 meters"<<endl;
                    cin>>tr;
                    if(tr=="A"||tr=="a")
                    {
                        cout<<"Congrats! You got it right!"<<endl;
                    }
                    else
                    {
                        cout<<"Wrong! The right answer was A."<<endl;
                    }
                }
                if(num4==2)
                {
                    cout<<"What geometric shape is generally used for stop signs?"<<endl;
                    cout<<"A)Pentagon"<<endl;
                    cout<<"B)Hexagon"<<endl;
                    cout<<"C)Octagon"<<endl;
                    cout<<"D)Rhombus"<<endl;
                    cin>>tr;
                    if(tr=="C"||tr=="c")
                    {
                        cout<<"Congrats! You got it right!"<<endl;
                    }
                    else
                    {
                        cout<<"Wrong! The right answer was C."<<endl;
                    }
                }
                if(num4==3)
                {
                    cout<<"What is 'cynophobia'?"<<endl;
                    cout<<"A)Fear of fear"<<endl;
                    cout<<"B)Fear of cats"<<endl;
                    cout<<"C)Fear of dogs"<<endl;
                    cout<<"D)Fear of clowns"<<endl;
                    cin>>tr;
                    if(tr=="C"||tr=="c")
                    {
                        cout<<"Congrats! You got it right!"<<endl;
                    }
                    else
                    {
                        cout<<"Wrong! The right answer was C."<<endl;
                    }
                }
                if(num4==4)
                {
                    cout<<"What is the name of the biggest technology company in South Korea?"<<endl;
                    cout<<"A)Mojang"<<endl;
                    cout<<"B)Xiaomi"<<endl;
                    cout<<"C)Apple"<<endl;
                    cout<<"D)Samsung"<<endl;
                    cin>>tr;
                    if(tr=="D"||tr=="d")
                    {
                        cout<<"Congrats! You got it right!"<<endl;
                    }
                    else
                    {
                        cout<<"Wrong! The right answer was D."<<endl;
                    }
                }
                if(num4==5)
                {
                    cout<<"Which animal can be seen on the Porsche logo?"<<endl;
                    cout<<"A)Pegasus"<<endl;
                    cout<<"B)Horse"<<endl;
                    cout<<"C)Wolf"<<endl;
                    cout<<"D)Snake"<<endl;
                    cin>>tr;
                    if(tr=="B"||tr=="b")
                    {
                        cout<<"Congrats! You got it right!"<<endl;
                    }
                    else
                    {
                        cout<<"Wrong! The right answer was B."<<endl;
                    }
                }
                if(num4==6)
                {
                    cout<<"Which monarch officially made Valentine's Day a holiday in 1537?"<<endl;
                    cout<<"A)Edward VI"<<endl;
                    cout<<"B)William I"<<endl;
                    cout<<"C)Henry VIII"<<endl;
                    cout<<"D)Louis XIV"<<endl;
                    cin>>tr;
                    if(tr=="C"||tr=="c")
                    {
                        cout<<"Congrats! You got it right!"<<endl;
                    }
                    else
                    {
                        cout<<"Wrong! The right answer was C."<<endl;
                    }
                }
                if(num4==7)
                {
                    cout<<"Which country invented ice cream?"<<endl;
                    cout<<"A)China"<<endl;
                    cout<<"B)Italy"<<endl;
                    cout<<"C)Sweden"<<endl;
                    cout<<"D)Japan"<<endl;
                    cin>>tr;
                    if(tr=="A"||tr=="a")
                    {
                        cout<<"Congrats! You got it right!"<<endl;
                    }
                    else
                    {
                        cout<<"Wrong! The right answer was A."<<endl;
                    }
                }
                if(num4==8)
                {
                    cout<<"What was the first feature-length animated movie ever released?"<<endl;
                    cout<<"A)Cinderella"<<endl;
                    cout<<"B)Snow White and the Seven Dwarfs"<<endl;
                    cout<<"C)Tangled"<<endl;
                    cout<<"D)Toy Story"<<endl;
                    cin>>tr;
                    if(tr=="B"||tr=="b")
                    {
                        cout<<"Congrats! You got it right!"<<endl;
                    }
                    else
                    {
                        cout<<"Wrong! The right answer was B."<<endl;
                    }
                }
                if(num4==9)
                {
                    cout<<"Which country won the first-ever football World Cup in 1930?"<<endl;
                    cout<<"A)France"<<endl;
                    cout<<"B)Brazil"<<endl;
                    cout<<"C)Germany"<<endl;
                    cout<<"D)Uruguay"<<endl;
                    cin>>tr;
                    if(tr=="D"||tr=="d")
                    {
                        cout<<"Congrats! You got it right!"<<endl;
                    }
                    else
                    {
                        cout<<"Wrong! The right answer was D."<<endl;
                    }
                }
                if(num4==10)
                {
                    cout<<"What sport is dubbed the 'king of sports'?"<<endl;
                        cout<<"A)Basketball"<<endl;
                    cout<<"B)Tennis"<<endl;
                    cout<<"C)Football"<<endl;
                    cout<<"D)Volleyball"<<endl;
                    cin>>tr;
                    if(tr=="C"||tr=="c")
                    {
                        cout<<"Congrats! You got it right!"<<endl;
                    }
                    else
                    {
                        cout<<"Wrong! The right answer was C."<<endl;
                    }
                }
                cout<<"Would you like to play again? Type yes or no: ";
                cin>>tryAgain;
            }
        }


    }
    return 0;
}
