#pragma once
#include "NotFoundException.h"


template <class TKey>
class cNotFoundException :public NotFoundException<TKey>
{
	TKey key;
public:
	cNotFoundException(const TKey&);
	const TKey& GetKey() const noexcept;
};

