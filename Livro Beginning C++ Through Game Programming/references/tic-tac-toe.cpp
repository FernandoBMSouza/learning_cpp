// Tic-Tac-Toe
// Plays the game of tic-tac-toe against a human opponent
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// global constants
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

// function prototypes
void instructions();
char askYesNo(string question);
int askNumber(string question, int high, int low = 0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(const vector<char>& board, int move);
int humanMove(const vector<char>& board);
int computerMove(vector<char> board, char computer);
void announceWinner(char winner, char computer, char human);

// main function
int main()
{
    int move;
    const int NUM_SQUARES = 9;
    vector<char> board(NUM_SQUARES, EMPTY);
    instructions();
    char human = humanPiece();
    char computer = opponent(human);
    char turn = X;
    displayBoard(board);

    while (winner(board) == NO_ONE)
    {
        if (turn == human)
        {
            move = humanMove(board);
            board[move] = human;
        }
        else
        {
            move = computerMove(board, computer);
            board[move] = computer;
        }
        displayBoard(board);
        turn = opponent(turn);
    }
    announceWinner(winner(board), computer, human);
    return 0;
}


// Mostra as instruções do jogo de forma bem engraçadinha
void instructions()
{
    cout << "\nWelcome to the ultimate man-machine showdown: Tic-Tac-Toe.\n";
    cout << "--where human brain is pit against silicon processor\n\n";

    cout << "Make your move know by entering a number, 0 - 8. The number\n";
    cout << "corresponds to the desired board position, as illustrated:\n\n";

    cout << " 0 | 1 | 2\n";
    cout << " ---------\n";
    cout << " 3 | 4 | 5\n";
    cout << " ---------\n";
    cout << " 6 | 7 | 8\n\n";

    cout << "Prepare yourself, human. The battle is about to begin.\n\n";
}

// repete ate o user digitar y ou n
char askYesNo(string question)
{
    char response;
    do
    {
        cout << question << " (y/n): ";
        cin >> response;
    } while (response != 'y' && response != 'n');
    return response;
}

// repete até o user digitar um numero entre low e high
int askNumber(string question, int high, int low)
{
    int number;
    do
    {
        cout << question << " (" << low << " - " << high << "):";
        cin >> number;
    } while (number > high || number < low);
    return number;
}

// Pergunta se o player que jogar primeiro e selciona a peça do jogador
char humanPiece()
{
    char go_first = askYesNo("Do you require the first move?");
    if(go_first == 'y')
    {
        cout << "\nThen take the first move. You will need it.\n";
        return X;
    }
    else
    {
        cout << "\nYour bravery will be your undoing...I will go first.\n";
        return O;
    }
}

//Dá a outra peça para a máquina
char opponent(char piece)
{
    if (piece == X)
    {
        return O;
    }
    else
    {
        return X;
    }
}

//Exibe o tabuleiro
void displayBoard(const vector<char>& board)
{
    cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
    cout << "\n\t" << "---------";
    cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
    cout << "\n\t" << "---------";
    cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
    cout << "\n\n";
}

//Função para condição de vitória/empate
char winner(const vector<char>& board)
{
    // all possible winning rows
    const int WINNING_ROWS[8][3] = {    {0, 1, 2},
                                        {3, 4, 5},
                                        {6, 7, 8},
                                        {0, 3, 6},
                                        {1, 4, 7},
                                        {2, 5, 8},
                                        {0, 4, 8},
                                        {2, 4, 6} };
    
    const int TOTAL_ROWS = 8;

    //if any winning row has three values that are the same (and not EMPTY),
    //then we have a winner
    for(int row = 0; row < TOTAL_ROWS; ++row)
    {
        if ((board[WINNING_ROWS[row][0]] != EMPTY) &&
            (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) &&
            (board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]])
        )
        {
            return board[WINNING_ROWS[row][0]];
        }
    }

    //since nobody has won, check for a tie (no empty squares left)
    if (count(board.begin(), board.end(), EMPTY) == 0)
        return TIE;

    return NO_ONE;
}


//Função checa se o local escolhido está vazio e pode ser preenchido com um lance
inline bool isLegal(int move, const vector<char>& board)
{
    return (board[move] == EMPTY);
}

//Pergunta um movimento pro jogado até passar um movimento válido para ser retornado
int humanMove(const vector<char>& board)
{
    int move = askNumber("Where will you move?", (board.size() - 1));
    while(!isLegal(move, board))
    {
        cout << "\nThat square is already occupied, foolish human.\n";
        move = askNumber("Where will you move?", (board.size() - 1));
    }
    cout << "Fine...\n";

    return move;
}

//Recebe o tabuleiro e uma peça e retorna o movimento do computador
//Aqui o tabuleiro não é passado como referencia, pois será utilizada uma cópia do tabuleiro para determinar qual o melhor movimento para a máquina
int computerMove(vector<char> board, char computer)
{
    unsigned int move = 0;
    bool found = false;
    //if computer can win on next move, that’s the move to make
    while (!found && move < board.size())
    {
        if (isLegal(move, board))
        {
            board[move] = computer;
            found = winner(board) == computer;
            board[move] = EMPTY;
        }

        if(!found)
        {
            ++move;
        }
    }

    if (!found)
    {
        move = 0;
        char human = opponent(computer);
        while(!found && move < board.size())
        {
            if(isLegal(move, board))
            {
                board[move] = human;
                found = winner(board) == human;
                board[move] = EMPTY;
            }

            if(!found)
            {
                ++move;
            }
        }
    }

    if(!found)
    {
        move = 0;
        unsigned int i = 0;

        const int BEST_MOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};
        while(!found && i < board.size())
        {
            move = BEST_MOVES[i];
            if(isLegal(move, board))
            {
                found = true;
            }
            ++i;
        }
    }

    cout << "I shall take square number " << move << endl;
    return move;
}

//Declara o vencedor ou empate
void announceWinner(char winner, char computer, char human)
{
    if(winner == computer)
    {
        cout << winner << "'s won!\n";
        cout << "As I predicted, human, I am triumphant once more -- proof\n";
        cout << "that computers are superior to humans in all regards.\n";
    }
    else if(winner == human)
    {
        cout << winner << "'s won!\n";
        cout << "No, no! It cannot be! Somehow you tricked me, human.\n";
        cout << "But never again! I, the computer, so swear it!\n";
    }
    else
    {
        cout << "It's a tie.\n";
        cout << "You were most lucky, human, and somehow managed to tie me.\n";
        cout << "Celebrate...for this is the best you will ever achieve.\n";
    }
}