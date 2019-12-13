#include <iostream>
#include <string>

#pragma once
class League
{
private:
	string teamName;

public:
	League();

	void setName(string x) {
		teamName = x;
	}
	string getName() {
		return teamName;
	}
	

	
	
};

