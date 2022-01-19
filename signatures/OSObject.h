virtual void release(int freeWhen);
virtual void taggedRelease(const void * tag, const int freeWhen);
virtual bool init();
virtual void free();
virtual int getRetainCount();
virtual void retain();
virtual void release_1();
virtual void taggedRetain(const void * tag);
virtual void taggedRelease_1(const void * tag);
virtual bool serialize(OSSerialize * serializer);
virtual kern_return_t Dispatch(const IORPC rpc);
virtual const OSMetaClass * getMetaClass();
virtual bool isEqualTo(const OSMetaClassBase * anObject);

