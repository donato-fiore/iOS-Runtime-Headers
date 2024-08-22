typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct TPSURLSessionDelegateResponds {
    BOOL willCacheResponse;
    BOOL downloadTaskDidFinishDownloadingToURL;
    BOOL didReceiveResponse;
    BOOL didCompleteWithError;
    BOOL taskDidReceiveChallenge;
} TPSURLSessionDelegateResponds;

typedef struct ? {
    os_unfair_lock_s __queueLock;
    id __firstOperation;
    id NSOperation;
    id __lastOperation;
    id NSOperation;
    id __firstPriOperation;
    id NSOperation;
    uint8_t __lastPriOperation;
    NSUInteger NSOperation;
    id _barriers;
    NSInteger NSMutableArray;
    int _progress;
    int _NSOperationQueueProgress;
    id __operationCount;
    id __activeThreads;
    id NSPointerArray;
    char __maxNumOps;
    uint8_t __actualMaxNumOps;
    BOOL __numExecOps;
    uint8_t __dispatch_queue;
    BOOL NSObject<OS_dispatch_queue>;
    uint8_t __backingQueue;
    unsigned char NSObject<OS_dispatch_queue>;
    uint8_t __name;
    unsigned char NSString;
    uint8_t __nameBuffer;
    unsigned char __suspended;
    uint8_t __overcommit;
    unsigned char __propertyQoS;
    unsigned char __operationsObserverCount;
} ?;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct RefCountBitsT<swift::RefCountIsInline> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> {
    uint8_t __a_value;
    RefCountBitsT<swift::RefCountIsInline> field1;
} __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>>;

typedef struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> {
    __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> __a_;
} atomic<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> {
    atomic<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;
} RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>>;

