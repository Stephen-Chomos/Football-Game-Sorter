#ifndef GAME_HPP
#define GAME_HPP
#include <string>
class Game {
	std::string home;
	std::string away;
	std::string time;
	std::string TV;
	public:
	Game();
	Game(const std::string &inString);
	std::string print() const;
};
#endif