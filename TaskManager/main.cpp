
#include <iostream>
#include "TaskManager.h"
using namespace std;

int main() {
	TaskManager TM=TaskManager();
	TM.addTask("Faire à manger");
	TM.addTask("Faire de la prog");
	TM.addTask("Faire le jeu");
	TM.displayMenu();
}