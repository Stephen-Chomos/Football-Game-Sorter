#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main() {

Day week[7];
int numDays = 0;
string next;
char trashy;
string work;
string send;
string trash;
ifstream file1("week4.txt");
getline(file1, send);
week[numDays] = new Day(send);
for (int i = 0; i < 6; ++i) {
	getline(file1, trash);
	trash = "";
}// end of for
	file1 >> next;
while (next != "") {
while(next != "Friday" && next != "Saturday" && next != "Thursday") {
	if (isdigit(next) == true) {
		next = "";
		file1.clear()
		getline(file1, work);
		send.append(work);
		send.append(',');
		getline(file1, trash);
		getline(file1, trash);
		file1 >> next;
		if (isdigit(next) == true) {
		next = "";
		file1.clear();
		getline(file1, work);
		send.append(work);
		send.append(',');
		getline(file1, work);
		send.append(work);
		send.append(',');
		getline(file1, work);
		send.append(work);
		send.append(',');
		week[numDays].addGame(send);
		getline(file1, trash);
		getline(file1, trash);
		getline(file1, trash);
		}//end of inner if
		else {
			send.append(next);
			send.append(",");
			file1.clear();
			getline(file1, work);
			send.append(work);
			send.append(',');
			getline(file1, work);
			send.append(work);
			send.append(',');
			week[numDays].addGame(send);
			getline(file1, trash);
			getline(file1, trash);
			getline(file1, trash);
		}//end of inner else
	}// end of big if
	else {
		send.append(next);
		send.append(",");
		file1.clear();
		getline(file1, trash);
		getline(file1, trash);
		file1 >> next;
		if (isdigit(next) == true) {
			next = "";
			file1.clear();
			getline(file1, work);
			send.append(work);
			send.append(',');
			getline(file1, work);
			send.append(work);
			send.append(',');
			getline(file1, work);
			send.append(work);
			send.append(',');
			week[numDays].addGame(send);
			getline(file1, trash);
			getline(file1, trash);
			getline(file1, trash);
		}//end of little if
		else {
			send.append(next);
			send.append(",");
			file1.clear();
			getline(file1, work);
			send.append(work);
			send.append(',');
			getline(file1, work);
			send.append(work);
			send.append(',');
			week[numDays].addGame(send);
			getline(file1, trash);
			getline(file1, trash);
			getline(file1, trash);
		}//end of little else
	} // end of big else
	file1 >> next;
} // end of big while
	++numDays;
	send.append(next);
	getline(file1, work);
	send.append(work);
	week[numDays] = new Day(send);
} //End of huge while
//ENd of reading
//Lets start user side
cout << "Welcome to the current week of college football" << endl;
cout << "Please input the day you would like to read by inputing the number beside it. Any other number to quit." << endl;
for (int i = 0; i < numDays; ++i) {
cout << i << ". " << week[i].getDay() << endl;
}

return 0;
} // end of main
