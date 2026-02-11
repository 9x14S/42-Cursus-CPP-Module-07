#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template <typename T>
void iter(T *arr, size_t n, void (*f)(T &))
{
	for (size_t i = 0; i < n; i++)
		f(arr[i]);
}

template <typename T>
void iter(const T *arr, size_t n, void (*f)(const T &))
{
	for (size_t i = 0; i < n; i++)
		f(arr[i]);
}

#endif // ITER_HPP
