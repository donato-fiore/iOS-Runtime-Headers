typedef struct __long {
    char * field0;
    NSUInteger field1;
    BOOL field2;
    BOOL field3;
} __long;

typedef struct __short {
    char field0;
    unsigned char field1;
    BOOL field2;
    BOOL field3;
} __short;

typedef struct __raw {
    NSUInteger field0;
} __raw;

typedef struct __rep {
    unk field0;
    __long field1;
    __short field2;
    __raw field3;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep field0;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> field0;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CodecSpecificInfoVP8 {
    BOOL field0;
    unsigned char field1;
    BOOL field2;
    char field3;
    BOOL field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
} CodecSpecificInfoVP8;

typedef struct GofInfoVP9 {
    NSUInteger field0;
    unsigned char field1;
    BOOL field2;
    unsigned char field3;
    unsigned char field4;
    unsigned short field5;
} GofInfoVP9;

typedef struct CodecSpecificInfoVP9 {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    unsigned char field5;
    BOOL field6;
    BOOL field7;
    unsigned char field8;
    NSUInteger field9;
    NSUInteger field10;
    BOOL field11;
    unsigned short field12;
    unsigned short field13;
    GofInfoVP9 field14;
    unsigned char field15;
    unsigned char field16;
    BOOL field17;
} CodecSpecificInfoVP9;

typedef struct CodecSpecificInfoH264 {
    int field0;
    unsigned char field1;
    BOOL field2;
    BOOL field3;
} CodecSpecificInfoH264;

typedef struct CodecSpecificInfoH265 {
    int field0;
    BOOL field1;
} CodecSpecificInfoH265;

typedef struct CompressedTuple<std::allocator<webrtc::DecodeTargetIndication>, unsigned long> {
    NSUInteger field0;
} CompressedTuple<std::allocator<webrtc::DecodeTargetIndication>, unsigned long>;

typedef struct Allocated {
    int field0;
    NSUInteger field1;
} Allocated;

typedef struct Inlined {
    char field0;
} Inlined;

typedef struct Storage<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>> {
    CompressedTuple<std::allocator<webrtc::DecodeTargetIndication>, unsigned long> field0;
    Allocated field1;
    Inlined field2;
} Storage<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>>;

typedef struct InlinedVector<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>> {
    Storage<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>> field0;
} InlinedVector<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>>;

typedef struct CompressedTuple<std::allocator<int>, unsigned long> {
    NSUInteger field0;
} CompressedTuple<std::allocator<int>, unsigned long>;

typedef struct Storage<int, 4UL, std::allocator<int>> {
    CompressedTuple<std::allocator<int>, unsigned long> field0;
    Allocated field1;
    Inlined field2;
} Storage<int, 4UL, std::allocator<int>>;

typedef struct InlinedVector<int, 4UL, std::allocator<int>> {
    Storage<int, 4UL, std::allocator<int>> field0;
} InlinedVector<int, 4UL, std::allocator<int>>;

typedef struct CompressedTuple<std::allocator<webrtc::CodecBufferUsage>, unsigned long> {
    NSUInteger field0;
} CompressedTuple<std::allocator<webrtc::CodecBufferUsage>, unsigned long>;

typedef struct CodecBufferUsage {
} // Error Processing Struct Fields

typedef struct Storage<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>> {
    CompressedTuple<std::allocator<webrtc::CodecBufferUsage>, unsigned long> field0;
    Allocated field1;
    Inlined field2;
} Storage<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>>;

typedef struct InlinedVector<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>> {
    Storage<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>> field0;
} InlinedVector<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>>;

typedef struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::allocator<unsigned long>>;

typedef struct vector<bool, std::allocator<bool>> {
    NSUInteger field0;
    NSUInteger field1;
    __compressed_pair<unsigned long, std::allocator<unsigned long>> field2;
} vector<bool, std::allocator<bool>>;

typedef struct bitset<32UL> {
    NSUInteger field0;
} bitset<32UL>;

typedef struct GenericFrameInfo {
    int field0;
    int field1;
    InlinedVector<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>> field2;
    InlinedVector<int, 4UL, std::allocator<int>> field3;
    InlinedVector<int, 4UL, std::allocator<int>> field4;
    InlinedVector<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>> field5;
    vector<bool, std::allocator<bool>> field6;
    bitset<32UL> field7;
} GenericFrameInfo;

typedef struct empty_struct {
} // Error Processing Struct Fields

typedef struct dummy_type {
    empty_struct data;
} dummy_type;

typedef struct optional<webrtc::GenericFrameInfo> {
    BOOL field0;
    unk field1;
    GenericFrameInfo field2;
    dummy_type field3;
} optional<webrtc::GenericFrameInfo>;

typedef struct Storage<int, 10UL, std::allocator<int>> {
    CompressedTuple<std::allocator<int>, unsigned long> field0;
    Allocated field1;
    Inlined field2;
} Storage<int, 10UL, std::allocator<int>>;

typedef struct InlinedVector<int, 10UL, std::allocator<int>> {
    Storage<int, 10UL, std::allocator<int>> field0;
} InlinedVector<int, 10UL, std::allocator<int>>;

typedef struct CompressedTuple<std::allocator<webrtc::RenderResolution>, unsigned long> {
    NSUInteger field0;
} CompressedTuple<std::allocator<webrtc::RenderResolution>, unsigned long>;

typedef struct RenderResolution {
} // Error Processing Struct Fields

typedef struct Storage<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>> {
    CompressedTuple<std::allocator<webrtc::RenderResolution>, unsigned long> field0;
    Allocated field1;
    Inlined field2;
} Storage<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>>;

typedef struct InlinedVector<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>> {
    Storage<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>> field0;
} InlinedVector<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>>;

typedef struct FrameDependencyTemplate {
} // Error Processing Struct Fields

typedef struct vector<webrtc::FrameDependencyTemplate, std::allocator<webrtc::FrameDependencyTemplate>> {
} // Error Processing Struct Fields

typedef struct FrameDependencyStructure {
    int field0;
    int field1;
    int field2;
    InlinedVector<int, 10UL, std::allocator<int>> field3;
    InlinedVector<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>> field4;
    vector<webrtc::FrameDependencyTemplate, std::allocator<webrtc::FrameDependencyTemplate>> field5;
} FrameDependencyStructure;

typedef struct optional<webrtc::FrameDependencyStructure> {
    BOOL field0;
    unk field1;
    FrameDependencyStructure field2;
    dummy_type field3;
} optional<webrtc::FrameDependencyStructure>;

typedef struct CodecSpecificInfo {
    int field0;
    unsigned char field1;
    CGFloat field2;
    char field3;
    unsigned short field4;
    char field5;
    int field6;
    float field7;
    int field8;
    char field9;
    unsigned int field10;
    float field11;
    int field12;
    CodecSpecificInfoVP8 field13;
    CodecSpecificInfoVP9 field14;
    CodecSpecificInfoH264 field15;
    CodecSpecificInfoH265 field16;
    BOOL field17;
    optional<webrtc::GenericFrameInfo> field18;
    optional<webrtc::FrameDependencyStructure> field19;
} CodecSpecificInfo;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct EncodedImageBufferInterface {
} // Error Processing Struct Fields

typedef struct scoped_refptr<webrtc::EncodedImageBufferInterface> {
    EncodedImageBufferInterface ptr_;
} scoped_refptr<webrtc::EncodedImageBufferInterface>;

typedef struct VideoPlayoutDelay {
    int field0;
    int field1;
} VideoPlayoutDelay;

typedef struct Timing {
    unsigned char field0;
    NSInteger field1;
    NSInteger field2;
    NSInteger field3;
    NSInteger field4;
    NSInteger field5;
    NSInteger field6;
    NSInteger field7;
    NSInteger field8;
} Timing;

typedef struct optional<int> {
    BOOL engaged_;
    unk ;
    int data_;
    dummy_type dummy_;
} optional<int>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void field0;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, unsigned long>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>>;

typedef struct __tree<std::__value_type<int, unsigned long>, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>, std::allocator<std::__value_type<int, unsigned long>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, unsigned long>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>> field2;
} __tree<std::__value_type<int, unsigned long>, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>, std::allocator<std::__value_type<int, unsigned long>>>;

