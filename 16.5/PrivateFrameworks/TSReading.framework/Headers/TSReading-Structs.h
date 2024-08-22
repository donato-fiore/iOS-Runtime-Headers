typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct CATransform3D {
    CGFloat m11;
    CGFloat m12;
    CGFloat m13;
    CGFloat m14;
    CGFloat m21;
    CGFloat m22;
    CGFloat m23;
    CGFloat m24;
    CGFloat m31;
    CGFloat m32;
    CGFloat m33;
    CGFloat m34;
    CGFloat m41;
    CGFloat m42;
    CGFloat m43;
    CGFloat m44;
} CATransform3D;

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _xmlTextWriter {
} // Error Processing Struct Fields

typedef struct CGPDFDocument {
} // Error Processing Struct Fields

typedef struct _xmlNode {
} // Error Processing Struct Fields

typedef struct _xmlDoc {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct __CTLine {
} // Error Processing Struct Fields

typedef struct _xmlNs {
} // Error Processing Struct Fields

typedef struct __compressed_pair<EQKitMathMLParserState **, std::allocator<EQKitMathMLParserState *>> {
    int __value_;
} __compressed_pair<EQKitMathMLParserState **, std::allocator<EQKitMathMLParserState *>>;

typedef struct __split_buffer<EQKitMathMLParserState *, std::allocator<EQKitMathMLParserState *>> {
    int __first_;
    int __begin_;
    int __end_;
    __compressed_pair<EQKitMathMLParserState **, std::allocator<EQKitMathMLParserState *>> __end_cap_;
} __split_buffer<EQKitMathMLParserState *, std::allocator<EQKitMathMLParserState *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<EQKitMathMLParserState>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<EQKitMathMLParserState>>;

typedef struct deque<EQKitMathMLParserState, std::allocator<EQKitMathMLParserState>> {
    __split_buffer<EQKitMathMLParserState *, std::allocator<EQKitMathMLParserState *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<EQKitMathMLParserState>> __size_;
} deque<EQKitMathMLParserState, std::allocator<EQKitMathMLParserState>>;

typedef struct stack<EQKitMathMLParserState, std::deque<EQKitMathMLParserState>> {
    deque<EQKitMathMLParserState, std::allocator<EQKitMathMLParserState>> c;
} stack<EQKitMathMLParserState, std::deque<EQKitMathMLParserState>>;

typedef struct Schemata {
    unk field0;
    int field1;
    id field2;
    id field3;
} Schemata;

typedef struct AttributeCollection {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL mType;
} ?;

typedef struct __wrap_iter<double *> {
    CGFloat field0;
} __wrap_iter<double *>;

typedef struct __compressed_pair<EQKitTypes::Crossout::Enum *, std::allocator<EQKitTypes::Crossout::Enum>> {
    int __value_;
} __compressed_pair<EQKitTypes::Crossout::Enum *, std::allocator<EQKitTypes::Crossout::Enum>>;

typedef struct vector<EQKitTypes::Crossout::Enum, std::allocator<EQKitTypes::Crossout::Enum>> {
    int __begin_;
    int __end_;
    __compressed_pair<EQKitTypes::Crossout::Enum *, std::allocator<EQKitTypes::Crossout::Enum>> __end_cap_;
} vector<EQKitTypes::Crossout::Enum, std::allocator<EQKitTypes::Crossout::Enum>>;

typedef struct Collection {
} // Error Processing Struct Fields

typedef struct EQKitCacheLRUCounter {
    NSUInteger field0;
} EQKitCacheLRUCounter;

typedef struct Manager {
    unk field0;
    Collection field1;
    EQKitCacheLRUCounter field2;
} Manager;

typedef struct Config {
    int field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
} Config;

typedef struct __CTRunDelegate {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, NSMutableArray *>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>, std::allocator<std::__hash_value_type<const long long, NSMutableArray *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, NSMutableArray *>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>, std::allocator<std::__hash_value_type<const long long, NSMutableArray *>>>;

typedef struct unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::equal_to<const long long>, std::allocator<std::pair<const long long, NSMutableArray *>>> {
    __hash_table<std::__hash_value_type<const long long, NSMutableArray *>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash, true>, std::allocator<std::__hash_value_type<const long long, NSMutableArray *>>> __table_;
} unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::equal_to<const long long>, std::allocator<std::pair<const long long, NSMutableArray *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, TSP::ObjectIdentifierHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, TSP::ObjectIdentifierHash, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, TSPData *__weak>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, TSP::ObjectIdentifierHash, true>, std::allocator<std::__hash_value_type<const long long, TSPData *__weak>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, TSP::ObjectIdentifierHash, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, TSPData *__weak>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, TSP::ObjectIdentifierHash, true>, std::allocator<std::__hash_value_type<const long long, TSPData *__weak>>>;

typedef struct unordered_map<const long long, TSPData *__weak, TSP::ObjectIdentifierHash, std::equal_to<const long long>, std::allocator<std::pair<const long long, TSPData *__weak>>> {
    __hash_table<std::__hash_value_type<const long long, TSPData *__weak>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, TSP::ObjectIdentifierHash, true>, std::allocator<std::__hash_value_type<const long long, TSPData *__weak>>> __table_;
} unordered_map<const long long, TSPData *__weak, TSP::ObjectIdentifierHash, std::equal_to<const long long>, std::allocator<std::pair<const long long, TSPData *__weak>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestHash, TSP::DataDigestEqualTo, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestHash, TSP::DataDigestEqualTo, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestEqualTo, TSP::DataDigestHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestEqualTo, TSP::DataDigestHash, true>>;

typedef struct __hash_table<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestHash, TSP::DataDigestEqualTo, true>, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestEqualTo, TSP::DataDigestHash, true>, std::allocator<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestHash, TSP::DataDigestEqualTo, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestEqualTo, TSP::DataDigestHash, true>> __p3_;
} __hash_table<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestHash, TSP::DataDigestEqualTo, true>, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestEqualTo, TSP::DataDigestHash, true>, std::allocator<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>>>;

typedef struct unordered_map<const std::array<unsigned char, 20>, TSPData *__weak, TSP::DataDigestHash, TSP::DataDigestEqualTo, std::allocator<std::pair<const std::array<unsigned char, 20>, TSPData *__weak>>> {
    __hash_table<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestHash, TSP::DataDigestEqualTo, true>, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestEqualTo, TSP::DataDigestHash, true>, std::allocator<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>>> __table_;
} unordered_map<const std::array<unsigned char, 20>, TSPData *__weak, TSP::DataDigestHash, TSP::DataDigestEqualTo, std::allocator<std::pair<const std::array<unsigned char, 20>, TSPData *__weak>>>;

typedef struct CGDataProvider {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct array<unsigned char, 20UL> {
    unsigned char __elems_;
} array<unsigned char, 20UL>;

typedef struct sqlite3_blob {
} // Error Processing Struct Fields

typedef struct _CCCryptor {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_t {
} // Error Processing Struct Fields

typedef struct _TSKThreadInfo {
    _opaque_pthread_t threadId;
    unsigned int count;
} _TSKThreadInfo;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct _UITraitCollectionTraitChanges {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
} _UITraitCollectionTraitChanges;

typedef struct _UITraitCollectionChangeDescription {
    id field0;
    id field1;
    BOOL field2;
    _UITraitCollectionTraitChanges field3;
} _UITraitCollectionChangeDescription;

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct CACornerRadii {
    CGSize field0;
    CGSize field1;
    CGSize field2;
    CGSize field3;
} CACornerRadii;

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _CAPropertyInfo {
    unsigned int field0;
    BOOL field1;
    BOOL field2;
    SEL field3;
    char * field4;
    __CFString field5;
} _CAPropertyInfo;

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct TSSPropertyStore {
} // Error Processing Struct Fields

typedef struct CGShading {
} // Error Processing Struct Fields

typedef struct _TSDStrokeOutsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} _TSDStrokeOutsets;

typedef struct path_descr {
} // Error Processing Struct Fields

typedef struct Path {
    int field0;
    int field1;
    int field2;
    path_descr field3;
    int field4;
    int field5;
    BOOL field6;
    BOOL field7;
    int field8;
    int field9;
    int field10;
    char * field11;
} Path;

typedef struct PATHSEGMENT {
    BOOL field0;
    BOOL field1;
    CGPoint field2;
} PATHSEGMENT;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
    uint8_t __a_value;
    int field1;
} __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>;

typedef struct atomic<int> {
    __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> __a_;
} atomic<int>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct __compressed_pair<boost::polygon::segment_data<double> *, std::allocator<boost::polygon::segment_data<double>>> {
    void field0;
} __compressed_pair<boost::polygon::segment_data<double> *, std::allocator<boost::polygon::segment_data<double>>>;

typedef struct vector<boost::polygon::segment_data<double>, std::allocator<boost::polygon::segment_data<double>>> {
    void field0;
    void field1;
    __compressed_pair<boost::polygon::segment_data<double> *, std::allocator<boost::polygon::segment_data<double>>> field2;
} vector<boost::polygon::segment_data<double>, std::allocator<boost::polygon::segment_data<double>>>;

typedef struct StrokeArchive {
} // Error Processing Struct Fields

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<id<TSWPStorageObserver>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<id<TSWPStorageObserver>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<id<TSWPStorageObserver>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<id<TSWPStorageObserver>>>;

typedef struct __tree<id<TSWPStorageObserver>, std::less<id<TSWPStorageObserver>>, std::allocator<id<TSWPStorageObserver>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<id<TSWPStorageObserver>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<id<TSWPStorageObserver>>> __pair3_;
} __tree<id<TSWPStorageObserver>, std::less<id<TSWPStorageObserver>>, std::allocator<id<TSWPStorageObserver>>>;

