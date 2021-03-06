#pragma once
////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Graphics.hpp>
#include <fstream>


////////////////////////////////////////////////////////////
/// \brief The game score handler
///
////////////////////////////////////////////////////////////
class Score {
public:
	////////////////////////////////////////////////////////////
	/// \brief Constructor
	///
	/// Sets the score
	///
	////////////////////////////////////////////////////////////
	explicit Score(const size_t score);

	~Score();


	void show();


	void sortScoreList();


	std::string getDate() const;

	int getScore(const std::string& str, const size_t pos) const;

	void run();

private:
	size_t m_score;
	sf::RenderWindow m_window;
	sf::Font m_font;
	sf::Text m_text;
	std::string m_string;
	std::fstream m_fstr;

};

