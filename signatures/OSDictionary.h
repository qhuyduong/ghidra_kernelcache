OSDictionary * withObjects(void **objects,OSString **keys, unsigned int count, unsigned int capacity);
OSDictionary * withCapacity(uint32_t capacity);
OSDictionary * withDictionary(OSDictionary *dict, unsigned int capacity);
virtual bool serialize(OSSerialize *serializer);
virtual bool initWithObjects(OSObject **objects,OSString **keys,  unsigned int count,  unsigned int capacity = 0);
virtual const OSMetaClass * getMetaClass();
virtual bool isEqualTo_2(const OSDictionary * aDictionary);
virtual bool isEqualTo(const OSMetaClassBase * anObject);
virtual bool isEqualTo_1(const OSDictionary * aDictionary,const OSCollection * keys);
virtual unsigned setOptions(unsigned   options,unsigned   mask,void     * context);
OSCollection * copyCollection(OSDictionary * cycleDict);
virtual void flushCollection();
virtual unsigned int ensureCapacity(unsigned int newCapacity);
virtual unsigned int setCapacityIncrement(unsigned increment);
virtual unsigned int getCapacityIncrement();
virtual unsigned int getCapacity();
virtual unsigned int getCount();
virtual void free();
virtual bool initWithDictionary(const OSDictionary * dict,unsigned int capacity);
virtual bool initWithObjects(void **objects,  OSSymbol **keys,  unsigned int count,  unsigned int capacity);
virtual bool initWithObjects_1(void **objects,  OSString **keys,  unsigned int count,  unsigned int capacity);
virtual unsigned int iteratorSize();
virtual bool initIterator(void * iterator);
virtual bool getNextObjectForIterator(void * iterator, OSObject ** ret);
virtual bool setObject(const OSSymbol * aKey,const OSMetaClassBase * anObject);
virtual bool setObject_1(OSString *aKey, void *anObject);
virtual bool setObject_2(OSSymbol *aKey, void *anObject);
virtual void removeObject(const OSSymbol *aKey)
virtual void removeObject_1(const OSString *aKey);
virtual void removeObject_2(const char *aKey);
virtual bool merge(const OSDictionary * aDictionary);
virtual OSObject * getObject(const OSSymbol * aKey);
virtual OSObject * getObject_1(const OSString * aKey);
virtual OSObject * getObject_2(const char * aKey);
virtual bool initWithCapacity(unsigned int capacity);