typedef struct set<id<TSWPStorageObserver>, std::less<id<TSWPStorageObserver>>, std::allocator<id<TSWPStorageObserver>>> {
    __tree<id<TSWPStorageObserver>, std::less<id<TSWPStorageObserver>>, std::allocator<id<TSWPStorageObserver>>> __tree_;
} set<id<TSWPStorageObserver>, std::less<id<TSWPStorageObserver>>, std::allocator<id<TSWPStorageObserver>>>;

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct __CTParagraphStyle {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<const TSWPListStyle *, std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::less<const TSWPListStyle *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<const TSWPListStyle *, std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::less<const TSWPListStyle *>, true>>;

typedef struct __tree<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::__map_value_compare<const TSWPListStyle *, std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::less<const TSWPListStyle *>, true>, std::allocator<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<const TSWPListStyle *, std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::less<const TSWPListStyle *>, true>> __pair3_;
} __tree<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::__map_value_compare<const TSWPListStyle *, std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::less<const TSWPListStyle *>, true>, std::allocator<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>>>;

typedef struct map<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>, std::less<const TSWPListStyle *>, std::allocator<std::pair<const TSWPListStyle *const, std::vector<TSWPTopicNumberEntry>>>> {
    __tree<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::__map_value_compare<const TSWPListStyle *, std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::less<const TSWPListStyle *>, true>, std::allocator<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>>> __tree_;
} map<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>, std::less<const TSWPListStyle *>, std::allocator<std::pair<const TSWPListStyle *const, std::vector<TSWPTopicNumberEntry>>>>;