typedef struct map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>> {
    __tree<std::__value_type<int, unsigned long>, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>, std::allocator<std::__value_type<int, unsigned long>>> field0;
} map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>>;

typedef struct Chromaticity {
    float field0;
    float field1;
} Chromaticity;

typedef struct HdrMasteringMetadata {
    Chromaticity field0;
    Chromaticity field1;
    Chromaticity field2;
    Chromaticity field3;
    float field4;
    float field5;
} HdrMasteringMetadata;

typedef struct HdrMetadata {
    HdrMasteringMetadata field0;
    int field1;
    int field2;
} HdrMetadata;

typedef struct optional<webrtc::HdrMetadata> {
    BOOL field0;
    unk field1;
    HdrMetadata field2;
    dummy_type field3;
} optional<webrtc::HdrMetadata>;

typedef struct ColorSpace {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    int field3;
    int field4;
    int field5;
    optional<webrtc::HdrMetadata> field6;
} ColorSpace;

typedef struct optional<webrtc::ColorSpace> {
    BOOL field0;
    unk field1;
    ColorSpace field2;
    dummy_type field3;
} optional<webrtc::ColorSpace>;

typedef struct optional<unsigned short> {
    BOOL field0;
    unk field1;
    unsigned short field2;
    dummy_type field3;
} optional<unsigned short>;

