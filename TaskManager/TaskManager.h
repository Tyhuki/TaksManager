#pragma once

#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include <stdlib.h>
#include "Task.h"

class TaskManager {
private:
	std::vector<Task> tasks;
	int nb_task;
public:
	TaskManager();
	void addTask(std::string val);
	//void addTask(std::string val, int intval);
	void removeTask(int index);
	void markTaskDone(int index);
	void displayTask();
	void displayMenu();
	void saveToFile();
	void loadFromFile();
};