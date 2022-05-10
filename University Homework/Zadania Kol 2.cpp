// Zadanie 4.1

#include <iostream>
#include <stdio.h>
#include <string.h>

using std::cout; using std::endl;


int countOccurrences(const char string[], char charToFind, int & firstOccurance, int & lastOccurance) {

    int stringLength = strlen(string); 
    int occuranceCount{};

    for (int i = 0; i <= stringLength; ++i) {
        if (string[i] == charToFind) {
            occuranceCount++;
            if (occuranceCount == 1) firstOccurance = i + 1;
            lastOccurance = i + 1;
        }
        else occuranceCount = -1;
    }

    return occuranceCount;
}

int main() {

    char exampleString[] = "abrakadabra";
    int firstOccurance, lastOccurance;
    int num_b = countOccurrences(exampleString, 'b', firstOccurance, lastOccurance);

    cout << "Znak 'b' znaleziono " << num_b << " razy w \""
        << exampleString << "\"\n"
        << "pierwszy raz na pozycji " << firstOccurance
        << " a ostatni na pozycji " << lastOccurance << '\n';

    const char exampleString2[] = "Katowice, Bankowa 12";
    cout << "Znak 'x' wystepuje w \"" << exampleString2 << "\" " << countOccurrences(exampleString, 'x', firstOccurance, lastOccurance) << " razy\n";

    return 0;

}

// Zadanie 4.2

#include <iostream>
#include <cstring>

using std::cout; using std::endl;

void print(int array[], int size, const char separator[] = " ") {

	int separatorLenght = strlen(separator);

	for (int i = 0; i < size; i++) {
		std::cout << array[i];

		for (int i = 0; i < separatorLenght; i++) {
			std::cout << separator[i];
		}
	}

}

int main() {

	const int N = 5;
	int punkty[N] = { 12, 5, 0, 20, 10 };

	cout << "punkty: ";
	print(punkty, N);

	cout << "\npunkty: ";
	print(punkty, N, ", ");

	return 0;

}

// Zadanie 4.4

#include <iostream>
#include <cstring>
#include <string>

void kombinacje(std::string array[], int arrayLength, int i = 0, std::string starterString = "") {

	if (arrayLength == i) {
		std::cout << starterString << std::endl;
	}
	else {
		kombinacje(array, arrayLength, i + 1, starterString + array[i]);
		kombinacje(array, arrayLength, i + 1, starterString);
	}
}

int main() {

	std::string array[] = { " uga ", "  buga ", " uga buga " };

	kombinacje(array, 3);

	return 0;

}

// Zadanie 5.1

#include <iostream>
#include <cstring>
#include <string>
#include <limits>

using std::cout;
using std::endl;

void minMax(const int tab[], const int size, int* pmin, int* pmax) {

	*pmin = INT_MAX;
	*pmax = INT_MIN;

	for (int i = 0; i < size; ++i) {
		if (tab[i] > *pmax) *pmax = tab[i];
		else if (tab[i] < *pmin) *pmin = tab[i];
	}

}

int main() {

	// Variables
	int t[] = { 3, -4, 1, 0, 10, 5 };
	int smallest, largest;

	minMax(t, 6, &smallest, &largest);

	cout << "Najmniejszy: " << smallest << endl;
	cout << "Najwiekszy: " << largest << endl;

	return 0;
}

// Zadanie 5.2

#include <iostream>

using std::cout;
using std::endl;

int* copyReversed(int values[], const int size) {

	int tempSize = size - 1;
	int * pointer = &values[tempSize];

	for (int i = 0; i <= tempSize; i++ ) {
		pointer[i] = *(values + tempSize - i);
	}

	return &pointer[0];
}

int main() {

	const int firstSequenceLength = 5;
	int firstSequence[firstSequenceLength] = { 1, 6, 7, 5, 3 };

	int* sequenceReversed = copyReversed(firstSequence, firstSequenceLength);

	for (int i = 0; i < firstSequenceLength; ++i) {
		cout << sequenceReversed[i] << " ";
	}

	for (int i = 0; i < firstSequenceLength; ++i) {
		cout << firstSequence[i] << " ";
	}

	return 0;

}

