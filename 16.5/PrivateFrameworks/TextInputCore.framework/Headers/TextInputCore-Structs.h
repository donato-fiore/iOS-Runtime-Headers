typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __Mecabra {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct ? {
    id __prevOp;
    id NSOperation;
    id __nextOp;
    id NSOperation;
    id __nextPriOp;
    id NSOperation;
    NSInteger __queue;
    id NSOperationQueue;
    unk __dependencies;
    void NSMutableArray;
    void __down_dependencies;
    CGFloat NSHashTable;
    char * __unfinished_deps;
    id __completion;
    id __obsInfo;
    unk __implicitObsInfo;
    _opaque_pthread_mutex_t __thread_prio;
    _opaque_pthread_cond_t __nameBuffer;
    os_unfair_lock_s _voucher;
    BOOL NSObject<OS_voucher>;
    uint8_t __schedule;
    unsigned char __wait_mutex;
    char __wait_cond;
    uint8_t __lock;
    BOOL _shouldRemoveDependenciesAfterFinish;
    uint8_t __state;
    BOOL __prio;
    uint8_t __cached_isReady;
    unsigned char __isCancelled;
    uint8_t __propertyQoS;
    unsigned char __isExecutingObserverCount;
    uint8_t __isFinishedObserverCount;
    unsigned char __isReadyObserverCount;
    uint8_t __isCancelledObserverCount;
    unsigned char field34;
    uint8_t field35;
    unsigned char field36;
} ?;

typedef struct _LXLexicon {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct TITokenID {
    unsigned int lexicon_id;
    unsigned int word_id;
} TITokenID;

typedef struct DictionaryContainer {
} // Error Processing Struct Fields

typedef struct RefPtr<KB::DictionaryContainer> {
    DictionaryContainer m_ptr;
} RefPtr<KB::DictionaryContainer>;

typedef struct String {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned char field3;
    char * field4;
    char field5;
} String;

typedef struct LanguageModel {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<KB::LanguageModel> {
    LanguageModel __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<KB::LanguageModel>;

typedef struct USet {
} // Error Processing Struct Fields

typedef struct shared_ptr<std::vector<KB::LanguageModelContext>> {
} // Error Processing Struct Fields

typedef struct vector<TITokenID, std::allocator<TITokenID>> {
} // Error Processing Struct Fields

typedef struct LinguisticContextImpl {
} // Error Processing Struct Fields

typedef struct __compressed_pair<language_modeling::LinguisticContextImpl *, std::default_delete<language_modeling::LinguisticContextImpl>> {
    LinguisticContextImpl field0;
} __compressed_pair<language_modeling::LinguisticContextImpl *, std::default_delete<language_modeling::LinguisticContextImpl>>;

typedef struct unique_ptr<language_modeling::LinguisticContextImpl, std::default_delete<language_modeling::LinguisticContextImpl>> {
    __compressed_pair<language_modeling::LinguisticContextImpl *, std::default_delete<language_modeling::LinguisticContextImpl>> field0;
} unique_ptr<language_modeling::LinguisticContextImpl, std::default_delete<language_modeling::LinguisticContextImpl>>;

typedef struct LinguisticContext {
    unique_ptr<language_modeling::LinguisticContextImpl, std::default_delete<language_modeling::LinguisticContextImpl>> field0;
} LinguisticContext;

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void field0;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void field0;
    void field1;
    __compressed_pair<std::string *, std::allocator<std::string>> field2;
} vector<std::string, std::allocator<std::string>>;

typedef struct LanguageModelContext {
    shared_ptr<std::vector<KB::LanguageModelContext>> field0;
    vector<TITokenID, std::allocator<TITokenID>> field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    LinguisticContext field5;
    LinguisticContext field6;
    vector<std::string, std::allocator<std::string>> field7;
} LanguageModelContext;

typedef struct TypologyLogger {
} // Error Processing Struct Fields

typedef struct shared_ptr<KB::TypologyLogger> {
} // Error Processing Struct Fields

typedef struct RecentMessage {
} // Error Processing Struct Fields

typedef struct vector<RecentMessage, std::allocator<RecentMessage>> {
} // Error Processing Struct Fields

typedef struct KeyboardLayout {
} // Error Processing Struct Fields

typedef struct RefPtr<TI::Favonius::KeyboardLayout> {
    KeyboardLayout m_ptr;
} RefPtr<TI::Favonius::KeyboardLayout>;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct pair<NSString *, NSArray<NSNumber *> *> {
    id field0;
    id field1;
} pair<NSString *, NSArray<NSNumber *> *>;

typedef struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> {
} // Error Processing Struct Fields

typedef struct StaticDictionary {
} // Error Processing Struct Fields

typedef struct __compressed_pair<KB::StaticDictionary *, std::default_delete<KB::StaticDictionary>> {
    StaticDictionary __value_;
} __compressed_pair<KB::StaticDictionary *, std::default_delete<KB::StaticDictionary>>;

typedef struct unique_ptr<KB::StaticDictionary, std::default_delete<KB::StaticDictionary>> {
    __compressed_pair<KB::StaticDictionary *, std::default_delete<KB::StaticDictionary>> __ptr_;
} unique_ptr<KB::StaticDictionary, std::default_delete<KB::StaticDictionary>>;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct __CFAttributedString {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __EmojiLocaleDataWrapper {
} // Error Processing Struct Fields

typedef struct _TIRevisionHistoryTokenIterator {
    NSUInteger tokenIndex;
    NSUInteger documentLocation;
} _TIRevisionHistoryTokenIterator;

typedef struct __MecabraContext {
} // Error Processing Struct Fields

typedef struct CMTouchHistory {
} // Error Processing Struct Fields

typedef struct RefPtr<TI::Favonius::CMTouchHistory> {
    CMTouchHistory m_ptr;
} RefPtr<TI::Favonius::CMTouchHistory>;

typedef struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL> {
    void field0;
    NSUInteger field1;
} VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL>;

typedef struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL> {
    NSUInteger field0;
    VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL> field1;
} Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL>;

typedef struct PathResamplerParams {
    CGFloat segment_length;
    int inflection_point_detection_mode;
    int inflection_point_type;
    BOOL should_downsample;
    CGFloat minimum_pause_length;
    BOOL should_flush_on_pause;
} PathResamplerParams;

typedef struct PathSample {
} // Error Processing Struct Fields

typedef struct vector<TI::CP::PathSample, std::allocator<TI::CP::PathSample>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
    unsigned int __value_;
} __compressed_pair<unsigned int *, std::allocator<unsigned int>>;

typedef struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int __begin_;
    unsigned int __end_;
    __compressed_pair<unsigned int *, std::allocator<unsigned int>> __end_cap_;
} vector<unsigned int, std::allocator<unsigned int>>;

typedef struct Path {
    vector<TI::CP::PathSample, std::allocator<TI::CP::PathSample>> m_samples;
    vector<unsigned int, std::allocator<unsigned int>> m_inflection_points;
} Path;

typedef struct PathResampler {
    PathResamplerParams m_params;
    Path m_resampled_path;
    Path m_raw_path;
    BOOL m_is_final;
    unsigned int m_processed_sample_count;
    unsigned int m_retroactively_processed_sample_count;
} PathResampler;

typedef struct _CFBurstTrie {
} // Error Processing Struct Fields

typedef struct HCIndexTableFileHeader {
    unsigned int field0;
    unsigned short field1;
    unsigned char field2;
} HCIndexTableFileHeader;

typedef struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long long *, std::allocator<unsigned long long>>;

typedef struct vector<unsigned long long, std::allocator<unsigned long long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> __end_cap_;
} vector<unsigned long long, std::allocator<unsigned long long>>;

typedef struct __CFURL {
} // Error Processing Struct Fields

