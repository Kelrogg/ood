#include "pch.hpp"

#include "Document/HTMLDocument.hpp"
#include "Editor/Editor.hpp"

int main(int, char**)
{
	auto doc = std::make_unique<HTMLDocument>();
	Editor editor{ std::move(doc), std::cin, std::cout };
	editor.Start();

	return 0;
}
