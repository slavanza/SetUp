#include "cNotFoundException.h"

template<class TKey>
cNotFoundException<TKey>::cNotFoundException(const TKey& key)
{
	this->key = key;
}


template<class TKey>
const TKey& cNotFoundException<TKey>::GetKey() const noexcept
{
	return key;
}