typedef struct TSWPTopicNumberHints {
    map<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>, std::less<const TSWPListStyle *>, std::allocator<std::pair<const TSWPListStyle *const, std::vector<TSWPTopicNumberEntry>>>> _numbersForListStyle;
    NSUInteger _charIndex;
    NSUInteger _validThroughCharIndex;
    id _styleProvider;
} TSWPTopicNumberHints;

typedef struct __list_node_base<unsigned long, void *> {
    void __prev_;
    void __next_;
} __list_node_base<unsigned long, void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__list_node<unsigned long, void *>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__list_node<unsigned long, void *>>>;

typedef struct list<unsigned long, std::allocator<unsigned long>> {
    __list_node_base<unsigned long, void *> __end_;
    __compressed_pair<unsigned long, std::allocator<std::__list_node<unsigned long, void *>>> __size_alloc_;
} list<unsigned long, std::allocator<unsigned long>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>>>;

typedef struct map<unsigned long, TSWPFontHeightCacheEntry, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSWPFontHeightCacheEntry>>> {
    __tree<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>>> __tree_;
} map<unsigned long, TSWPFontHeightCacheEntry, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSWPFontHeightCacheEntry>>>;

typedef struct TSWPLineFragment {
} // Error Processing Struct Fields

typedef struct __CFStringTokenizer {
} // Error Processing Struct Fields

