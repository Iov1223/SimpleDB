#include "Data.h"
#include <iostream>
#include <string>

void addNote(database& DB){
	DB.notesNumber++;
	std::cout << "Введите новую запись: ";
	std::string newNote;
	std::getline(std::cin, newNote);
	DB.notes += std::to_string(DB.notesNumber) + ". "  +newNote + "\n";
	std::cout << "Запись добавлена.\n";
	system("pause");
}

void showDatabase(database& DB){
	std::cout << "Страница: " << DB.title << std::endl;
	std::cout << "Колличество записей: " << DB.notesNumber << std::endl;
	std::cout << "Записи:\n" << DB.notes << std::endl;
	system("pause");
}

void clearNotes(database& DB){
	DB.notes = "";
	DB.notesNumber = 0;
	std::cout << "Записи удалены.\n";
	system("pause");
}
