#ifndef OUTPUT_STREAM_RLE_COMPRESSOR_HPP
#define OUTPUT_STREAM_RLE_COMPRESSOR_HPP

#include "ByteSequenceInfo.hpp"
#include "OutputStreamDecoratorBase.hpp"

class OutputStreamRLECompressor : public OutputStreamDecoratorBase
{
public:
	OutputStreamRLECompressor(IOutputDataStreamPtr&& outputStreamPtr);
	~OutputStreamRLECompressor();

	void WriteByte(uint8_t data) final;

private:
	void DerivedWriteBlock(const void* srcData, std::streamsize) final;

	void Flush();

	ByteSequenceInfo m_byteSequenceInfo;
};

#endif
