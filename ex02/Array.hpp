#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
private:
	T				*_data;
	unsigned int	_size;
public:
	Array() : _data(NULL), _size(0) {}
	Array(unsigned int size) : _data(new T[size]()), _size(size) {}
	Array(const Array &that) : _data(NULL), _size(0)
	{
		*this = that;
	}

	Array &operator=(const Array &that)
	{
		if (this != &that)
		{
			if (_data)
			{
				delete[] _data;
				_data = NULL;
			}
			_size = that._size;
			if (_size > 0)
			{
				_data = new T[_size]();
				for (unsigned int i = 0; i < _size; i++)
					_data[i] = that._data[i];
			}
		}
		return *this;
	}

	~Array()
	{
		if (_data)
			delete[] _data;
	}

	T &operator[](unsigned int index)
	{
		if (index >= _size)
			throw std::exception();
		return _data[index];
	}

	const T &operator[](unsigned int index) const
	{
		if (index >= _size)
			throw std::exception();
		return _data[index];
	}


	unsigned int size(void) const
	{
		return _size;
	}
};

#endif // ARRAY_HPP
