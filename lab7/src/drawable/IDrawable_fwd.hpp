#pragma once

class IDrawable;

using IDrawableRawPtr = IDrawable*;
using IDrawablePtr = std::unique_ptr<IDrawable>;
using IDrawableSharedPtr = std::shared_ptr<IDrawable>;