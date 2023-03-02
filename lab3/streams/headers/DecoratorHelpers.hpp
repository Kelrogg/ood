#ifndef DECORATOR_HELPERS_HPP
#define DECORATOR_HELPERS_HPP

template <typename Decorator, typename... Args>
auto DecorateStream(const Args&... args)
{
	return [=](auto&& b) {
		return std::make_unique<Decorator>(std::forward<decltype(b)>(b), args...);
	};
}

template <typename Component, typename Decorator>
auto operator<<(Component&& component, const Decorator& decorate)
{
	return decorate(std::forward<Component>(component));
}

#endif