#include<iostream>

using namespace std;

char matrix[3][3] = { '1' , '2' , '3' , '4' , '5' , '6', '7' ,'8', '9'};
char player = 'X';
bool flag = false;
int steps = 0;
int moves = 0;
char a;
bool duplicate = false ;

void printMatrix()
{
    for ( int i = 0; i < 3; i++){
        for ( int j = 0; j < 3; j++){
            cout <<"  "<< matrix[i][j] << "  | ";
        }
            cout <<endl;
    }
}

void inputData()
{
    int m;
    cin >> m;
    if ( m == 1){
        if ( matrix[0][0] == '1'){
        matrix[0][0] = player;
        } else {
            cout <<" This slot has been used, try again";
            steps++;
            inputData();
        }
    } else if ( m == 2)
    {
        if ( matrix [0][1] == '2'){
        matrix[0][1] = player;
        } else {
            cout <<" This slot has been used, try again";
            steps++;
            inputData();
        }
    } else if ( m == 3 )
    {
        if ( matrix [0][2] == '3'){
        matrix[0][2] = player;
        } else {
            cout <<" This slot has been used, try again";
            steps++;
            inputData();
        }
    } else if ( m == 4 )
    {
        if ( matrix [1][0] == '4'){
        matrix[1][0] = player;
        } else {
            cout <<" This slot has been used, try again";
            steps++;
            inputData();
        }
    } else if ( m == 5 )
    {
        if ( matrix [1][1] == '5'){
        matrix [1][1] = player;
        } else {
            cout <<" This slot has been used, try again";
            steps++;
            inputData();
        }
    } else if ( m == 6 )
    {
        if ( matrix[1][2] == '6'){
        matrix[1][2] = player;
        } else {
            cout <<" This slot has been used, try again";
            steps++;
            inputData();
        }
    } else if ( m == 7 )
    {
        if ( matrix[2][0] == '7'){
        matrix [2][0] = player;
        } else {
            cout <<" This slot has been used, try again";
            steps++;
            inputData();
        }
    } else if ( m == 8 )
    {
        if ( matrix[2][1] == '8'){
        matrix [2][1] = player;
        } else {
            cout <<" This slot has been used, try again";
            steps++;
            inputData();
        }
    } else if ( m == 9 )
    {
        if ( matrix[2][2] == '9'){
        matrix [2][2] = player;
        } else {
            cout <<" This slot has been used, try again";
            steps++;
            inputData();
        }
    }
    moves ++;
}

void playerTurn()
{
    if ( player == 'O'){
        cout << "Player X turn : " << endl;
    } else
    if ( player == 'X'){
        cout << "Player O turn :" << endl;
    }
}

void playerRotation()
{
    if ( player == 'X' )
    {
        player = 'O';
    } else {
        player = 'X';
    }
}

void turn()
{
    cout << "Who will go first ? "<<endl;
    cout << "Press 'x' to become X"<<endl;
    cout << "Press 'o' to become O"<<endl;
    cin >> a;
    if ( a == 'x'){
        player = 'X';
    } else if ( a == 'o'){
        player = 'O';
    }
}

void winCondition()
{
       if (matrix[0][0] == matrix[0][1] && matrix [0][0] == matrix[0][2]){
        flag = true;
       }
       if (matrix[0][0] == matrix[1][1] && matrix [0][0] == matrix[2][2]){
        flag = true;
       }
       if (matrix[0][0] == matrix[1][0] && matrix [0][0] == matrix[2][0]){
        flag = true;
       }
       if (matrix[1][0] == matrix[1][1] && matrix [1][0] == matrix[1][2]){
        flag = true;
       }
       if (matrix[2][0] == matrix[2][1] && matrix [2][0] == matrix[2][2]){
        flag = true;
       }
       if (matrix[0][2] == matrix[1][1] && matrix [0][2] == matrix[2][0]){
        flag = true;
       }
       if (matrix[0][1] == matrix[1][1] && matrix [0][1] == matrix[2][1]){
        flag = true;
       }
       if (matrix[0][2] == matrix[1][2] && matrix [0][2] == matrix[2][2]){
        flag = true;
       }
}

void winingPlayer()
{
    if ( steps % 2 == 0){
        cout << "       Player O is the wiwner!" << endl;
    } else
    {
        cout << "       Player X is the wiwner!" << endl;
    }
}

int main()
{
    turn();

    while ( flag == false ){
        printMatrix();
        inputData();
        playerTurn();
        playerRotation();
        winCondition();
        //steps ++;
        steps++;
        if ( flag == true){
            winingPlayer();
            printMatrix();
        }
        if ( moves == 9){
            cout << "Out of moves";
            break;
        }
    }
    return 0;
}
