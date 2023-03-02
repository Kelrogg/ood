#ifndef INPUT_STREAM_DE_CRYPTER_HPP
#define INPUT_STREAM_DE_CRYPTER_HPP

#include "InputStreamDecoratorBase.hpp"

class InputStreamDeCrypter : public InputStreamDecoratorBase
{
public:
	InputStreamDeCrypter(IInputDataStreamPtr&& inputStreamPtr, unsigned char key);

private:
	uint8_t DerivedReadByte() final;
	std::streamsize DerivedReadBlock(void* dstBuffer, std::streamsize size) final;

	std::vector<unsigned char> m_deCryptTable;
};

#endif
