#ifndef HAOHMARU_H
#define HAOHMARU_H

#include"Fighter.h"

using std::cout;
using std::cin;

class Haohmaru : public Fighter{
private:
	int powerAttack;
public:
	Haohmaru(int healthHaohmaru,int powerHaohmaru): Fighter(healthHaohmaru){
		powerAttack=powerHaohmaru;
	}
	void print(){
		cout << "Genjuro's attack!\n";
		cout << "Haohmaru's current stamina: " << getHealthbar() << "\n";
	}
};

#endif
