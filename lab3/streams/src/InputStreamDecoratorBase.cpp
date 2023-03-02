#include "pch.hpp"

#include "InputStreamDecoratorBase.hpp"

InputStreamDecoratorBase::InputStreamDecoratorBase(IInputDataStreamPtr&& inputStreamPtr)
	: InputStreamBase()
	, m_wrappedStream(std::move(inputStreamPtr))
{
}

bool InputStreamDecoratorBase::IsEOF() const
{
	return m_wrappedStream->IsEOF();
}
