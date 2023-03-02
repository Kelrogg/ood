#ifndef FILEINPUTSTREAM_HPP
#define FILEINPUTSTREAM_HPP

#include <fstream>

#include "InputStreamBase.hpp"

class FileInputStream : public InputStreamBase
{
public:
	explicit FileInputStream(const char* fileName);
	explicit FileInputStream(const std::string& fileName);
	~FileInputStream();
	
	FileInputStream(const FileInputStream&) = delete;
	FileInputStream(FileInputStream&&) = delete;

	bool IsEOF() const final;

private:
	uint8_t DerivedReadByte() final;
	std::streamsize DerivedReadBlock(void* dstBuffer, std::streamsize size) final;

	std::ifstream m_ifStream;
};

#endif
