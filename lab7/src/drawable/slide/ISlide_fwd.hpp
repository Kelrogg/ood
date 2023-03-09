#pragma once

class ISlide;

using ISlideRawPtr = ISlide*;
using ISlidePtr = std::unique_ptr<ISlide>;
using ISlideSharedPtr = std::shared_ptr<ISlide>;
