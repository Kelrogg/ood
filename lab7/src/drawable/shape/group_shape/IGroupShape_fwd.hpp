#pragma once

class IGroupShape;

using IGroupShapeRawPtr = IGroupShape*;
using IGroupShapePtr = std::unique_ptr<IGroupShape>;
using IGroupShapeSharedPtr = std::shared_ptr<IGroupShape>;
using IGroupShapeConstSharedPtr = std::shared_ptr<const IGroupShape>;
