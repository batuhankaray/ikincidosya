/* Batuhan Karay – 2315406
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only. */

#include <iostream>
#include<cstring>
#include "EuroleagueTeamFanclub.h"

using std::cout;
using std::cin;

int main()
{
    
    EuroleagueTeamFanclub e1("Anadolu Efes", 2021, 'P', "Turkey", 2521);
    EuroleagueTeamFanclub e2("Anadolu Efes", 2022, 'P', "Turkey", 2521);
    e1.differences(e2);
    
    /*
    EuroleagueTeamFanclub e1("Anadolu Efes", 2021, 'P', "Turkey", 2521); 
	EuroleagueTeamFanclub e2("Anadolu Efes", 2022, 'P', "Turkey", 2712);
	e1.differences(e2);
	*/
	
	
	/*
	cout << "\n\n";
	e1.printClub();
	cout << "\n";
	
	e2.printClub();
	cout << "\n\n";
	e1.addFan(5);
	cout << "\n";
	cout << e1.getNumberOfMembers();
	*/

    return 0;
}



