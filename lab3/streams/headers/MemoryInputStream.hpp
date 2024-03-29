#ifndef MEMORYINPUTSTREAM_HPP
#define MEMORYINPUTSTREAM_HPP

#include "InputStreamBase.hpp"

class MemoryInputStream : public InputStreamBase
{
public:
	explicit MemoryInputStream(const std::vector<uint8_t>& source);

	MemoryInputStream(const MemoryInputStream&) = delete;
	MemoryInputStream(MemoryInputStream&&) = delete;

	bool IsEOF() const final;

private:
	uint8_t DerivedReadByte() final;
	std::streamsize DerivedReadBlock(void* dstBuffer, std::streamsize size) final;

	std::streamoff m_offset;
	std::vector<uint8_t> m_iMemoryStream;
};

#endif
