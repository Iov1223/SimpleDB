#include <iostream>
#include "Data.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	database page1 = { "Shopeliste" };
	int answer;

	do {
		system("cls");

		cout << "�������� ��������:\n";
		cout << "1. �������� ������:\n";
		cout << "2. ������� ���� ������:\n";
		cout << "3. �������� ���� ������:\n";
		cout << "4. ����������� ������.\n";
		cout << "���� -> ";
		cin >> answer;
		cin.ignore();

		switch (answer) {
		case 1: addNote(page1); break;
		case 2: showDatabase(page1); break;
		case 3: clearNotes(page1); break;
		case 4: cout << "���������� ������ ���������..."; break;
		default: cout << "����� ������� �� ����������!\n"; system("pause");
		}
	} while (answer != 4);


	return 0;
}