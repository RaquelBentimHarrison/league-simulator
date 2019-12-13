#include <iostream>
#include <string>

using namespace std;

#define MAX 20

//base class
class League
{
	string leagueName;
public:
	//member function to get league name
	void getDetails();
};

//member function definition, outside of the class
void League::getDetails() {
	cout << "Enter League name" << endl;
	getline(cin, leagueName);
}

//derived class
class team: public League
{
private:
	string  name;
	int   wins;
	int   losses;
	int	  draws;
	int   total;
	
public:
	//member function to get teams's details
	void getTeamDetails();
	//member function to print teams's details
	void putDetails(void);
};


//member function definition, outside of the class
void team::getTeamDetails() {
	
	cout << "Enter team name: ";
	cin.ignore();
	getline(cin, name);
	cout << "Enter number of wins: ";
	cin >> wins;
	cout << "Enter number of losses: ";
	cin >> losses;
	cout << "Enter number of draws: " ;
	cin >> draws;
	
}

//member function definition, outside of the class
void team::putDetails(void) {
	cout << "\nTeam's stats:";
	cout << "\nName: " << name << endl;
	cout << "Wins: " << wins << endl;
	cout << "Losses: " << losses << endl;
	cout << "Draws: " << draws << endl;
	total = (wins * 3) + (draws * 1);
	cout << "Total Points: " << total  << endl;
}

int main()
{
	League L; 
	team T[MAX];       //array of objects creation
	int n;

	L.getDetails();

	cout << "Enter total number of teams: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "\nEnter details of team " << i + 1 << ":\n";
		T[i].getTeamDetails();
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << "\nDetails of team " << (i + 1) << ":\n";
		T[i].putDetails();
	}

	system("pause");
	return 0;
}