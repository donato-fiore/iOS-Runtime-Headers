typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct ? {
    NSInteger value;
    int timescale;
    unsigned int flags;
    NSInteger epoch;
} ?;

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

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> __begin_;
} vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>;

typedef struct BoundingBox {
    float xmin;
    float ymin;
    float xmax;
    float ymax;
} BoundingBox;

typedef struct VGEarPose {
    int side;
    ? pose;
    float yawAngle;
    float pitchAngle;
    BoundingBox box;
    vector<float, std::allocator<float>> landmark_points;
} VGEarPose;

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> __begin_;
} vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>;

typedef struct float4x4 {
} // Error Processing Struct Fields

typedef struct EarDetector {
} // Error Processing Struct Fields

typedef struct __compressed_pair<cv3d::visage::ear_frame_selection::EarDetector *, std::default_delete<cv3d::visage::ear_frame_selection::EarDetector>> {
    EarDetector __value_;
} __compressed_pair<cv3d::visage::ear_frame_selection::EarDetector *, std::default_delete<cv3d::visage::ear_frame_selection::EarDetector>>;

typedef struct unique_ptr<cv3d::visage::ear_frame_selection::EarDetector, std::default_delete<cv3d::visage::ear_frame_selection::EarDetector>> {
    __compressed_pair<cv3d::visage::ear_frame_selection::EarDetector *, std::default_delete<cv3d::visage::ear_frame_selection::EarDetector>> __ptr_;
} unique_ptr<cv3d::visage::ear_frame_selection::EarDetector, std::default_delete<cv3d::visage::ear_frame_selection::EarDetector>>;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct CVAFaceTracking {
} // Error Processing Struct Fields

typedef struct __compressed_pair<VGCapturedPose *__strong *, std::allocator<VGCapturedPose *>> {
    id __value_;
} __compressed_pair<VGCapturedPose *__strong *, std::allocator<VGCapturedPose *>>;

typedef struct vector<VGCapturedPose *, std::allocator<VGCapturedPose *>> {
    id __begin_;
    id __end_;
    __compressed_pair<VGCapturedPose *__strong *, std::allocator<VGCapturedPose *>> __end_cap_;
} vector<VGCapturedPose *, std::allocator<VGCapturedPose *>>;

