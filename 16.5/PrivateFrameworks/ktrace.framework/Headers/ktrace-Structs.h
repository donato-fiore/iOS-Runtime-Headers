typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct ktrace_chunk {
} // Error Processing Struct Fields

typedef struct ktrace_chunk_array {
} // Error Processing Struct Fields

typedef struct ktrace_file {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct ktrace_machine {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    char * field5;
    char * field6;
    char * field7;
    char * field8;
    char * field9;
    char * field10;
    char * field11;
    char * field12;
    char * field13;
    char * field14;
    char * field15;
    unsigned int field16;
    NSUInteger field17;
    unsigned int field18;
    unsigned int field19;
    unsigned int field20;
    unsigned int field21;
    unsigned int field22;
    unsigned int field23;
    unsigned int field24;
    unsigned int field25;
    unsigned int field26;
    int field27;
    int field28;
    int field29;
    BOOL field30;
    BOOL field31;
    BOOL field32;
    BOOL field33;
    BOOL field34;
    __CFDictionary field35;
} ktrace_machine;

typedef struct ? {
    char * field0;
    int field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    BOOL field8;
    BOOL field9;
    BOOL field10;
} ?;

typedef struct ktrace_config {
    char * field0;
    char * field1;
    char * field2;
    ? field3;
    ? field4;
    ? field5;
    int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    NSUInteger field10;
} ktrace_config;

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

