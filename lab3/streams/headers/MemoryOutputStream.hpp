#ifndef MEMORYOUTPUTSTREAM_HPP
#define MEMORYOUTPUTSTREAM_HPP

#include "OutputStreamBase.hpp"

class MemoryOutputStream : public OutputStreamBase
{
public:
	MemoryOutputStream();

	MemoryOutputStream(const MemoryOutputStream&) = delete;
	MemoryOutputStream(MemoryOutputStream&&) = delete;

	void WriteByte(uint8_t data) final;

private:
	void DerivedWriteBlock(const void* srcData, std::streamsize size) final;

	std::vector<uint8_t> m_oMemoryStream;
};

#endif