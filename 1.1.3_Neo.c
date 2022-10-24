/*
Напишите программу, которая выводит на экран следующие строки:

NICKNAME: Neo
CITY: St-Petersburg
AGE: 35
HEIGHT: 180
WEIGHT: 75
*/

#include <stdio.h>

int main() {
  printf("NICKNAME: Neo\nCITY: St-Petersburg\nAGE: 35\nHEIGHT: 180\nWEIGHT: 75\n");
  return 0;
}

/*
// Структуры

#include <stdio.h>

struct Person {
	char nickname[50];
	char city[50];
	int age;
	int height;
	int weight;
};

int main(void) {

	struct Person neo = { "Neo", "St-Petersburg", 35, 180, 75 };
 	printf("NICKNAME: %s\nCITY: %s\nAGE: %d\nHEIGHT: %d\nWEIGHT: %d\n", neo.nickname, neo.city, neo.age, neo.height, neo.weight);
	
	return 0;
}
*/
