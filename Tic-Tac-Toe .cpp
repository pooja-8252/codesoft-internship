 //MADE BY KALYANI SINGH.....

#include <iostream>
using namespace std;                                                 

char square[3][3] = {'1','2','3','4','5','6','7','8','9'};                      

int console();                                                                                         
void Tic_Toc_Toe_board();                                                                        

int main()      
{
	int player = 1,i,choice;                                       

    char mark;                                                                        
    do                                                   
    {                                    
        Tic_Toc_Toe_board();
        player=(player%2)?1:2;                       
        cout<<"Let's Start the Game:"<<endl;
        cout << "Player-" << player << ", Enter a number:  ";       
        cin >> choice;           

        mark=(player == 1) ? 'X' : 'O'; //assing value to the board according to the 

        if (choice == 1 && square[0][0] == '1')            
            square[0][0] = mark;              

        else if (choice == 2 && square[0][1] == '2')
            square[0][1] = mark;

        else if (choice == 3 && square[0][2] == '3')
            square[0][2] = mark;

        else if (choice == 4 && square[1][0] == '4')
            square[1][0] = mark;

        else if (choice == 5 && square[1][1] == '5')
            square[1][1] = mark;

        else if (choice == 6 && square[1][2] == '6')
            square[1][2] = mark;

        else if (choice == 7 && square[2][0] == '7')
            square[2][0] = mark;

        else if (choice == 8 && square[2][1] == '8')
            square[2][1] = mark;

        else if (choice == 9 && square[2][2] == '9')
            square[2][2] = mark;

        else
        {
            cout<<"Error!";  

            player--;
            cin.ignore();
            cin.get();
        }
        i=console();

        player++;
    }while(i==-1);
    Tic_Toc_Toe_board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

/***************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
****************/      

int console()
{
    if (square[0][0] == square[0][1] && square[0][1] == square[0][2]) //first Row
        return 1;


    else if (square[1][0] == square[1][1] && square[1][1] == square[1][2])//Second Row
        return 1;


    else if (square[2][0] == square[2][1] && square[2][1] == square[2][2])// Third Row
        return 1;


    else if (square[0][0] == square[1][0] && square[1][0] == square[2][0])
        return 1;


    else if (square[0][1] == square[1][1] && square[1][1] == square[2][1])
        return 1;


    else if (square[0][2] == square[1][1] && square[1][2] == square[2][2])
        return 1;


    else if (square[0][0] == square[1][1] && square[1][1] == square[2][2])
        return 1;


    else if (square[0][2] == square[1][1] && square[1][1] == square[2][0])
        return 1;


    else if (square[0][0] != '1' && square[0][1] != '2' && square[0][2] != '3' 
                    && square[1][0] != '4' && square[1][1] != '5' && square[1][2] != '6' 
                  && square[2][0] != '7' && square[2][1] != '8' && square[2][2] != '9')

        return 0;
    else
        return -1;
}

void Tic_Toc_Toe_board()   //Function to draw the board of Tic-Tac-Toe.
{
    system("cls");
    cout << "\n***********Tic--Tac--Toe**********\n\n";
    cout<<"\t\t****Created by (Kid)......."<<"\n\n";

    cout << "Player 1-(X)  ||  Player 2-(O)" << endl << endl;            
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[0][0] << "  |  " << square[0][1] << "  |  " << square[0][2] << endl;

    cout << "__|_|__" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[1][0] << "  |  " << square[1][1] << "  |  " << square[1][2] << endl;

    cout << "__|_|__" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[2][0] << "  |  " << square[2][1] << "  |  " << square[2][2] << endl;

    cout << "     |     |     " << endl << endl;

}
