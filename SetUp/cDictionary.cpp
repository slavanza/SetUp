#include "cDictionary.h"
#include "cNotFoundException.h"

template<class TKey, class TValue>
cDictionary<TKey, TValue>::cDictionary() 
{
	dic.clear();
}


template<class TKey, class TValue>
const TValue& cDictionary<TKey, TValue>::Get(const TKey& key) const 
{
	if (!dic.count(key))
		throw cNotFoundException<TKey>(key);
	else
		return dic.find(key)->second;
}


template<class TKey, class TValue>
void cDictionary<TKey, TValue>::Set(const TKey& key, const TValue& value)
{
	dic.insert(make_pair(key, value));
}


template<class TKey, class TValue>
bool cDictionary<TKey, TValue>::IsSet(const TKey& key) const
{
	return dic.count(key) == 1;
}