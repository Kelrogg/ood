#ifndef INPUT_STREAM_DECORATOR_BASE_HPP
#define INPUT_STREAM_DECORATOR_BASE_HPP

#include "InputStreamBase.hpp"

class InputStreamDecoratorBase : public InputStreamBase
{
public:
	bool IsEOF() const final;

protected:
	InputStreamDecoratorBase(IInputDataStreamPtr&& inputStreamPtr);

	IInputDataStreamPtr m_wrappedStream;
};

#endif