// Zadanie 5.3

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string* get_words(string text, int& num_words) {

	int textLength = text.size(); 
	string* arrayOfWords = new string[textLength];
	int counter{};
	string tempWord; 

	for (int i = 0; i < textLength; i++) {

		if (std::isspace(text[i])) {
			tempWord = "";
			if (std::isspace(text[i+1])) {
				i++;
			}
		}
		else if (!std::isspace(text[i])) {
			tempWord += text[i];
			if (std::isspace(text[i + 1])) {
				// cout << "Temp word nested: " << tempWord << endl;
				arrayOfWords[counter] = tempWord;

				// cout << "Array of words word: " << arrayOfWords[counter] << endl;
				counter++;
			}
		}

	}

	num_words = counter;
	return arrayOfWords;

}

int main() {

	int num_words;

	string sampleText = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Maxime mollitia, molestiae quas vel sint commodi repudiandae consequuntur voluptatum laborum numquam blanditiis harum quisquam eius sed odit fugiat iusto fuga praesentium optio, eaque rerum!Provident similique accusantium nemo autem.";

	string* words = get_words(sampleText, num_words);

	cout << "Lista slow:\n";

	if (num_words > 0) {

		for (int i = 0; i < num_words; ++i) {
			cout << i << ". " << words[i] << endl;
		}

		delete[] words;
		words = nullptr;
	}

	return 0;

}

// Zadanie 6.1

#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;


void resetStream(ifstream& stream) {
	stream.clear();                 // clear fail and eof bits
	stream.seekg(0, std::ios::beg); // back to the start!
}

int countCharacters(ifstream &file) {

	int characterCount{};
	string extractedLine;

	while (!file.eof())
	{
		getline(file, extractedLine);					// get line from stream into string till ecounters \n
		int numofChars = extractedLine.length();		// line lenght as number of characters
		characterCount += numofChars + 1;
	}

	characterCount--;

	resetStream(file);

	return characterCount;
}

int countWhiteSpace(ifstream& file) {

	int whitespaceCount{};
	string extractedLine;

	while (!file.eof())
	{
		getline(file, extractedLine);
		int lineLenght = extractedLine.length();
		for (int i = 0; i < lineLenght; i++) {
			if (isspace(extractedLine[i])) whitespaceCount++;
		}
	}

	resetStream(file);
	
	return whitespaceCount;
}

int countWords(ifstream& file) {

	string extractedLine;
	string tempWord;
	int wordCount{};

	while (!file.eof())
	{
		getline(file, extractedLine);
		int lineLenght = extractedLine.length();

		if (lineLenght != 0) {

			for (int i = 0; i < lineLenght; i++) {
				if (std::isspace(extractedLine[i]) || (extractedLine[i + 1] == '\n')) {

					if (std::isspace(extractedLine[i + 1]) || (extractedLine[i + 1] == '\n')) {
						break;
					}

				}

				else if (!std::isspace(extractedLine[i])) {
					tempWord += extractedLine[i];
					if (std::isspace(extractedLine[i + 1]) || (extractedLine[i + 1] == '\n')) {
						wordCount++;
					}
				}

				if (i == lineLenght - 1) {
						if (extractedLine[i + 1] == '\n') wordCount++;
				}

				
			}

		}
	}

	wordCount++;

	resetStream(file);

	return wordCount;
}

int countLines(ifstream& file) {

	int lineCount{};
	string extractedLine;

	while (!file.eof())
	{
		getline(file, extractedLine);
		lineCount++;
	}

	resetStream(file);

	return lineCount;
}

void statistics(const char fileName[]) {

	ifstream file(fileName);

	cout << "Number of characters: " << countCharacters(file) << endl;
	cout << "Number of white space characters: " << countWhiteSpace(file) << endl;
	cout << "Number of words: " << countWords(file) << endl;
	cout << "Number of lines: " << countLines(file) << endl;

	file.close();
}

