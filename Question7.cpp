//Accept three scores  and indentify the winner


#include<iostream>
int main(){
    int score1,score2,score3;
    std::cout<<"Enter the score of first player: ";
    std::cin>>score1;
    std::cout<<"Enter the score of second player: ";
    std::cin>>score2;
    std::cout<<"Enter the score of third player: ";
    std::cin>>score3;
    if(score1>score2 && score1>score3){
        std::cout<<"Player 1 is the winner";
    }
    else
     if(score2>score1 && score2>score3){
        std::cout<<"Player 2 is the winner ";
     }
     else
     {
        std::cout<<"Player 3 is the winner";
     }
     return 0;
}
