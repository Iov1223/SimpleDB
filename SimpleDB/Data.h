#pragma once
#include <iostream>

struct database {
	std::string title;
	int notesNumber = 0;
	std::string notes;
};

void addNote(database& DB);

void showDatabase(database& DB);

void clearNotes(database& DB);