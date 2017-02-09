#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <cstdlib>

#define PRINT(a) printf("%d ",(a));


void sito(int tablica[],int pierwsze[]) {

	for (int i = 2; i < 200; i++) {
		tablica[i] = i;
		for (int k = 2; k < 15 && tablica[i] != k && tablica[i] % k == 0; tablica[i] = 0, k++);
	}

	for (int i = 0, j = 0; i < 200; i++)
		if (tablica[i] != 0) {
			pierwsze[j] = tablica[i];
			j++;
		}
}

void check(int max, int ostwar, int pierwsze[], int value) {
	for (max = 2, ostwar; ((pierwsze[max + 1] <= value) && (value%pierwsze[max + 1] == 0)); max++);
}

double oblr = 0;

void binary(int value, int potegi[], int rozklad[]) {
	for (int i = 0; i < 30; i++) ((potegi[i] = pow(2, i)) && (rozklad[i] = 0));
	int i;

	do {
		for (i = 0; potegi[i + 1] <= value; i++);
		(rozklad[i] = 1) && (value -= potegi[i]);
	} while (value != 0);
}

int main() {

	// 1	Prime factorization(or prime decomposition).For a given positive integer, express it as a product of prime numbers.

	/*
	int value;

	printf("Jak¹ liczbe chcesz rozlozyc : ");
	scanf("%d", &value);

	int tablica[200];
	int pierwsze[200];

	sito(tablica, pierwsze);

	int max=0;
	int rozklad[30];
	int ostwar=0;


	for (int k = 0; max = 2, value != 1; rozklad[ostwar] = pierwsze[max], ostwar++, value /= pierwsze[max], k++) {
		while (value % pierwsze[max] != 0) {
			max++;
			check(max, ostwar, pierwsze, value);
		}
	}

	for (int i = 0; i<ostwar; i++)
			printf("%d*", rozklad[i]);
	*/

	// 2	Dec2Bin.Write a program reading a decimal integer, converting it to binary and writing the result.

	/*
	int value, potegi[20], rozklad[20];

	printf("Enter value to convert : ");
	scanf("%d", &value);

	for (int i = 0; i < 20; i++) ((potegi[i] = pow(2, i)) && (rozklad[i]=0));
	int i;

	do{
		for (i = 0; potegi[i+1] <= value; i++);
		(rozklad[i] = 1)&&(value -= potegi[i]);
	} while (value != 0);

	for (i = 19; rozklad[i] == 0; i--);

	for(i;i>=0;i--) PRINT(rozklad[i])
	*/

// 3	Write a function reversing the binary representation of an integer.For example, binreverse(200) = 19, because 20010 = 110010002 and 1910 = 100112.
// 4	Write a function accepting a text string(a pointer to char) and counting words in this text.
// 5	Write a function computing the day of week for a given date.
	
	/*
	int dd,mm,rrrr;
	printf("Enter date (dd-mm-rrrr) : ");
	scanf("%d %d %d", &dd, &mm, &rrrr);
	
	int drrrr = rrrr - 2000;
	if (drrrr < 0)
		drrrr = -drrrr ;
	
	

	for (int i = 0; i < drrrr; i++) {
		if (i % 4 != 0)
			oblr += 365;
		else
			oblr += 366;
	}
	int mmm[2][13] = { {31,28,31,30,31,30,31,31,30,31,30,31}, {31,29,31,30,31,30,31,31,30,31,30,31} };


	if ((rrrr % 4 == 0 && rrrr % 100 != 0) || rrrr % 400 == 0) 
		for (int i = 0; i < mm-1; i++) 
			oblr = oblr + mmm[1][i];
	else for (int i = 0; i < mm-1; i++)
		oblr += mmm[0][i];
		
	oblr += dd;
	int i;
	for (i = 0; (7 * (i+1)) <= oblr; i++);
	oblr -= (7 * i);

	char *day[7] = { "sat","sun","mon","tues","wed","thur","fri" };

	if(oblr==0)
		printf("%s", day[6]);
	else
		printf("%s", day[(int)oblr-1]);
	*/

// 6	Write a function computing the number of days between January the 1st, 2000 and the given date.

	/*
	int dd, mm, rrrr;
	printf("Enter date (dd-mm-rrrr) : ");
	scanf("%d %d %d", &dd, &mm, &rrrr);

	int drrrr = rrrr - 2000;
	if (drrrr < 0)
		drrrr = -drrrr;



	for (int i = 0; i < drrrr; i++) {
		if (i % 4 != 0)
			oblr += 365;
		else
			oblr += 366;
	}
	int mmm[2][13] = { { 31,28,31,30,31,30,31,31,30,31,30,31 },{ 31,29,31,30,31,30,31,31,30,31,30,31 } };


	if ((rrrr % 4 == 0 && rrrr % 100 != 0) || rrrr % 400 == 0)
		for (int i = 0; i < mm - 1; i++)
			oblr = oblr + mmm[1][i];
	else for (int i = 0; i < mm - 1; i++)
		oblr += mmm[0][i];

	oblr += dd;

	printf("Thats %lf days", oblr);
	*/

// 7	Find such a 4 - digit number n, that the last 4 digits of n*n are equal n.

	/*
	int zgoda=0, i;

	for (i = 1000; i < 9999 && zgoda!=1; i++) {
	
		int value, potegi[30], rozklad[30], rozklad2[30];

		value = i;
		binary(value, potegi, rozklad);
		value = i*i;
		binary(value, potegi, rozklad2);
		int j;
		for (j = 29; rozklad[j] == 0; j--);

	
		for (j; j >= 0; j--) {
			if (rozklad[j] == rozklad2[j])
				zgoda = 1;
			else {
				zgoda = 0;
				break;
			}
		}
	}

	PRINT(i)
	*/

// 8	Write a program multiplying two big integers given as text strings.
// 9	Write a program converting a text into Morse code.Use a dot, dash and a space as output symbols.

	/*
	char *morse[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.","....", "..", ".---", "-.-", ".-..", "--","-.", "---", ".--.", "--.-", ".-.", "...", "-","..-", "...-", ".--", "-..-", "-.--", "--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----."," " };
	char *tab[] = { "A","B","C","D","E","F","G","H","I","J","K","L","M","O","P","Q","R","S","T","U","V","W","X","Y","Z","0","1","2","3","4","5","6","7","8","9"," " };

	char text[] =  "COS SIE DZIEJE";

	for (int i = 0; i < 14; i++) {
		for (int j = 0; j < 37; j++)
			if (text[i] == *tab[j]) {
				printf("%s ", *morse[j]);
				break;
			}
	}
	*/

// 10	Write a program converting Morse code into plain text.Use symbols from the previous task.
// 11	Write a program finding the longest palindrome(like "hannah") in a given text.
// 12	Write a program converting a given decimal number into a Roman number.

	
	int value=0;
	do {
		printf("Enter decimal value (1-2999) : ");
		scanf("%d", &value);
	} while (value < 0 || value > 3000);

	if (value > 1000) 
		for (int i = 0; i < (value * 0.001); i++)
			printf("M");
	for (; value > 1000; value -= 1000);
	
	if(value>=500)
		printf("D");
	for (; value > 500; value -= 500);
	
	if (value >= 400 && value < 500)
		printf("CD");
	for (; value >= 400; value -= 400);
	
	if (value < 400 && value>=100)
		for (int i = 0; i < (value * 0.01); i++, value-=100)
			printf("C");
	
	if (value >= 50)
		printf("L");
	for (; value >= 50; value -= 50);
	
	if (value >= 40 && value < 50)
		printf("XL");
	for (; value >= 40; value -= 40);
	
	if(value>=10 && value<40)
		for (int i = 0; i < (value * 0.1); i++,value-=10)
			printf("X");
	
	if (value >= 5)
		printf("V");
	for (; value >= 5; value -= 5);
	
	if (value >= 4 && value < 5)
		printf("IV");
	for (; value >= 4; value -= 4);
	
	if(value>0 && value<5)
		for (int i = 0; i < value; i++) {
			printf("I");
		}


// 13	Write a program converting a Roman number into a decimal number.
// 14	Arrange digits 1 to 9 in form of a fraction equal to 1 / 3 (e.g. 6342 / 91785).




	return 0;
}