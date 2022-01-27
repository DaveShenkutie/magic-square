#include <iostream>
#include <stdlib.h>
#include<windows.h>
#include<math.h>
#include<conio.h>
using namespace std;
struct MagicSquareNode
{
    //to hold the the 8 possibilities of the 3x3 Magic square
    int MagicSquareTable[3][3];
    MagicSquareNode *next;
}*head = NULL;

int choice1,choice2;
void inserting();
void PossibleMagicSquareTables();
void NormalLevel();
void BeginnerLevel();
void IntermedateLevel();
void AdvancedLevel();
void MainMenu();
void Levels();

int main()
{
    char answer;
      system("color 1d");
    cout<<"\n\t\t**************************************\n";
    cout << "\t\t*\t      WELCOME...             *" << endl;
    cout << "\t\t*\t  The MAGIC SQUARE           *"<<endl;
    cout << "\t\t*\t\t\t\t     *"<<endl;
    cout<<"\t\t**************************************\n";
    do{
            cout<<"Press any key to continue...";getch();
        system("cls");
        system("color 2f");
        MainMenu();
        if(choice1==1)
        {
           char Levelchange;
           do{
                system("cls");
                system("color 1e");
                Levels();
                if(choice2==1)
                {
                   system("color 2e");
                   BeginnerLevel();
                }
                else if(choice2==2)
                {
                     system("color 5e");
                    NormalLevel();
                }
                else if(choice2==3)
                {
                     system("color 6e");
                    IntermedateLevel();
                }
                else if(choice2==4)
                {
                     system("color 4e");
                    AdvancedLevel();
                }
                else
                {
                    cout << "Incorrect Input "<<endl;
                }
                cout<<"Do you want to change the Level of the Game [y/n]: ";
                cin>>Levelchange;
                Levelchange=toupper(Levelchange);
           }while(Levelchange=='Y');
        }
        else if(choice1==2)
        {
            cout<<"We will Describe the \n\t-> Rules and Regulations \n\t->Rewards and \n\t-> what each levels Are here \n";
        }
        else if(choice1==3)
        {
            cout<<"Exited...";
            exit(1);
        }
        else
        {
            cout << "Incorrect Input "<<endl;
        }
        cout << "Back to Main Menu[y/n] ? ";
        cin >> answer;
        answer=toupper(answer);
    }while (answer=='Y' );
   return 0;
}
void MainMenu()
{
    //interface for the general layout of the Game
    cout<<"\n\t\t**************************************\n\t\t*\t\t\t             *";
    cout<<"\n\t\t*\t    Main Menu                *\n";
    cout<<"\t\t*\t==============               *\n\t\t*\t\t\t\t     *\n\t\t*\t";
    cout<<"\t\t\t     *\n\t\t*\t1.Play                       *\n\t\t*\t\t\t             *\n\t\t*\t";
    cout<<"\t\t\t     *\n\t\t*\t2.About the Game             *\n\t\t*\t\t\t             *\n\t\t*\t";
    cout<<"\t\t\t     *\n\t\t*\t3.Exit                       *\n\t\t*\t\t\t             *\n\t\t*\t\t\t\t     *";
    cout<<"\n\t\t**************************************\n";
    cout << "\t\tChoice: ";cin>> choice1;

}
void Levels()
{
    //Interface for the levels of the game
    cout<<"\n\t\t**************************************\n\t\t*\t\t\t             *";
    cout<<"\n\t\t*\t    Levels                   *\n";
    cout<<"\t\t*\t==============               *\n\t\t*\t\t\t\t     *\n\t\t*\t";
    cout<<"\t\t\t     *\n\t\t*\t1.Beginner                   *\n\t\t*\t\t\t             *\n\t\t*\t";
    cout<<"\t\t\t     *\n\t\t*\t2.Normal                     *\n\t\t*\t\t\t             *\n\t\t*\t";
    cout<<"\t\t\t     *\n\t\t*\t3.Intermediate               *\n\t\t*\t\t\t             *\n\t\t*\t";
    cout<<"\t\t\t     *\n\t\t*\t4.Advanced                   *\n\t\t*\t\t\t             *\n\t\t*\t\t\t\t     *";
    cout<<"\n\t\t**************************************\n";
    cout << "\t\tChoice: ";cin>> choice2;
}
void inserting(MagicSquareNode *newnode)
{
    //to insert the 8 possibilities of the Magic square in a consecutive Nodes
    if (head == NULL)
    {
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
        MagicSquareNode *temp= head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
}
void PossibleMagicSquareTables ()
{
    //to create each Node and send to the inserting function
    MagicSquareNode *newnode= new MagicSquareNode ;
    newnode->MagicSquareTable[0][0]=8;
    newnode->MagicSquareTable[0][1]=1;
    newnode->MagicSquareTable[0][2]=6;
    newnode->MagicSquareTable[1][0]=3;
    newnode->MagicSquareTable[1][1]=5;
    newnode->MagicSquareTable[1][2]=7;
    newnode->MagicSquareTable[2][0]=4;
    newnode->MagicSquareTable[2][1]=9;
    newnode->MagicSquareTable[2][2]=2;
    inserting(newnode);

    MagicSquareNode *newnode2= new MagicSquareNode ;
    newnode2->MagicSquareTable[0][0]=6;
    newnode2->MagicSquareTable[0][1]=1;
    newnode2->MagicSquareTable[0][2]=8;
    newnode2->MagicSquareTable[1][0]=7;
    newnode2->MagicSquareTable[1][1]=5;
    newnode2->MagicSquareTable[1][2]=3;
    newnode2->MagicSquareTable[2][0]=2;
    newnode2->MagicSquareTable[2][1]=9;
    newnode2->MagicSquareTable[2][2]=4;
    inserting(newnode2);

    MagicSquareNode *newnode3= new MagicSquareNode ;
    newnode3->MagicSquareTable[0][0]=4;
    newnode3->MagicSquareTable[0][1]=9;
    newnode3->MagicSquareTable[0][2]=2;
    newnode3->MagicSquareTable[1][0]=9;
    newnode3->MagicSquareTable[1][1]=5;
    newnode3->MagicSquareTable[1][2]=7;
    newnode3->MagicSquareTable[2][0]=8;
    newnode3->MagicSquareTable[2][1]=1;
    newnode3->MagicSquareTable[2][2]=6;
    inserting(newnode3);

    MagicSquareNode *newnode4= new MagicSquareNode ;
    newnode4->MagicSquareTable[0][0]=2;
    newnode4->MagicSquareTable[0][1]=9;
    newnode4->MagicSquareTable[0][2]=4;
    newnode4->MagicSquareTable[1][0]=7;
    newnode4->MagicSquareTable[1][1]=5;
    newnode4->MagicSquareTable[1][2]=3;
    newnode4->MagicSquareTable[2][0]=6;
    newnode4->MagicSquareTable[2][1]=1;
    newnode4->MagicSquareTable[2][2]=8;
    inserting(newnode4);


    MagicSquareNode *newnode5= new MagicSquareNode ;
    newnode5->MagicSquareTable[0][0]=8;
    newnode5->MagicSquareTable[0][1]=3;
    newnode5->MagicSquareTable[0][2]=4;
    newnode5->MagicSquareTable[1][0]=1;
    newnode5->MagicSquareTable[1][1]=5;
    newnode5->MagicSquareTable[1][2]=9;
    newnode5->MagicSquareTable[2][0]=6;
    newnode5->MagicSquareTable[2][1]=7;
    newnode5->MagicSquareTable[2][2]=2;
    inserting(newnode5);

    MagicSquareNode *newnode6= new MagicSquareNode ;
    newnode6->MagicSquareTable[0][0]=4;
    newnode6->MagicSquareTable[0][1]=3;
    newnode6->MagicSquareTable[0][2]=8;
    newnode6->MagicSquareTable[1][0]=9;
    newnode6->MagicSquareTable[1][1]=5;
    newnode6->MagicSquareTable[1][2]=1;
    newnode6->MagicSquareTable[2][0]=2;
    newnode6->MagicSquareTable[2][1]=7;
    newnode6->MagicSquareTable[2][2]=6;
    inserting(newnode6);

    MagicSquareNode *newnode7= new MagicSquareNode ;
    newnode7->MagicSquareTable[0][0]=6;
    newnode7->MagicSquareTable[0][1]=7;
    newnode7->MagicSquareTable[0][2]=2;
    newnode7->MagicSquareTable[1][0]=1;
    newnode7->MagicSquareTable[1][1]=5;
    newnode7->MagicSquareTable[1][2]=9;
    newnode7->MagicSquareTable[2][0]=8;
    newnode7->MagicSquareTable[2][1]=3;
    newnode7->MagicSquareTable[2][2]=4;
    inserting(newnode7);

    MagicSquareNode *newnode8= new MagicSquareNode ;
    newnode8->MagicSquareTable[0][0]=2;
    newnode8->MagicSquareTable[0][1]=7;
    newnode8->MagicSquareTable[0][2]=6;
    newnode8->MagicSquareTable[1][0]=9;
    newnode8->MagicSquareTable[1][1]=5;
    newnode8->MagicSquareTable[1][2]=1;
    newnode8->MagicSquareTable[2][0]=4;
    newnode8->MagicSquareTable[2][1]=3;
    newnode8->MagicSquareTable[2][2]=8;
    inserting(newnode8);
}
void NormalLevel()
{
    /*to Select a random table from the Nodes and to play the
    game by making some cells of the table empty */

    system("cls");
    int test [3];
    char ans;
    do{
            system("cls");
        PossibleMagicSquareTables();
        MagicSquareNode *temp=head;
        int RandomNode=abs((rand()%10)-8),randomCell,missing [6],randStore[3], t=0;

        for (int row=0;row<RandomNode;row++)
        {
            temp= temp->next;
        }
        cout << "\t     1   2   3 "<<endl;
        for (int row=0;row<3;++row)
        {
            randomCell= rand()%3;
            randStore[row]=randomCell;
            cout << "\t     ____________"<<endl;
            cout<<"\t" <<row+1<<"   ";
            for (int column=0;column<3;++column)
            {
                if(column==randomCell)
                {
                    test[row]=temp->MagicSquareTable[row][randomCell];
                    missing [t]= row;
                    t++;
                    missing [t]= randomCell;
                    t++;
                    cout << "|   ";
                }
                else
                {
                    cout <<"| " << temp->MagicSquareTable[row][column]<<" ";
                }
            }
            cout<<"|\n";
        }
        cout << "\t     ____________"<<endl;
    int check[3];
    cout << "\nEnter the missing number at ("<< missing[0]+1<<","<<missing[1]+1 <<"): ";
    cin >>check[0];
    //to add the entered number to the table
    system("cls");
        cout << "\t     1   2   3 "<<endl;
        for (int row=0;row<3;++row)
        {
            cout << "\t     ____________"<<endl;
            cout<<"\t" <<row+1<<"   ";
            for (int column=0;column<3;++column)
            {
                if((row==1)&&(column==randStore[1]))
                {
                  cout << "|   ";
                }
                else if((row==2)&&(column==randStore[2]))
                {
                  cout << "|   ";
                }
                else
                {
                    if((row==0)&&(column==randStore[0]))
                    {
                        cout <<"| "<<check[0]<<" ";
                    }
                    else
                        cout <<"| "<<temp->MagicSquareTable[row][column]<<" ";
                }
            }
            cout<<"|\n";
        }
        cout << "\t     ____________"<<endl;
        while(check[0]!=test[0])
        {
            cout<<"The entered number doesn't obey the rule of the game.Try again.";
            cout << "\nChange the Number at ("<< missing[0]+1<<","<<missing[1]+1 <<"): ";
            cin >>check[0];
            //to add the entered number to the table
            system("cls");
            cout << "\t     1   2   3 "<<endl;
        for (int row=0;row<3;++row)
        {
            cout << "\t     ____________"<<endl;
            cout<<"\t" <<row+1<<"   ";
            for (int column=0;column<3;++column)
            {
                if((row==1)&&(column==randStore[1]))
                {
                  cout << "|   ";
                }
                else if((row==2)&&(column==randStore[2]))
                {
                  cout << "|   ";
                }
                else
                {
                  if((row==0)&&(column==randStore[0]))
                    {
                        cout <<"| "<<check[0]<<" ";
                    }
                    else
                        cout <<"| "<<temp->MagicSquareTable[row][column]<<" ";
                }
            }
            cout<<"|\n";
        }
        cout << "\t     ____________"<<endl;
        }

        cout << "Enter the missing number at ("<<missing[2]+1<<","<<missing[3]+1<<"): ";
        cin >>check[1];
        //to add the entered number to the table
        system("cls");
        cout << "\t     1   2   3 "<<endl;
        for (int row=0;row<3;++row)
        {
            cout << "\t     ____________"<<endl;
            cout<<"\t" <<row+1<<"   ";
            for (int column=0;column<3;++column)
            {
                if((row==2)&&(column==randStore[2]))
                {
                  cout<< "|   ";
                }
                else
                {
                   if((row!=0)&&column==randStore[1])
                    {
                        cout <<"| "<<check[1]<<" ";
                    }
                    else
                        cout <<"| "<<temp->MagicSquareTable[row][column]<<" ";
                }
            }
            cout<<"|\n";
        }
        cout << "\t     ____________"<<endl;

        while(check[1]!=test[1])
        {
            cout<<"The entered number doesn't obey the rule of the game.Try again.";
            cout << "\nChange the Number at ("<< missing[2]+1<<","<<missing[3]+1 <<"): ";
            cin >>check[1];
            system("cls");
            cout << "\t     1   2   3 "<<endl;
            for (int row=0;row<3;++row)
            {
                cout << "\t     ____________"<<endl;
                cout<<"\t" <<row+1<<"   ";
                for (int column=0;column<3;++column)
                {
                    if((row==2)&&(column==randStore[2]))
                    {
                      cout<< "|   ";
                    }
                    else
                    {
                       if((row!=0)&&column==randStore[1])
                        {
                            cout <<"| "<<check[1]<<" ";
                        }
                        else
                            cout <<"| "<<temp->MagicSquareTable[row][column]<<" ";
                    }
                }
                cout<<"|\n";
            }
            cout << "\t     ____________"<<endl;
        }
        cout << "Enter the missing number at ("<<missing[4]+1<<","<<missing[5]+1<<"): ";
        cin >>check[2];

        while(check[2]!=test[2])
        {
            system("cls");
            cout << "\t     1   2   3 "<<endl;
            for (int row=0;row<3;++row)
            {
                cout << "\t     ____________"<<endl;
                cout<<"\t" <<row+1<<"   ";
                for (int column=0;column<3;++column)
                {
                   if((row==2)&&column==randStore[2])
                    {
                        cout <<"| "<<check[2]<<" ";
                    }
                    else
                        cout <<"| "<<temp->MagicSquareTable[row][column]<<" ";
                }
                cout<<"|\n";
            }
            cout << "\t     ____________"<<endl;
            cout<<"\nThe entered number doesn't obey the rule of the game.Try again.";
            cout << "\nChange the Number at ("<< missing[4]+1<<","<<missing[5]+1 <<"): ";
            cin >>check[2];
        }

    if (check[0]==test[0] && check[1]==test[1] && check[2]==test[2])
    {
        system("cls");
        cout << "\n\t\tCongratulation,  you did it !!!"<< endl;
         for (int row=0;row<3;++row)
            {
                cout << "\t\t____________"<<endl;
                cout<<"\t\t";
                for (int column=0;column<3;++column)
                {
                cout << "| "<< temp->MagicSquareTable[row][column]<< " ";
                }
                cout << "|  =15\n";
            }
            cout << "\t\t ____________\n\n";
            cout << "\t      //  ||  ||  ||  \\\\\n\n";
            cout << "\t     15   15  15  15    15\n\n";
    }
    else
        cout << "\n\t\tSorry try again !!!! "<< endl;

    cout<<"Press any key to continue...";getch();
    cout << "\nDo you want to Play Again [y/n]:";
    cin >> ans;
    ans=toupper(ans);
    }while (ans=='Y');
}

void BeginnerLevel()
{
    /*In order to play the game by prompting the player to choose the missed
     numbers of the table form the given Missed values*/
    char ans;
    int test[3];
    do{
        system("cls");
        PossibleMagicSquareTables();
        MagicSquareNode *temp=head;
        int RandomNode=abs((rand()%10)-8),randomCell,missing [6],randStore[3], t=0;

        for (int row=0;row<RandomNode;row++)
        {
            temp= temp->next;
        }
        cout << "\t     1   2   3 "<<endl;
        for (int row=0;row<3;++row)
        {
            randomCell= rand()%3;
            randStore[row]=randomCell;
            cout << "\t     ____________"<<endl;
            cout<<"\t" <<row+1<<"   ";
            for (int column=0;column<3;++column)
            {
                if(column==randomCell)
                {
                    test[row]=temp->MagicSquareTable[row][randomCell];
                    missing [t]= row;
                    t++;
                    missing [t]= randomCell;
                    t++;
                    cout << "|   ";
                }
                else
                {
                    cout <<"| " << temp->MagicSquareTable[row][column]<<" ";
                }
            }
            cout<<"|\n";
        }
        cout << "\t     ____________"<<endl;
        cout << "\n\t     Missing Numbers:"<<test[1]<<" , "<<test[0]<<" and "<<test[2]<<endl;

    int check[3];
    cout << "\nChoose from the above numbers to fill ("<< missing[0]+1<<","<<missing[1]+1 <<"): ";
    cin >>check[0];
    system("cls");
        cout << "\t     1   2   3 "<<endl;
        for (int row=0;row<3;++row)
        {
            cout << "\t     ____________"<<endl;
            cout<<"\t" <<row+1<<"   ";
            for (int column=0;column<3;++column)
            {
                if((row==1)&&(column==randStore[1]))
                {
                  cout << "|   ";
                }
                else if((row==2)&&(column==randStore[2]))
                {
                  cout << "|   ";
                }
                else
                {
                    if((row==0)&&(column==randStore[0]))
                    {
                        cout <<"| "<<check[0]<<" ";
                    }
                    else
                        cout <<"| "<<temp->MagicSquareTable[row][column]<<" ";
                }
            }
            cout<<"|\n";
        }
        cout << "\t     ____________"<<endl;
        while(check[0]!=test[0])
        {
            cout << "\n\t     Missing Numbers:"<<test[1]<<" , "<<test[0]<<" and "<<test[2]<<endl;
            cout<<"sorry your choice doesn't obey the rule of the game.Try again.";
            cout << "\nChange the Number at ("<< missing[0]+1<<","<<missing[1]+1 <<"): ";
            cin >>check[0];
            //to add the entered number to the table
            system("cls");
            cout << "\t     1   2   3 "<<endl;
        for (int row=0;row<3;++row)
        {
            cout << "\t     ____________"<<endl;
            cout<<"\t" <<row+1<<"   ";
            for (int column=0;column<3;++column)
            {
                if((row==1)&&(column==randStore[1]))
                {
                  cout << "|   ";
                }
                else if((row==2)&&(column==randStore[2]))
                {
                  cout << "|   ";
                }
                else
                {
                  if((row==0)&&(column==randStore[0]))
                    {
                        cout <<"| "<<check[0]<<" ";
                    }
                    else
                        cout <<"| "<<temp->MagicSquareTable[row][column]<<" ";
                }
            }
            cout<<"|\n";
        }
        cout << "\t     ____________"<<endl;
        }
        cout << "Choose from the above numbers to fill ("<<missing[2]+1<<","<<missing[3]+1<<"): ";
        cin >>check[1];
        system("cls");
        cout << "\t     1   2   3 "<<endl;
        for (int row=0;row<3;++row)
        {
            cout << "\t     ____________"<<endl;
            cout<<"\t" <<row+1<<"   ";
            for (int column=0;column<3;++column)
            {
                if((row==2)&&(column==randStore[2]))
                {
                  cout<< "|   ";
                }
                else
                {
                   if((row!=0)&&column==randStore[1])
                    {
                        cout <<"| "<<check[1]<<" ";
                    }
                    else
                        cout <<"| "<<temp->MagicSquareTable[row][column]<<" ";
                }
            }
            cout<<"|\n";
        }
        cout << "\t     ____________"<<endl;

        while(check[1]!=test[1])
        {
             cout << "\n\t     Missing Numbers:"<<test[1]<<" , "<<test[0]<<" and "<<test[2]<<endl;
            cout<<"sorry your choice doesn't obey the rule of the game.Try again.";
            cout << "\nChange the Number at ("<< missing[2]+1<<","<<missing[3]+1 <<"): ";
            cin >>check[1];
            system("cls");
            cout << "\t     1   2   3 "<<endl;
            for (int row=0;row<3;++row)
            {
                cout << "\t     ____________"<<endl;
                cout<<"\t" <<row+1<<"   ";
                for (int column=0;column<3;++column)
                {
                    if((row==2)&&(column==randStore[2]))
                    {
                      cout<< "|   ";
                    }
                    else
                    {
                       if((row!=0)&&column==randStore[1])
                        {
                            cout <<"| "<<check[1]<<" ";
                        }
                        else
                            cout <<"| "<<temp->MagicSquareTable[row][column]<<" ";
                    }
                }
                cout<<"|\n";
            }
            cout << "\t     ____________"<<endl;
        }

        cout << "\n\t     Missing Numbers:"<<test[1]<<" , "<<test[0]<<" and "<<test[2]<<endl;
        cout << "Enter your choice to fill the missing number at ("<<missing[4]+1<<","<<missing[5]+1<<"): ";
        cin >>check[2];


        while(check[2]!=test[2])
        {
            system("cls");
            cout << "\t     1   2   3 "<<endl;
            for (int row=0;row<3;++row)
            {
                cout << "\t     ____________"<<endl;
                cout<<"\t" <<row+1<<"   ";
                for (int column=0;column<3;++column)
                {
                   if((row==2)&&column==randStore[2])
                    {
                        cout <<"| "<<check[2]<<" ";
                    }
                    else
                        cout <<"| "<<temp->MagicSquareTable[row][column]<<" ";
                }
                cout<<"|\n";
            }
            cout << "\t     ____________"<<endl;
            cout << "\n\t     Missing Numbers:"<<test[1]<<" , "<<test[0]<<" and "<<test[2]<<endl;
            cout<<"sorry your choice doesn't obey the rule of the game.Try again.";
            cout << "\nChange the Number at ("<< missing[4]+1<<","<<missing[5]+1 <<"): ";
            cin >>check[2];
        }

    if (check[0]==test[0] && check[1]==test[1] && check[2]==test[2])
        {
            system("cls");
            cout<<"\n\n      ******************************************\n      *\t\t\t\t\t\t*";
            cout << "\n      *\t\tCongratulation,  you did it !!!\t*"<< endl;
             for (int row=0;row<3;++row)
            {
                cout<<"      *\t\t____________\t\t\t*"<<endl;
                cout<<"      *\t\t";
                for (int column=0;column<3;++column)
                {
                cout << "| "<< temp->MagicSquareTable[row][column]<< " ";
                }
                cout << "|  =15\n";
            }
            cout<<"      *\t\t ____________\n      *\t\t\t\t\t\t*\n";
            cout<<"      *\t      //  ||  ||  ||  \\\\\n      *\t\t\t\t\t\t*\n";
            cout<<"      *\t     15   15  15  15    15\n      *\t\t\t\t\t\t* \n";
            cout<<"      ******************************************\n";
        }
        else
            cout << "\n\t\tSorry try again !!!! "<< endl;
    cout<<"Press any key to continue...";getch();
    system("cls");
    cout << "\nDo you want to Play Again [y/n]:";
    cin >> ans;
    ans=toupper(ans);
    }while (ans=='Y');
}

void IntermedateLevel()
{
    /*prompt the player to play the game by giving at most 4 random
    elements of the table , while hiding the rest */

    system("cls");
    char ans;
    cout << "\ welcome to the Intermediate level \n\n";
    cout<<"Press any key to continue...";getch();
    do{
        system("cls");
        PossibleMagicSquareTables();
        MagicSquareNode *temp=head;
        int RandomNode=abs((rand()%10)-8),randomRow=rand()%3,randomCell=rand()%3,check[3][3];
        for (int row=0;row<RandomNode;row++)
        {
            temp= temp->next;
        }
        cout<<randomCell<<randomRow<<endl;

        cout << "\t A    1   2   3 "<<endl;
        for (int row=0;row<3;++row)
        {
            cout << "\t     ____________"<<endl;
            cout<<"\t"<<row+1<<"   ";
            for (int column=0;column<3;++column)
            {
                if((column==randomCell&&row==randomRow)||(row==column))
                {
                    cout <<"| " << temp->MagicSquareTable[row][column]<<" ";
                }
                else
                {
                    cout <<"|   ";
                }
            }

            cout<<"|\n";
        }
        cout << "\t     ____________"<<endl;
        for(int row=0;row<3;++row)
        {
            for(int column=0;column<3;++column)
            {
                int reserveFilledCell[2];
                reserveFilledCell[0]=row;
                reserveFilledCell[1]=column;
                if((column!=randomCell||row!=randomRow)&&(row!=column))
                {
                    cout<<"Enter A"<<row+1<<column+1<<": ";
                    cin>>check[row][column];
                   system("cls");
                    cout << "\t A    1   2   3 "<<endl;
                    for (int row=0;row<3;++row)
                    {
                        cout << "\t     ____________"<<endl;
                        cout<<"\t"<<row+1<<"   ";
                        for (int column=0;column<3;++column)
                        {
                            if((column==randomCell&&row==randomRow)||(column==row)||(row==reserveFilledCell[0]&&reserveFilledCell[1]==column))
                            {
                                cout <<"| " << temp->MagicSquareTable[row][column]<<" ";
                            }
                            else
                            {
                                cout <<"|   ";
                            }
                        }

                        cout<<"|\n";
                    }
                    cout << "\t     ____________"<<endl;
                }

                else
                    check[row][column]=temp->MagicSquareTable[row][column];
            }
        }
        bool verify=true;
        for(int row=0;row<3;++row)
        {
            for(int column=0;column<3;++column)
            {
                if(check[row][column]==temp->MagicSquareTable[row][column])
                    continue;
                else
                {
                    verify=false;
                    break;
                }
            }
        }
        if(verify==true)
        {
            cout<<"\n\n      ******************************************\n      *\t\t\t\t\t\t*";
            cout << "\n      *\t\tCongratulation,  you did it !!!\t*"<< endl;
             for (int row=0;row<3;++row)
            {
                cout<<"      *\t\t____________\t\t\t*"<<endl;
                cout<<"      *\t\t";
                for (int column=0;column<3;++column)
                {
                cout << "| "<< temp->MagicSquareTable[row][column]<< " ";
                }
                cout << "|  =15\n";
            }
            cout<<"      *\t\t ____________\n      *\t\t\t\t\t\t*\n";
            cout<<"      *\t      //  ||  ||  ||  \\\\\n      *\t\t\t\t\t\t*\n";
            cout<<"      *\t     15   15  15  15    15\n      *\t\t\t\t\t\t* \n";
            cout<<"      ******************************************\n";
        }
        else
            cout << "\n\t\tSorry try again !!!! "<< endl;
    cout<<"Press any key to continue...";getch();
    cout << "\nDo you want to Play Again [y/n]:";
    cin >> ans;
    ans=toupper(ans);
    }while (ans=='Y');
}

void AdvancedLevel()
{
    /*prompt the player to play the game by giving at most 2 random
    elements of the table , while hiding the rest */
    system("cls");
    char ans;
    cout << "\ welcome to the advanced level \n\n";
    cout<<"Press any key to continue...";getch();
    do{
        system("cls");
        PossibleMagicSquareTables();
        MagicSquareNode *temp=head;
        int RandomNode=abs((rand()%10)-8),randomRow=rand()%3,randomCell=rand()%3,check[3][3], t=0;
        for (int row=0;row<RandomNode;row++)
        {
            temp= temp->next;
        }

        cout << "\t A    1   2   3 "<<endl;
        for (int row=0;row<3;++row)
        {

            cout << "\t     ____________"<<endl;
            cout<<"\t"<<row+1<<"   ";
            for (int column=0;column<3;++column)
            {
                if((column==randomCell&&row==randomRow)||(row==1&&column==1))
                {
                    cout <<"| " << temp->MagicSquareTable[row][column]<<" ";
                }
                else
                {
                    cout <<"|   ";
                }
            }
            cout<<"|\n";
        }
        cout << "\t     ____________"<<endl;
        for(int row=0;row<3;++row)
        {
            for(int column=0;column<3;++column)
            {
                if((column!=randomCell||row!=randomRow)&&(row!=1||column!=1))
                {
                    cout<<"Enter A"<<row+1<<column+1<<": ";cin>>check[row][column];
                }
                else
                    check[row][column]=temp->MagicSquareTable[row][column];
            }
        }
        int verify=1;
        for(int row=0;row<3;++row)
        {
            for(int column=0;column<3;++column)
            {
                if(check[row][column]==temp->MagicSquareTable[row][column])
                    continue;
                else
                {
                    verify=0;
                    break;
                }
            }
        }
        if(verify==1)
        {
        cout<<"\n\n      ******************************************\n      *\t\t\t\t\t\t*";
            cout << "\n      *\t\tCongratulation,  you did it !!!\t*"<< endl;
             for (int row=0;row<3;++row)
            {
                cout<<"      *\t\t____________\t\t\t*"<<endl;
                cout<<"      *\t\t";
                for (int column=0;column<3;++column)
                {
                cout << "| "<< temp->MagicSquareTable[row][column]<< " ";
                }
                cout << "|  =15\n";
            }
            cout<<"      *\t\t ____________\n      *\t\t\t\t\t\t*\n";
            cout<<"      *\t      //  ||  ||  ||  \\\\\n      *\t\t\t\t\t\t*\n";
            cout<<"      *\t     15   15  15  15    15\n      *\t\t\t\t\t\t* \n";
            cout<<"      ******************************************\n";

        }
        else
            cout << "\n\t\tSorry try again !!!! "<< endl;
    cout<<"Press any key to continue...";getch();
    system("cls");
    cout << "\nDo you want to Play Again [y/n]:";
    cin >> ans;
    ans=toupper(ans);
    }while (ans=='Y');
}