typedef struct TSWPParagraphEnumerator {
    id field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    BOOL field6;
} TSWPParagraphEnumerator;

typedef struct TSWPRangeVector {
} // Error Processing Struct Fields

typedef struct TSWPAdornmentRect {
    int field0;
    id field1;
    id field2;
    CGRect field3;
} TSWPAdornmentRect;

typedef struct _TSWPCharIndexAndPosition {
    NSUInteger field0;
    int field1;
    CGFloat field2;
    int field3;
    CGFloat field4;
} _TSWPCharIndexAndPosition;

typedef struct TSWPLineFragmentArray {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<TSWPLineFragmentArray> {
    TSWPLineFragmentArray __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<TSWPLineFragmentArray>;

typedef struct Info {
} // Error Processing Struct Fields

typedef struct vector<TSWPRepBoundsAnalyzer::Info, std::allocator<TSWPRepBoundsAnalyzer::Info>> {
} // Error Processing Struct Fields

typedef struct _TSWPCharIndexAndAffinity {
} // Error Processing Struct Fields

typedef struct vector<_TSWPCharIndexAndAffinity, std::allocator<_TSWPCharIndexAndAffinity>> {
} // Error Processing Struct Fields

typedef struct TSWPStorageTransaction {
} // Error Processing Struct Fields

typedef struct TSWPAttributeRecord {
} // Error Processing Struct Fields

typedef struct TSWPChangeAttributeArray {
    unk field0;
    unsigned int field1;
    NSUInteger field2;
    NSUInteger field3;
    TSWPAttributeRecord field4;
    id field5;
    NSUInteger field6;
    BOOL field7;
    id field8;
    int field9;
} TSWPChangeAttributeArray;

typedef struct TSWPAttributeArray {
} // Error Processing Struct Fields

typedef struct TSWPParagraphAttributeArray {
} // Error Processing Struct Fields

typedef struct TSWPParagraphTypesetter {
} // Error Processing Struct Fields

typedef struct shared_ptr<TSWPParagraphTypesetter> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>>;

typedef struct map<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>> {
    __tree<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>> __tree_;
} map<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>>;

typedef struct CGFont {
} // Error Processing Struct Fields

typedef struct TSWPDrawingState {
} // Error Processing Struct Fields

typedef struct TSWPAdornmentLine {
} // Error Processing Struct Fields

typedef struct __tree_const_iterator<TSTMergeRangeElem, std::__tree_node<TSTMergeRangeElem, void *> *, long> {
    void __ptr_;
} __tree_const_iterator<TSTMergeRangeElem, std::__tree_node<TSTMergeRangeElem, void *> *, long>;

typedef struct __hash_iterator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> {
    void __node_;
} __hash_iterator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *>;

typedef struct __hash_map_iterator<std::__hash_iterator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *>> {
    __hash_iterator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> __i_;
} __hash_map_iterator<std::__hash_iterator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *>>;

typedef struct __CFUUID {
} // Error Processing Struct Fields

typedef struct _TSTDefaultCellBlock {
    id defaultBodyCell;
    id TSTCell;
    id defaultHeaderRowCell;
    id TSTCell;
} _TSTDefaultCellBlock;

typedef struct WHCCol {
} // Error Processing Struct Fields

typedef struct vector<TSTWidthHeightCache_Private::WHCCol, std::allocator<TSTWidthHeightCache_Private::WHCCol>> {
} // Error Processing Struct Fields

typedef struct WHCRow {
} // Error Processing Struct Fields

typedef struct vector<TSTWidthHeightCache_Private::WHCRow, std::allocator<TSTWidthHeightCache_Private::WHCRow>> {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct TSTTableRBTreeNode_s {
} // Error Processing Struct Fields

typedef struct TSTTableStrokeDefaults {
} // Error Processing Struct Fields

typedef struct TSTCellStorage {
    ? field0;
    unsigned char field1;
} TSTCellStorage;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUColumnRowRect, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUColumnRowRect, void *>>>;

typedef struct __compressed_pair<unsigned long, TSTCellRangeRowMajorLess> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, TSTCellRangeRowMajorLess>;

typedef struct __tree<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::allocator<TSUColumnRowRect>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUColumnRowRect, void *>>> __pair1_;
    __compressed_pair<unsigned long, TSTCellRangeRowMajorLess> __pair3_;
} __tree<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::allocator<TSUColumnRowRect>>;

typedef struct set<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::allocator<TSUColumnRowRect>> {
    __tree<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::allocator<TSUColumnRowRect>> __tree_;
} set<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::allocator<TSUColumnRowRect>>;

typedef struct __compressed_pair<unsigned long, TSTCellRangeColumnMajorLess> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, TSTCellRangeColumnMajorLess>;

typedef struct __tree<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::allocator<TSUColumnRowRect>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUColumnRowRect, void *>>> __pair1_;
    __compressed_pair<unsigned long, TSTCellRangeColumnMajorLess> __pair3_;
} __tree<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::allocator<TSUColumnRowRect>>;

typedef struct set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::allocator<TSUColumnRowRect>> {
    __tree<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::allocator<TSUColumnRowRect>> __tree_;
} set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::allocator<TSUColumnRowRect>>;

typedef struct TSTStrokeRun {
    unsigned int field0;
    unsigned int field1;
    id field2;
    CGFloat field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} TSTStrokeRun;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>>;

typedef struct __hash_table<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>, std::allocator<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>> __p3_;
} __hash_table<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>, std::allocator<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>>>;

typedef struct unordered_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, std::allocator<std::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate>>> {
    __hash_table<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>, std::allocator<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>>> __table_;
} unordered_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, std::allocator<std::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>>;

typedef struct __hash_table<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>, std::allocator<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>> __p3_;
} __hash_table<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>, std::allocator<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>>>;

typedef struct unordered_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, std::allocator<std::pair<const TSUColumnRowCoordinate, TSUColumnRowSize>>> {
    __hash_table<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, true>, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher, true>, std::allocator<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>>> __table_;
} unordered_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, std::allocator<std::pair<const TSUColumnRowCoordinate, TSUColumnRowSize>>>;

typedef struct __docFlags {
    BOOL inClose;
    BOOL isOpen;
    BOOL inOpen;
    BOOL inRevert;
    BOOL isAutosavingBecauseOfTimer;
    BOOL versionWithoutRecentChangesIsNotLastOpened;
    BOOL ignoreUndoAndRedoNotifications;
    BOOL editingTemporarilyDisabled;
    BOOL editingDisabledDueToPermissions;
    BOOL isRegisteredAsFilePresenter;
    BOOL movingFile;
    BOOL savingError;
    BOOL inConflict;
    BOOL needToStopAccessingSecurityScopedResource;
} __docFlags;

