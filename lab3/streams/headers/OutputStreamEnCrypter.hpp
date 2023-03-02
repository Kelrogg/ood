#ifndef OUTPUT_STREAM_ENCRYPTER_HPP
#define OUTPUT_STREAM_ENCRYPTER_HPP

#include "OutputStreamDecoratorBase.hpp"

class OutputStreamEnCrypter : public OutputStreamDecoratorBase
{
public:
	OutputStreamEnCrypter(IOutputDataStreamPtr&& outputStreamPtr, unsigned char key);

	void WriteByte(uint8_t data) final;

private:
	void DerivedWriteBlock(const void* srcData, std::streamsize size) final;

	std::vector<uint8_t> m_enCryptTable;
};

#endif