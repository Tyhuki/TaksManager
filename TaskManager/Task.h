#pragma once

#include <vector>
#include <string>
#include <cmath>
#include <iostream>

class Task {
private:
	int id; 
	std::string description;
	bool completed;
//	int predecesseur;
public:
	bool getCompleted();
	std::string getDescription();
	Task(std::string val);
	Task(std::string val, int _id);
	void markAsCompleted();
	void getTask();
	int getID();
	//int getPred();
};