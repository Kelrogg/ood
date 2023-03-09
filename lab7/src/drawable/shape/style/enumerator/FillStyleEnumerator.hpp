#pragma once

#include "enumerator/IEnumerator.hpp"

#include "../IStyle.hpp"

template <typename ContainerT>
class FillStyleEnumerator : public IEnumerator<IStyle>
{
public:
	using MyBase = IEnumerator<IStyle>;

	explicit FillStyleEnumerator(ContainerT& styleContainer)
		: m_items(styleContainer)
	{
	}

	void EnumerateAll(const Callback& callback) final
	{
		for (auto& item : m_items)
		{
			callback(item->GetFillStyle());
		}
	}

	void EnumerateAll(const CallbackConst& callback) const final
	{
		for (const auto& item : m_items)
		{
			callback(item->GetFillStyle());
		}
	}

private:
	ContainerT& m_items;
};