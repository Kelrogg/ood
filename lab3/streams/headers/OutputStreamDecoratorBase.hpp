#ifndef OUTPUT_STREAM_DECORATOR_BASE_HPP
#define OUTPUT_STREAM_DECORATOR_BASE_HPP

#include "OutputStreamBase.hpp"

class OutputStreamDecoratorBase : public OutputStreamBase
{
protected:
	OutputStreamDecoratorBase(IOutputDataStreamPtr&& outputStreamPtr);

	IOutputDataStreamPtr m_wrappedStream;
};

#endif
