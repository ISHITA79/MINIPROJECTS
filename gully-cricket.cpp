#include<iostream>
#include<unistd.h>
#include<ctime>
#include<string>
#include<bits/stdc++.h>
using namespace std;

class Team{
public:
    void welcomeUsers();
	void displayPlayers();
	int runs;
};

int playInning();
void selectBatsmanAndBowler1();
void selectBatsmanAndBowler2();
void decideWinner(int,int);
void Display2();

void Team::welcomeUsers(){
	cout<<"\n-------------------------------------------------\n"<<endl;
	cout<<"\tWelcome to the GULLY CRICKET GAME."<<endl;
	cout<<"\n-------------------------------------------------\n"<<endl;
	usleep(40000);
}

void Team:: displayPlayers() {
  string TeamA,TeamB;
  cout << "\nPress Enter to display players in Team: ";
  cin.get();
  cout << "Displaying players...\n";
  usleep(1000 * 1000);
  cout<<"-------------------------------------------------"<<endl;
  cout<<"*****************Team A:********************* \n1.M.S.Dhoni \n2.Virat kohli\n3.Yuvi Chahal\n"<<TeamA<<endl;

  cout<<"*******************Team B:******************* \n1.Hardik Pandya \n2.Jasprit Bumrah \n3.Rohit Sharma"<<TeamB<<endl;
  cout<<"-------------------------------------------------"<<endl;

}

int main() {
    Team t;
	t.welcomeUsers();
	t.displayPlayers();

	Team teamA,
	Display1();
	selectBatsmanAndBowler1();
    teamA.runs = playInning();

    Team teamB;
    Display2();
	selectBatsmanAndBowler2();
	teamB.runs=playInning();

	decideWinner(teamA.runs,teamB.runs);

	return 0;
}

void Display1() {
	cout << "\nPress Enter to start first inning ";
	cin.get();
	usleep(30000);
	cout<<"\t....First Inning started....\n";
}

void selectBatsmanAndBowler1() {
	cout<<"\t------Team A : Batting------\n";
    srand((unsigned) time(0));
    int choice = 1 + (rand() % 3);
   switch (choice) {
    case 1:
        cout << "M.S.Dhoni";
        break;
    case 2:
        cout << "Virat Kohli";
        break;
    case 3:
        cout << "Yuvi Chahal";
        break;
    default:
        printf("No Player Found");
        break;

}
 cout<<" batting from Team A\n"<<endl;

   usleep(50000);

cout<<"\t------Team B : Bowling------\n";
srand((unsigned) time(0));
       int Choice = 1 + (rand() % 3);
      switch (Choice) {
       case 1:
           cout << "Hardik Pandya";
           break;
       case 2:
           cout << "Jasprit Bumrah";
           break;
       case 3:
           cout << "Rohit Sharma";
           break;
       default:
           cout << "No Player Found";
           break;

   }

      cout<<" bowling from Team B\n"<<endl;
}

int playInning() {
	int runs,totalRuns=0;
    srand((unsigned) time(0));

    for (int i= 0; i<= 5; i++) {
    runs = (rand() % 6) + 1;
    cout << "\nPress Enter.... ";
    cin.get();
    usleep(30000*10000);
    cout << "Runs : " <<runs<< endl;
    totalRuns+=runs;
}
     cout << "\nPress Enter to get final score.... ";
     cin.get();
     usleep(30000);
     cout<<"Final run scored by the team:"<<totalRuns<<endl;

     return runs;
}

void Display2() {
	cout << "\nPress Enter to start second inning ";
	cin.get();
	usleep(30000);
	cout<<"\t....Second Inning started....\n";
}
void selectBatsmanAndBowler2() {

	cout<<"\t------Team B : Batting------\n";
    srand((unsigned) time(0));
    int choice = 1 + (rand() % 3);
   switch (choice) {
    case 1:
        cout << "Hardik Pandya";
        break;
    case 2:
        cout << "Jasprit Bumrah";
        break;
    case 3:
        cout << "Rohit Sharma";
        break;
    default:
        cout << "No Player Found";
        break;

}
   cout<<" batting from Team B\n"<<endl;
   usleep(30000);
   cout<<"\t------Team A : Bowling------\n";
   srand((unsigned) time(0));
       int Choice = 1 + (rand() % 3);
      switch (Choice) {
       case 1:
           cout << "M.S.Dhoni";
           break;
       case 2:
           cout << "Virat Kohli";
           break;
       case 3:
           cout << "Yuvi Chahal";
           break;
       default:
           cout << "No Player Found";
           break;

   }
      cout<<" bowling from Team A\n"<<endl;
}

void decideWinner(int teamAScore, int teamBScore) {

	if (teamAScore > teamBScore) {
        cout << "\t\t !!Team A Won!!" << endl;
    } else if (teamAScore < teamBScore) {
        cout<< "\t\t !!Team B Won!!" << endl;
    } else {
        cout << "\t\t Match Draw" << endl;


}
}