int main() {

	statistics("sampleText.txt");

	return 0;
}

// Zadanie 6.2

#include <fstream>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::fstream;
using std::ofstream;

void szukaj(const char nazwaPlikWe[], const char nazwaPlikWy[], const char slowo[]) {

	fstream readStream(nazwaPlikWe);
	ofstream writeStream(nazwaPlikWy);

	int lineCount{};
	int lineLenght{};
	int wordLength = strlen(slowo); 

	string extractedLine;

	while (!readStream.eof()) {

		getline(readStream, extractedLine);
		lineCount++;
		bool found = false;

		int indicator = extractedLine.find(slowo);

		if (indicator != string::npos) writeStream << lineCount << ". " << extractedLine << "\n";

	}

	readStream.clear();                 // clear fail and eof bits
	readStream.seekg(0, std::ios::beg); // back to the start!

	writeStream.close();
	readStream.close();
}

int main() {

	szukaj("input.txt", "output.txt", "commodi");

	return 0;
}

// Zadanie 6.3

#include <fstream>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::fstream;
using std::ofstream;

int countYears(int age, bool isMale) {

	if (age > 65) return 0;
	if (isMale) {
		return 65 - age;
	}
	else return 60 - age;

}

void retirement(const char nazwaPliku[]) {


	fstream file(nazwaPliku);


	while (!file.eof()) {

		string extractedLine;
		getline(file, extractedLine);
		int lineLength = extractedLine.length();

		string tempString;
		string tempStringFirstName;
		string tempStringLastName;
		string sex;

		int age{};
		int numWord{};
		bool moveFurther = false;
		bool isMale = false;
		int spaceCount{};

		for (int i = 0; i < lineLength; ++i) {

				if (extractedLine[i] == ' ') {
					switch (numWord) {
					case 0:
						tempStringFirstName = tempString;
						break;
					case 1:
						tempString.erase(tempString.begin());
						tempStringLastName = tempString;
						break;
					case 2:
						tempString.erase(tempString.begin());
						if (tempString == "M") {
							isMale = true;
						}
						else isMale = false;
						break;
					}
					numWord++;
					tempString = "";
				}

			tempString += extractedLine[i];

			if (i == lineLength - 1) {

				tempString.erase(tempString.begin());
				age = std::stoi(tempString);

				if (isMale) {
					ofstream male("males.txt", std::ios::app);
					male << tempStringLastName << " ";
					male << tempStringFirstName << " ";
					male << countYears(age, isMale) << "\n" ;
					male.close();
				}

				else {
					ofstream female("females.txt", std::ios::app);
					female << tempStringLastName << " ";
					female << tempStringFirstName << " ";
					female << countYears(age, isMale) << "\n";
					female.close();
				}
			}
		}

	}

	file.close();

}

int main() {
	retirement("source.txt");
	return 0;
}

// Zadanie 6.3

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::fstream;
using std::ofstream;
using std::stringstream;

void sumSave(const char nazwaPliku[]) {

	fstream plik(nazwaPliku, std::ios::in | std::ios::out | std::ios::app);
	string extractedLine;
	std::stringstream stringStream;
	int sum{};


	while (!plik.eof()) {
		int lineLenght{};
		int lineCounter{};
		getline(plik, extractedLine);

		lineLenght = extractedLine.length();

		if (lineLenght == 0 && lineCounter) {
			plik << 0;
		}

		stringStream << extractedLine;
		bool isEofString = stringStream.eof();

		while (!stringStream.eof()) {
			string tempWord;
			int foundIndicator{};
			stringStream >> tempWord;
			if (stringstream(tempWord) >> foundIndicator) {
				sum += foundIndicator;
			}
		}

		stringStream.str("");
		stringStream.clear(); // Clear state flags.
		stringStream.flush();


	}

	plik.close();

	fstream saveFile(nazwaPliku, std::ios::app);
	saveFile << "\n" << sum;

	saveFile.close();
}

