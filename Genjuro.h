#ifndef GENJURO_H
#define GENJURO_H

#include"Fighter.h"

using std::cout;
using std::cin;

class Genjuro : public Fighter{
private:
	int powerAttack;
public:
	Genjuro(int healthGenjuro,int powerGenjuro): Fighter(healthGenjuro){
		powerAttack=powerGenjuro;
	}
	void print(){
		cout << "Haohmaru's attack!\n";
		cout << "Genjuro's current stamina: " << getHealthbar() << "\n";
	}
};
#endif
