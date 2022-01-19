IOWorkLoop * workLoopWithOptions(IOOptionBits options);
IOWorkLoop * workLoop(void);
void threadMainContinuation(IOWorkLoop *self);
virtual IOReturn addEventSource(IOEventSource *newEvent);
virtual void closeGate(void);
virtual void disableAllEventSources(void);
virtual void disableAllInterrupts(void);
virtual void enableAllEventSources(void);
virtual void enableAllInterrupts(void);
virtual bool eventSourcePerformsWork(IOEventSource *inEventSource);
virtual bool inGate(void);
virtual bool init(void);
virtual bool onThread(void);
virtual void openGate(void);
virtual IOReturn removeEventSource(IOEventSource *toRemove);
virtual IOReturn runAction(void *action, void *target, void *arg0, void *arg1, void *arg2, void *arg3);
virtual IOReturn runActionBlock(void * action);
virtual bool runEventSources(void);
virtual void setMaximumLockTime(uint64_t interval, uint32_t options);
virtual void signalWorkAvailable(void);
virtual int sleepGate(void *event, UInt32 interuptibleType);
virtual int sleepGate(void *event, AbsoluteTime deadline, UInt32 interuptibleType);
virtual void threadMain(void);
virtual bool tryCloseGate(void);
virtual void wakeupGate(void *event, bool oneThread);
virtual const OSMetaClass * getMetaClass();