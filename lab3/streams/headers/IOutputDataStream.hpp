#ifndef IOUTPUTDATASTREAM_HPP
#define IOUTPUTDATASTREAM_HPP

class IOutputDataStream
{
public:
	virtual void WriteByte(uint8_t data) = 0;
	virtual void WriteBlock(const void* srcData, std::streamsize size) = 0;

	virtual ~IOutputDataStream() = default;
};

using IOutputDataStreamPtr = std::unique_ptr<IOutputDataStream>;

#endif
