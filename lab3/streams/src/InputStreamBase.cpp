#include "pch.hpp"

#include "InputStreamBase.hpp"

constexpr auto READ_BYTE_FAILURE_MSG = "Failed to read byte attempt. EOF reeached";

uint8_t InputStreamBase::ReadByte()
{
	if (IsEOF())
	{
		throw std::ios_base::failure(READ_BYTE_FAILURE_MSG);
	}

	return DerivedReadByte();
}

constexpr auto READ_BLOCK_FAILURE_MSG = "Failed to read block attempt. EOF is reached";
constexpr auto READ_BLOCK_FAILURE_NULLPTR_MSG = "Failed to read block attempt. nullptr in _1 parameter is provided";

std::streamsize InputStreamBase::ReadBlock(void* dstBuffer, std::streamsize size)
{
	if (dstBuffer == nullptr)
	{
		throw std::ios_base::failure(READ_BLOCK_FAILURE_NULLPTR_MSG);
	}
	if (IsEOF())
	{
		throw std::ios_base::failure(READ_BLOCK_FAILURE_MSG);
	}

	return DerivedReadBlock(dstBuffer, size);
}
