#ifndef INPUT_STREAM_RLE_DE_COMPRESSOR_HPP
#define INPUT_STREAM_RLE_DE_COMPRESSOR_HPP

#include "ByteSequenceInfo.hpp"
#include "InputStreamDecoratorBase.hpp"

class InputStreamRLEDeCompressor : public InputStreamDecoratorBase
{
public:
	InputStreamRLEDeCompressor(IInputDataStreamPtr&& inputStreamPtr);


private:
	uint8_t DerivedReadByte() final;
	std::streamsize DerivedReadBlock(void* dstBuffer, std::streamsize size) final;

	ByteSequenceInfo m_byteSequenceInfo;
};

#endif