typedef struct Data {
} // Error Processing Struct Fields

typedef struct scoped_refptr<webrtc::RtpPacketInfos::Data> {
    Data field0;
} scoped_refptr<webrtc::RtpPacketInfos::Data>;

typedef struct RtpPacketInfos {
    scoped_refptr<webrtc::RtpPacketInfos::Data> field0;
} RtpPacketInfos;

typedef struct EncodedImage {
    unsigned int field0;
    unsigned int field1;
    NSInteger field2;
    NSInteger field3;
    int field4;
    int field5;
    unsigned char field6;
    int field7;
    VideoPlayoutDelay field8;
    Timing field9;
    scoped_refptr<webrtc::EncodedImageBufferInterface> field10;
    NSUInteger field11;
    unsigned int field12;
    optional<int> field13;
    optional<int> field14;
    map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>> field15;
    optional<webrtc::ColorSpace> field16;
    optional<unsigned short> field17;
    RtpPacketInfos field18;
    BOOL field19;
    BOOL field20;
} EncodedImage;

typedef struct I420BufferInterface {
} // Error Processing Struct Fields

typedef struct scoped_refptr<webrtc::I420BufferInterface> {
    I420BufferInterface ptr_;
} scoped_refptr<webrtc::I420BufferInterface>;

typedef struct optional<unsigned int> {
    BOOL field0;
    unk field1;
    unsigned int field2;
    dummy_type field3;
} optional<unsigned int>;

typedef struct optional<double> {
    BOOL field0;
    unk field1;
    CGFloat field2;
    dummy_type field3;
} optional<double>;

typedef struct optional<std::string> {
    BOOL field0;
    unk field1;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field2;
    dummy_type field3;
} optional<std::string>;

typedef struct RtpEncodingParameters {
    optional<unsigned int> field0;
    CGFloat field1;
    int field2;
    optional<int> field3;
    optional<int> field4;
    optional<double> field5;
    optional<int> field6;
    optional<double> field7;
    optional<std::string> field8;
    BOOL field9;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field10;
    BOOL field11;
} RtpEncodingParameters;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>> field2;
} __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>>;

typedef struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>> field0;
} map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>>;

typedef struct CompressedTuple<std::allocator<webrtc::ScalabilityMode>, unsigned long> {
    NSUInteger field0;
} CompressedTuple<std::allocator<webrtc::ScalabilityMode>, unsigned long>;

typedef struct Storage<webrtc::ScalabilityMode, 27UL, std::allocator<webrtc::ScalabilityMode>> {
    CompressedTuple<std::allocator<webrtc::ScalabilityMode>, unsigned long> field0;
    Allocated field1;
    Inlined field2;
} Storage<webrtc::ScalabilityMode, 27UL, std::allocator<webrtc::ScalabilityMode>>;

typedef struct InlinedVector<webrtc::ScalabilityMode, 27UL, std::allocator<webrtc::ScalabilityMode>> {
    Storage<webrtc::ScalabilityMode, 27UL, std::allocator<webrtc::ScalabilityMode>> field0;
} InlinedVector<webrtc::ScalabilityMode, 27UL, std::allocator<webrtc::ScalabilityMode>>;

typedef struct SdpVideoFormat {
    basic_string<char, std::char_traits<char>, std::allocator<char>> field0;
    map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> field1;
    InlinedVector<webrtc::ScalabilityMode, 27UL, std::allocator<webrtc::ScalabilityMode>> field2;
} SdpVideoFormat;

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct OpaqueCMMemoryPool {
} // Error Processing Struct Fields

typedef struct OpaqueVTDecompressionSession {
} // Error Processing Struct Fields

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct BitrateAdjuster {
} // Error Processing Struct Fields

typedef struct __compressed_pair<webrtc::BitrateAdjuster *, std::default_delete<webrtc::BitrateAdjuster>> {
    BitrateAdjuster __value_;
} __compressed_pair<webrtc::BitrateAdjuster *, std::default_delete<webrtc::BitrateAdjuster>>;

typedef struct unique_ptr<webrtc::BitrateAdjuster, std::default_delete<webrtc::BitrateAdjuster>> {
    __compressed_pair<webrtc::BitrateAdjuster *, std::default_delete<webrtc::BitrateAdjuster>> __ptr_;
} unique_ptr<webrtc::BitrateAdjuster, std::default_delete<webrtc::BitrateAdjuster>>;

typedef struct H264ProfileLevelId {
    int profile;
    int level;
} H264ProfileLevelId;

typedef struct optional<webrtc::H264ProfileLevelId> {
    BOOL engaged_;
    unk ;
    H264ProfileLevelId data_;
    dummy_type dummy_;
} optional<webrtc::H264ProfileLevelId>;

