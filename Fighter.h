#ifndef FIGHTER_H
#define FIGHTER_H

using std::cout;
using std::cin;

class Fighter{
private:
	int healthbar;
	bool lost;
public:
	Fighter(int fighterHealthbar){
		healthbar=fighterHealthbar;
		lost=false;
	}
	virtual void print(void) = 0;
	int getHealthbar() const{
		return healthbar;
	}
	void updateHealthBar(int attackPower){
		healthbar=healthbar-attackPower;
	}
	bool isLost() const{
		if(healthbar<=0){
			return true;
		}
		else{
			return false;
		}	
	}
	int getHealthbar(){
		return healthbar;
	}
};
#endif
