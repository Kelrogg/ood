#include "pch.hpp"

#include "OutputStreamBase.hpp"

constexpr auto WRITE_BLOCK_FAILURE_NULLPTR_MSG = "Failed to write block. Nothing to write from";

void OutputStreamBase::WriteBlock(const void* srcData, std::streamsize size)
{
	if (srcData == nullptr)
	{
		throw std::ios_base::failure(WRITE_BLOCK_FAILURE_NULLPTR_MSG);
	}

	DerivedWriteBlock(srcData, size);
}
