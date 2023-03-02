#ifndef IINPUTDATASTREAM_HPP
#define IINPUTDATASTREAM_HPP

#include <cstdint>
#include <memory>
#include <string>

class IInputDataStream
{
public:
	virtual bool IsEOF() const = 0;
	virtual uint8_t ReadByte() = 0;
	virtual std::streamsize ReadBlock(void* dstBuffer, std::streamsize size) = 0;

	virtual ~IInputDataStream() = default;
};

using IInputDataStreamPtr = std::unique_ptr<IInputDataStream>;

#endif
