#include "pch.hpp"

#include "ArgumentsParser.hpp"
#include "FileHandler.hpp"

int main(int argc, char* argv[])
{
	auto program = ParseArgs(argc, argv);

	auto& inputFileName = program.get(INPUT_FILE_PAR);
	auto& outputFileName = program.get(OUTPUT_FILE_PAR);

	auto decryptKeys = program.get<std::vector<unsigned char>>(DECRYPT_FLAG);
	auto encryptKeys = program.get<std::vector<unsigned char>>(ENCRYPT_FLAG);

	bool shouldCompress = program.get<bool>(COMPRESS_FLAG);
	bool shouldDeCompress = program.get<bool>(DECOMPRESS_FLAG);

	try
	{
		auto inputFileHandler = FileReader(inputFileName, decryptKeys, shouldDeCompress);
		auto outputFileHandler = FilePrinter(outputFileName, encryptKeys, shouldCompress);

		while (true)
		{
			auto byte = inputFileHandler->ReadByte();
			if (inputFileHandler->IsEOF()) 
			    break;
			outputFileHandler->WriteByte(byte);
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}

	return 0;
}