typedef struct OpaqueVTCompressionSession {
} // Error Processing Struct Fields

typedef struct SpsState {
    unsigned int width;
    unsigned int height;
    unsigned int delta_pic_order_always_zero_flag;
    unsigned int separate_colour_plane_flag;
    unsigned int frame_mbs_only_flag;
    unsigned int log2_max_frame_num;
    unsigned int log2_max_pic_order_cnt_lsb;
    unsigned int pic_order_cnt_type;
    unsigned int max_num_ref_frames;
    unsigned int vui_params_present;
    unsigned int id;
} SpsState;

typedef struct optional<webrtc::SpsParser::SpsState> {
    BOOL engaged_;
    unk ;
    SpsState data_;
    dummy_type dummy_;
} optional<webrtc::SpsParser::SpsState>;

typedef struct PpsState {
    BOOL bottom_field_pic_order_in_frame_present_flag;
    BOOL weighted_pred_flag;
    BOOL entropy_coding_mode_flag;
    unsigned int weighted_bipred_idc;
    unsigned int redundant_pic_cnt_present_flag;
    int pic_init_qp_minus26;
    unsigned int id;
    unsigned int sps_id;
} PpsState;

typedef struct optional<webrtc::PpsParser::PpsState> {
    BOOL engaged_;
    unk ;
    PpsState data_;
    dummy_type dummy_;
} optional<webrtc::PpsParser::PpsState>;

typedef struct H264BitstreamParser {
    unk _vptr$BitstreamParser;
    optional<webrtc::SpsParser::SpsState> sps_;
    optional<webrtc::PpsParser::PpsState> pps_;
    optional<int> last_slice_qp_delta_;
} H264BitstreamParser;

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * __value_;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct SimulcastStream {
    int field0;
    int field1;
    float field2;
    unsigned char field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    BOOL field8;
} SimulcastStream;

typedef struct SpatialLayer {
    unsigned short field0;
    unsigned short field1;
    float field2;
    unsigned char field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    BOOL field8;
} SpatialLayer;

typedef struct TimingFrameTriggerThresholds {
    NSInteger field0;
    unsigned short field1;
} TimingFrameTriggerThresholds;

typedef struct VideoCodecVP8 {
    unsigned char field0;
    BOOL field1;
    BOOL field2;
    int field3;
} VideoCodecVP8;

typedef struct VideoCodecVP9 {
    unsigned char field0;
    BOOL field1;
    int field2;
    BOOL field3;
    BOOL field4;
    unsigned char field5;
    BOOL field6;
    int field7;
} VideoCodecVP9;

typedef struct VideoCodecH264 {
    int field0;
    unsigned char field1;
} VideoCodecH264;

typedef struct optional<webrtc::ScalabilityMode> {
    BOOL field0;
    unk field1;
    unsigned char field2;
    dummy_type field3;
} optional<webrtc::ScalabilityMode>;

typedef struct VideoCodec {
    int field0;
    unsigned short field1;
    unsigned short field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    BOOL field7;
    unsigned int field8;
    unsigned char field9;
    SimulcastStream field10;
    SpatialLayer field11;
    int field12;
    BOOL field13;
    TimingFrameTriggerThresholds field14;
    BOOL field15;
    int field16;
    CGFloat field17;
    unsigned char field18;
    CGFloat field19;
    char field20;
    int field21;
    VideoCodecVP8 field22;
    VideoCodecVP9 field23;
    VideoCodecH264 field24;
    optional<webrtc::ScalabilityMode> field25;
    int field26;
    BOOL field27;
} VideoCodec;

typedef struct VideoDecoder {
} // Error Processing Struct Fields

typedef struct __compressed_pair<webrtc::VideoDecoder *, std::default_delete<webrtc::VideoDecoder>> {
    VideoDecoder __value_;
} __compressed_pair<webrtc::VideoDecoder *, std::default_delete<webrtc::VideoDecoder>>;

typedef struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> {
    __compressed_pair<webrtc::VideoDecoder *, std::default_delete<webrtc::VideoDecoder>> __ptr_;
} unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>>;

typedef struct VideoEncoder {
} // Error Processing Struct Fields

typedef struct __compressed_pair<webrtc::VideoEncoder *, std::default_delete<webrtc::VideoEncoder>> {
    VideoEncoder __value_;
} __compressed_pair<webrtc::VideoEncoder *, std::default_delete<webrtc::VideoEncoder>>;

typedef struct unique_ptr<webrtc::VideoEncoder, std::default_delete<webrtc::VideoEncoder>> {
    __compressed_pair<webrtc::VideoEncoder *, std::default_delete<webrtc::VideoEncoder>> __ptr_;
} unique_ptr<webrtc::VideoEncoder, std::default_delete<webrtc::VideoEncoder>>;