int main() {

	sumSave("numbersSource.txt");
	
	return 0;
}


Zadanie 7.1

#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout; using std::endl;

std::string to_lowercase(const std::string& s) {
   string str = s; 

   for (int i = 0; i < s.length(); i++) {
       str[i] = (char)tolower(s[i]);
   }


   return str; 
}

int main()
{
   string s = "LoRemIpSum";

   cout << to_lowercase(s) << endl;

}


Zadanie 7.2

#include <iostream>

using std::string;
using std::cout; using std::endl;

int countWords(const std::string& text) {

	int wordCount{};
	int stringLegth = text.length();
	char space = ' ';



	for (int i = 0; i < stringLegth; i++) {
		if(text[i] ==  space) wordCount++;
	 }

	return (wordCount + 1);
}

int main() {

	const std::string text = "(You don't know about me without you have read a book by the name of The Adventures of Tom Sawyer; but that ain't no matter. That book was made by Mr. Mark Twain, and he told the truth, mainly. There was things which he stretched, but mainly he told the truth. That is nothing. I never seen anybody but lied one time or another, without it was Aunt Polly, or the widow, or maybe Mary. Aunt Polly--Tom's Aunt Polly, she is--and Mary, and the Widow Douglas is all told about in that book, which is mostly a true book, with some stretchers, as I said before.)";

	cout << countWords(text) << endl;

	return 0;
}

Zadanie 7.3

#include <iostream>
#include <vector>
#include <algorithm>

using std::string;
using std::vector; using std::pair;
using std::cout; using std::endl;

void wordStats(const string& text) {


	vector<pair<string, int>> wordCount;

	for (int i = 0; i < text.length(); ++i) {

	}


	// Sort vector
	std::sort(wordCount.begin(), wordCount.end(),
		[](std::pair<std::string, int>& p1, std::pair<std::string, int>& p2) {
			return p1.second > p2.second;
		});

	cout << "Unique words" << "" << endl;
	cout << "15 most frewquent words" << " " << endl;
	for (auto p : wordCount) {
		cout << p.first << " : " << p.second << endl;
	}
}

void countWords(const std::string& text) {

	int wordCounter{};
	int stringLegth = text.length();
	char space = ' ';

	for (int i = 0; i < stringLegth; i++) {
		if (text[i] == ' ' || text[i] == '.') wordCounter++;
	}

	cout << (wordCounter + 1) << endl;

}

int main() {

	const std::string text = "(You don't know about me without you have read a book by the name of The Adventures of Tom Sawyer; but that ain't no matter. That book was made by Mr. Mark Twain, and he told the truth, mainly. There was things which he stretched, but mainly he told the truth. That is nothing. I never seen anybody but lied one time or another, without it was Aunt Polly, or the widow, or maybe Mary. Aunt Polly--Tom's Aunt Polly, she is--and Mary, and the Widow Douglas is all told about in that book, which is mostly a true book, with some stretchers, as I said before.)";

	wordStats(text);
	countWords(text);

	return 0;
}


#include <fstream>
#include <iostream>
#include <string>
#include <cctype>

using std::cout; using std::endl;
using std::ifstream; using std::fstream; using std::ofstream;
using std::string;


void szukaj(const char nazwaPlikWe[], const char nazwaPlikWy[], const char slowo[]) {

	fstream stream;

	stream.open(nazwaPlikWe, std::fstream::in);

	string wiersz;


	stream.close();


}

int main() {

	const char nazwaPlikWe[] = "Input.txt";
	const char nazwaPlikWy[] = "Output.txt";
	const char slowo[] = "egzamin";

	szukaj(nazwaPlikWe, nazwaPlikWy, slowo);

}

// https://stackoverflow.com/questions/4888879/elegant-ways-to-count-the-frequency-of-words-in-a-file