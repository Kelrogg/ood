#ifndef OUTPUT_STREAM_BASE_HPP
#define OUTPUT_STREAM_BASE_HPP

#include "IOutputDataStream.hpp"

class OutputStreamBase : public IOutputDataStream
{
public:
	void WriteBlock(const void* srcData, std::streamsize size) final;

protected:
	OutputStreamBase() = default;

	virtual void DerivedWriteBlock(const void* srcData, std::streamsize size) = 0;
};

#endif
