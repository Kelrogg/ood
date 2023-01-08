#ifndef COMMAND_MENU_MENU_HPP
#define COMMAND_MENU_MENU_HPP

#include "../Commands/IUndoableEdit.hpp"

class Menu
{
public:
	using Command = std::function<void(std::istream&)>;

	Menu(std::istream& inputS, std::ostream& outputS);

	void AddItem(const std::string& shortcut, const std::string& dscrpt, const Command& command);
	void Run();
	void ShowInstructions();
	void Exit();

private:
	bool ExecuteCommand(const std::string& command);

	struct Item
	{
		Item(const std::string& shortcut, const std::string& description, const Command& command)
			: shortcut(shortcut)
			, description(description)
			, command(command)
		{
		}

		std::string shortcut{};
		std::string description{};
		Command command{};
	};

	std::istream& m_input;
	std::ostream& m_output;

	std::vector<Item> m_items;
	bool m_exit = false;
};

#endif
