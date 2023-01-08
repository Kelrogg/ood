#include "pch.hpp"

#include "app/PaintPicture.hpp"

int main(int, char**)
{
	std::cout << "Should we use new API (Y/N)?\n";
	if (std::string userInput;
		std::getline(std::cin, userInput) && (userInput == "y" || userInput == "Y"))
	{
		app::PaintPictureOnModernGraphicsRenderer();
	}
	else
	{
		app::PaintPictureOnCanvas();
	}

	return 0;
}