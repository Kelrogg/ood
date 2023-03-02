#include "pch.hpp"

#include "OutputStreamDecoratorBase.hpp"

OutputStreamDecoratorBase::OutputStreamDecoratorBase(IOutputDataStreamPtr&& outputStreamPtr)
	: OutputStreamBase()
	, m_wrappedStream(std::move(outputStreamPtr))
{
}
