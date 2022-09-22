#ifndef DAY_HPP
#define DAY_HPP
#include <string>
class Day {
	std::string date;
	Game date[200];
	int numGames;
	public:
	Day(const std::string &inString);
	std::string print() const;
	void addGame(const std::string &inString);
	std::string getDay();
};
#endif