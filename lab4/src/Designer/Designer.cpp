#include "pch.hpp"

#include "Designer/Designer.hpp"

PictureDraft Designer::CreateDraft(std::istream& istream) const
{
	PictureDraft draft{};

	std::string shapeDscrp{};
	while (std::getline(istream, shapeDscrp))
	{
		if (shapeDscrp.empty())
		{
			continue;
		}
		draft.AddShape(std::move(m_factoryPtr->CreateShape(shapeDscrp)));
	}

	return draft;
}
