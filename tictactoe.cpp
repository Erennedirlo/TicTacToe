#include<bits/stdc++.h>
using namespace std;

void create_board();
void mark_board(int, int);
int check_winner();

char board[10]={'1','2','3','4','5','6','7','8','9'};

int main(){
    create_board();
    cout<<"Welcome to Tic-Tac-Toe!"<<endl;
    cout<<"Player 1 is X and Player 2 is O"<<endl;
    for(int i=0;check_winner()==-1;++i){
        if(i==9){
            cout<<"The game is draw!"<<endl;
            break;
        }
        if(i%2==0){
            cout<<"Player 1: ";
        }
        else{
            cout<<"Player 2: ";
        }
        int tmp;
        cin>>tmp;
        mark_board(tmp, i);
        create_board();
        
    }
    scanf(" %c",&board[0]);
    return 0;
}

void create_board(){
    system("cls");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",board[0], board[1], board[2]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",board[3], board[4], board[5]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",board[6], board[7], board[8]);
    printf("   |   |   \n");
}

void mark_board(int a, int turn){
    if(board[a-1]<='9' && board[a-1]>='1'){
        board[a-1]=(turn%2?'O':'X');
    }
    else{
        cout<<"That is already marked! Please enter again: ";
        cin>>a;
        mark_board(a, turn);
    }
}

int check_winner(){
    if(board[0]==board[1] && board[0]==board[2]){
        board[0]=='X'?cout<<"Player 1 Won!":cout<<"Player 2 Won!"; return 0;}
    if(board[3]==board[4] && board[3]==board[5]){
        board[3]=='X'?cout<<"Player 1 Won!":cout<<"Player 2 Won!"; return 0;}
    if(board[6]==board[7] && board[6]==board[8]){
        board[6]=='X'?cout<<"Player 1 Won!":cout<<"Player 2 Won!"; return 0;}
    if(board[0]==board[4] && board[0]==board[8]){
        board[0]=='X'?cout<<"Player 1 Won!":cout<<"Player 2 Won!"; return 0;}
    if(board[2]==board[4] && board[2]==board[6]){
        board[2]=='X'?cout<<"Player 1 Won!":cout<<"Player 2 Won!"; return 0;}
    if(board[0]==board[3] && board[0]==board[6]){
        board[0]=='X'?cout<<"Player 1 Won!":cout<<"Player 2 Won!"; return 0;}
    if(board[1]==board[4] && board[1]==board[7]){
        board[1]=='X'?cout<<"Player 1 Won!":cout<<"Player 2 Won!"; return 0;}
    if(board[2]==board[5] && board[2]==board[8]){
        board[2]=='X'?cout<<"Player 1 Won!":cout<<"Player 2 Won!"; return 0;}
    return -1;
}