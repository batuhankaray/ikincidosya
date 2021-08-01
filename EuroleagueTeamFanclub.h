#include<iostream>
#include<cstring>

// Yorum eklendi 2.

using std::cout;
using std::cin;

class EuroleagueTeamFanclub
{
private:
	char* The_name_of_the_team;
	int year;
	char condition;
	char* originCountry;
	int NumberOfMembers;
public:
	/*
	---MY FUNCTIONS---
	
	EuroleagueTeamFanclub();// DEFAULT CONSTRUCTOR
	EuroleagueTeamFanclub(char* , int, char , char* , int);// SPECIAL CONSTRUCTOR
	EuroleagueTeamFanclub(const EuroleagueTeamFanclub&);//COPY CONSTRUCTOR
	~EuroleagueTeamFanclub();// DESTRUCTOR

	void setThe_name_of_the_team(char* The_name_of_the_teamCheck);//SET
	void setYear(int yearCheck);//SET
	void setCondition(char conditionCheck);//SET
	void setOriginCountry(char* originCountryCheck);//SET
	void setNumberOfMembers(int NumberOfMembersCheck);//SET

	char* getThe_name_of_the_team();//GET
	int getYear();//GET
	char getCondition();//GET
	char* getOriginCountry();//GET
	int getNumberOfMembers();//GET

	void addFan(int NumberOfMembersCheck);//ADDFAN

	void printClub();//PRINT

	void differences(EuroleagueTeamFanclub& );//DIFFERENCES
	*/
	
	// DEFAULT CONSTRUCTOR
	EuroleagueTeamFanclub() {
		char emptyCheck[] = "Empty";
		int i;
		The_name_of_the_team = new char[30];
		year = 0;
		condition = 'X';
		originCountry = new char[30];
		NumberOfMembers = 0;
		for (i = 0; emptyCheck[i] != '\0'; i++) {
			The_name_of_the_team[i] = emptyCheck[i];
			originCountry[i] = emptyCheck[i];
		}
	}
	
	// SPECIAL CONSTRUCTOR
	EuroleagueTeamFanclub(const char* The_name_of_the_team_Check, int yearCheck, char conditionCheck, const char* originCountryCheck, int NumberOfMembersCheck) {
		
		The_name_of_the_team = new char[30];
		originCountry = new char[30];
	
		int i;
		for (i = 0; The_name_of_the_team_Check[i] != '\0'; i++) {
			The_name_of_the_team[i] = The_name_of_the_team_Check[i];
		}
		The_name_of_the_team[i] = '\0';
		year = yearCheck;
		condition = conditionCheck;
		for (i = 0; originCountryCheck[i] != '\0'; i++) {
			originCountry[i] = originCountryCheck[i];
		}
		originCountry[i] = '\0';
		NumberOfMembers = NumberOfMembersCheck;
	}
	
	//COPY CONSTRUCTOR
	EuroleagueTeamFanclub(const EuroleagueTeamFanclub& e) {
		int i;
		The_name_of_the_team = new char[30];
		year = e.year;
		condition = e.condition;
		originCountry = new char[30];
		NumberOfMembers = e.NumberOfMembers;
		for (i = 0; e.The_name_of_the_team[i] != '\0'; i++) {
			The_name_of_the_team[i] = e.The_name_of_the_team[i];
		}
		The_name_of_the_team[i] = '\0';
		for (i = 0; e.originCountry[i] != '\0'; i++) {
			originCountry[i] = e.originCountry[i];
		}
	
	}
	
	// DESTRUCTOR
	~EuroleagueTeamFanclub() {
		delete[] The_name_of_the_team;
		delete[] originCountry;
	}
	
	//SET
	void setThe_name_of_the_team(const char* The_name_of_the_teamCheck) {
		int i;
		for (i = 0; The_name_of_the_teamCheck[i] != '\0'; i++) {
			The_name_of_the_team[i] = The_name_of_the_teamCheck[i];
		}
		The_name_of_the_team[i] = '\0';
	}
	
	void setYear(int yearCheck) {
		year = yearCheck;
	}
	
	void setCondition(char conditionCheck) {
		condition= conditionCheck;
	}
	
	void setOriginCountry(const char* originCountryCheck) {
		int i;
		for (i = 0; originCountryCheck[i] != '\0'; i++) {
			originCountry[i] = originCountryCheck[i];
		}
		originCountry[i] = '\0';
	}
	
	void setNumberOfMembers(int NumberOfMembersCheck) {
		NumberOfMembers = NumberOfMembersCheck;
	}
	
	//GET
	char* getThe_name_of_the_team() {
		return The_name_of_the_team;
	}
	
	int getYear() {
		return year;
	}
	
	char getCondition() {
		return condition;
	}
	
	char* getOriginCountry() {
		return originCountry;
	}
	
	int getNumberOfMembers() {
		return NumberOfMembers;
	}
	
	//ADDFAN
	void addFan(int NumberOfMembersCheck) {
		NumberOfMembers += NumberOfMembersCheck;
	}
	
	//PRINT
	void printClub() {
		cout << "Team Name: " << The_name_of_the_team << "\n";
		cout << "Year: " << year << "\n";
		if (condition == 'S') {
			cout << "Condition: Normal Season\n";
		}
		else {
			cout << "Condition: Pandemic continues\n";
		}
		cout << "Country: " << originCountry << "\n";
		cout << "The Number of Members: " << NumberOfMembers << "\n";
	}
	
	//DIFFERENCES
	void differences( EuroleagueTeamFanclub& e2) {
		int check=0;
		int i;
		char* The_name_of_the_teamTemp;
		int yearTemp;
		char conditionTemp;
		char* originCountryTemp;
		int NumberOfMembersTemp;
	
		The_name_of_the_teamTemp = new char[30];
		originCountryTemp = new char[30];
	
		yearTemp = e2.getYear();
		strcpy(The_name_of_the_teamTemp, e2.getThe_name_of_the_team());
		conditionTemp = e2.getCondition();
		strcpy(originCountryTemp,e2.getOriginCountry());
		NumberOfMembersTemp = e2.getNumberOfMembers();
		
		for (i = 0; The_name_of_the_team[i] != '\0'; i++) {
			if (The_name_of_the_team[i] != The_name_of_the_teamTemp[i]) {
				check=1;
				cout << "The name of the team is different\n";
				break;
			}
		}
		if (year != yearTemp) {
			check=1;
			cout << "The year is different\n";
		}
		if (condition != conditionTemp) {
			check=1;
			cout << "The condition is different\n";
		}
		for (i = 0; originCountry[i] != '\0'; i++) {
			if (originCountry[i] != originCountryTemp[i]) {
				check=1;
				cout << "The origin country is different\n";
				break;
			}
		}
		
		if (NumberOfMembers != NumberOfMembersTemp) {
			check=1;
			cout << "The number of fans is different\n";
		}
		if(check==0){
			cout << "They are the same!\n";
		}
	}
};

