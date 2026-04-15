#include "Task.h"

Task::Task(std::string val) {
	description = val;
	completed = false;
	id = 0; 
}
void Task::markAsCompleted() {
	completed = true;
}
bool Task::getCompleted() {
	return completed; 
}

std::string Task::getDescription() {
	return description;
}

Task::Task(std::string val, int _id) {
	description = val;
	completed = false;
	id = _id;
	//predecesseur = prede;
}

void Task::getTask() {
	if (completed == false) {
		std::cout << id << " : " << description << std::endl;
	}
	else {
		std::cout << "\033[9m" << id << " : "  << description << "\033[0m" << std::endl;
	}
}

int Task::getID() {
	return id;
}
/*
int Task::getPred() {
	return predecesseur;
}*/