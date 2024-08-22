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

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

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

typedef struct CGContext {
} // Error Processing Struct Fields

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

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct SKUIIndexPathRange {
    NSInteger field0;
    NSInteger field1;
    NSInteger field2;
    NSInteger field3;
} SKUIIndexPathRange;

typedef struct OpaqueJSContext {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CTServerConnection {
} // Error Processing Struct Fields

typedef struct __CFSet {
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

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct _UICollectionViewVisibleCellsUpdateResult {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    BOOL field3;
} _UICollectionViewVisibleCellsUpdateResult;

typedef struct CGPDFPage {
} // Error Processing Struct Fields

typedef struct CGSVGDocument {
} // Error Processing Struct Fields

typedef struct SKUIEditorialStyle {
    NSInteger alignment;
    NSInteger bodyFontWeight;
    float bodyFontSize;
    float linkSpacing;
    NSInteger titleFontWeight;
    float titleFontSize;
    float titleSpacing;
} SKUIEditorialStyle;

typedef struct SKUILockupStyle {
    NSInteger artworkSize;
    NSInteger layoutStyle;
    NSUInteger visibleFields;
} SKUILockupStyle;

typedef struct __CTFrame {
} // Error Processing Struct Fields

typedef struct __CFAttributedString {
} // Error Processing Struct Fields

typedef struct __CTFramesetter {
} // Error Processing Struct Fields

typedef struct IKCornerRadii {
    CGFloat bottomLeft;
    CGFloat bottomRight;
    CGFloat topLeft;
    CGFloat topRight;
} IKCornerRadii;

typedef struct __CTLine {
} // Error Processing Struct Fields

typedef struct SKUIStackedImageConfiguration {
    UIOffset field0;
    CGSize field1;
    NSInteger field2;
} SKUIStackedImageConfiguration;

typedef struct __CFRunLoopObserver {
} // Error Processing Struct Fields

typedef struct _UITableViewVisibleCellsUpdateRanges {
    _NSRange field0;
    _NSRange field1;
    _NSRange field2;
    _NSRange field3;
    _NSRange field4;
    BOOL field5;
} _UITableViewVisibleCellsUpdateRanges;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct ITColor {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} ITColor;

typedef struct SKUIProductLockupLayoutSizing {
    CGSize field0;
    CGSize field1;
    CGSize field2;
    CGSize field3;
    CGSize field4;
} SKUIProductLockupLayoutSizing;

typedef struct SKUIPhysicalCircleConstants {
    CGFloat circleDensity;
    CGFloat circleLinearDamping;
    CGFloat circleMaximumDiameter;
    CGFloat circleMinimumDiameter;
    CGFloat springMaximumFrequency;
    CGFloat springMinimumFrequency;
    CGFloat springDamping;
    CGFloat translationForceMultiplier;
} SKUIPhysicalCircleConstants;

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

