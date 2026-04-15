#include "TaskManager.h"
#include <conio.h>
/*
void addTask(std::string val);
void addTask(std::string val, int intval);
void removeTask(int index);
void markTaskDone(int index);
void displayTask();
void saveToFile();
void loadFromFile();
*/

TaskManager::TaskManager() {
	nb_task = 0;
}

void TaskManager::addTask(std::string val) {
	nb_task++;
	tasks.push_back(Task(val,nb_task));
}

void TaskManager::displayTask() {
	int taille = tasks.size();
	for (int i = 0; i < taille; ++i) {
		tasks[i].getTask();
	}
}

void TaskManager::markTaskDone(int index) {
	if (tasks.size() >= index) {
		tasks[index].markAsCompleted();
	}
}
void TaskManager::displayMenu() {
	system("pause");
	system("cls");
	int value;

	std::cout << "1 - Consulter les taches\n2 - Marquer une tache comme terminée\n3 - Ajouter une tache\n4 - Quitter" << std::endl;
	std::cin >> value;
	if (value == 1) {
		system("cls");
		displayTask();
		displayMenu();
	}
	if (value == 2) {
		int secval;
		system("cls");
		std::cout << "Quelle tache avez-vous terminée ? " << std::endl;
		displayTask();
		std::cout << "\n" << std::endl;
		std::cin >> secval;
		if (secval <= tasks.size()) {
			markTaskDone(secval-1);
		}
		else { std::cout << "Valeur trop grande"; }
		displayMenu();
	}
	if (value == 3) {
		system("cls");
		std::string entry;
		std::cout << "Quelle est la tache à ajouter ? " << std::endl;
		std::cin >> entry;
		addTask(entry);
		displayTask();
		displayMenu();
	}
	if (value == 4) {
		std::cout << "Au revoir" << std::endl; 
	}
}