#pragma once

#include "Dictionary.h"
#include "NotFoundException.h"

#include <map>
using namespace std;

template<class TKey, class TValue>
class cDictionary : public Dictionary<TKey, TValue>
{
	map<TKey, TValue> dic;
public:
	cDictionary();
	virtual ~cDictionary() = default;

	const TValue& Get(const TKey& key) const;
	void Set(const TKey& key, const TValue& value);
	bool IsSet(const TKey& key) const;
};