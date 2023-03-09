#include "pch.hpp"

#include "drawable/slide/CSlide/Slide.hpp"

#include "drawer/DrawerSFML.hpp"

#include "drawable/former/Examples.hpp"

int main()
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;

	auto renderWindow = std::make_shared<sf::RenderWindow>(
		sf::VideoMode(1024, 720, 16),
		"Vulkan",
		sf::Style::Titlebar | sf::Style::Close,
		settings);

	auto slide = std::make_shared<Slide>();
	auto sfmlDrawer = DrawerSFML(renderWindow, slide);

	FormSlideWithComputerScreenPicture(*slide);

	unsigned step = 0;
	while (renderWindow->isOpen())
	{
		renderWindow->clear(sf::Color(255, 255, 255));

		sfmlDrawer.Draw();

		sf::Event event;
		while (renderWindow->pollEvent(event))
		{
			if (event.type == sf::Event::Closed || event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
			{
				renderWindow->close();
			}

			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
			{
				if (step % 3 == 0)
				{
					SetSizeToShapesInSlide(*slide);
				}
				if (step % 3 == 1)
				{
					SetFillColorToShapesInSlide(*slide);
				}
				if (step % 3 == 2)
				{
					FormSlideWithComputerScreenPicture(*slide);
				}
				if (++step == 3)
				{
					step = 0;
				}
			}
		}

		renderWindow->display();
	}

	return 0;
}
