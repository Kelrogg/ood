#ifndef DESIGNER_IDESIGNER_HPP
#define DESIGNER_IDESIGNER_HPP

#include "../Draft/PictureDraft.hpp"

class IDesigner
{
public:
	virtual PictureDraft CreateDraft(std::istream& stream) const = 0;

	virtual ~IDesigner() = default;
};

#endif
