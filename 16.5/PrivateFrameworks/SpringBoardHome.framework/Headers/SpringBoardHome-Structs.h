typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct _NSZone {
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

typedef struct SBHWidgetFilteringParameters {
    NSUInteger families;
    BOOL includesNonStackable;
} SBHWidgetFilteringParameters;

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

typedef struct SBIconImageInfo {
    CGSize size;
    CGFloat scale;
    CGFloat continuousCornerRadius;
} SBIconImageInfo;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFRunLoopObserver {
} // Error Processing Struct Fields

typedef struct SBIconCoordinate {
    NSInteger column;
    NSInteger row;
} SBIconCoordinate;

typedef struct SBIconApproximateLayoutPosition {
    NSUInteger horizontal;
    NSUInteger vertical;
} SBIconApproximateLayoutPosition;

typedef struct SBVisibleColumnRange {
    NSUInteger startIconListIndex;
    NSUInteger startColumnIndex;
    NSUInteger endIconListIndex;
    NSUInteger endColumnIndex;
} SBVisibleColumnRange;

typedef struct SBHFloatRange {
    CGFloat field0;
    CGFloat field1;
} SBHFloatRange;

typedef struct SBIconListPredictedVisibleColumn {
    NSUInteger column;
    CGFloat confidence;
} SBIconListPredictedVisibleColumn;

typedef struct SBFolderPredictedVisibleColumn {
    NSUInteger iconListIndex;
    SBIconListPredictedVisibleColumn predictedVisibleColumn;
} SBFolderPredictedVisibleColumn;

typedef struct SBHIconGridSize {
    unsigned short columns;
    unsigned short rows;
} SBHIconGridSize;

typedef struct SBIconListPredictedVisibleRow {
    NSUInteger row;
    CGFloat confidence;
} SBIconListPredictedVisibleRow;

typedef struct SBHIconGridRange {
    NSUInteger field0;
    SBHIconGridSize field1;
} SBHIconGridRange;

typedef struct SBHIconGridSizeClassSizes {
    SBHIconGridSize small;
    SBHIconGridSize medium;
    SBHIconGridSize large;
    SBHIconGridSize newsLargeTall;
    SBHIconGridSize extraLarge;
} SBHIconGridSizeClassSizes;

typedef struct SBIconListLayoutMetricsParameters {
    CGRect field0;
    CGFloat field1;
    UIEdgeInsets field2;
    NSInteger field3;
    NSInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    SBHIconGridSizeClassSizes field7;
    NSUInteger field8;
    NSUInteger field9;
    NSUInteger field10;
    NSUInteger field11;
    CGSize field12;
    CGSize field13;
    CGFloat field14;
    CGSize field15;
    NSUInteger field16;
} SBIconListLayoutMetricsParameters;

typedef struct SBIconListLayoutAnimationParameters {
    CGPoint field0;
    CGFloat field1;
    SBIconImageInfo field2;
    BOOL field3;
    SBIconCoordinate field4;
    BOOL field5;
    BOOL field6;
    NSUInteger field7;
} SBIconListLayoutAnimationParameters;

typedef struct os_activity_scope_state_s {
    NSUInteger opaque;
} os_activity_scope_state_s;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct CGPDFPage {
} // Error Processing Struct Fields

typedef struct CGSVGDocument {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct SBHClockApplicationIconImageMetrics {
    CGFloat secondsHandWidth;
    CGFloat secondsHandLength;
    CGFloat secondsHandleLength;
    CGFloat secondsHandRingDiameter;
    CGFloat secondsHandRingKnockoutDiameter;
    CGSize secondsHandBounds;
    CGFloat minutesHandWidth;
    CGFloat minutesHandLength;
    CGFloat minutesHandRingDiameter;
    CGFloat minutesHandRingKnockoutDiameter;
    CGSize minutesHandBounds;
    CGFloat shadowRadius;
    CGFloat shadowInset;
    CGFloat hoursHandWidth;
    CGFloat hoursHandLength;
    CGSize hoursHandBounds;
    CGFloat separatorWidth;
    CGFloat separatorLength;
    CGFloat separatorExtraLength;
    CGFloat faceRadius;
    CGFloat numberPointSize;
    CGFloat contentsScale;
    SBIconImageInfo iconImageInfo;
} SBHClockApplicationIconImageMetrics;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct SBHPadAddWidgetSheetMetrics {
    CGFloat sheetMargin;
    CGFloat leadingPadding;
    CGFloat sidebarWidth;
    CGFloat gutterPadding;
    CGFloat trailingPadding;
    CGFloat topPadding;
    CGFloat widgetScaleFactor;
    CGSize scaledWidgetSize;
    NSUInteger widgetColumns;
} SBHPadAddWidgetSheetMetrics;

typedef struct SBRootFolderPageStateTransitionSnapshot {
    NSInteger field0;
    NSInteger field1;
    CGFloat field2;
} SBRootFolderPageStateTransitionSnapshot;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct SBRootFolderViewPageManagementLayoutMetrics {
    CGSize cellSpacing;
    CGFloat bottomMargin;
    CGFloat listViewScale;
} SBRootFolderViewPageManagementLayoutMetrics;

typedef struct SBHPageManagementCellMetrics {
    CGSize fullListViewSize;
    CGSize scaledListViewSize;
    UIEdgeInsets foregroundInsets;
    UIEdgeInsets backgroundInsets;
    CGFloat listViewVerticalPositionAdjustment;
    CGFloat toggleButtonDiameter;
    CGFloat toggleButtonVerticalMargin;
} SBHPageManagementCellMetrics;

typedef struct CAColorMatrix {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    float field8;
    float field9;
    float field10;
    float field11;
    float field12;
    float field13;
    float field14;
    float field15;
    float field16;
    float field17;
    float field18;
    float field19;
} CAColorMatrix;

typedef struct SBRootFolderViewMetrics {
    CGRect field0;
    CGRect field1;
    CGRect field2;
    CGRect field3;
    CGRect field4;
    CGRect field5;
    CGRect field6;
    CGFloat field7;
    CGRect field8;
    CGRect field9;
    CGRect field10;
} SBRootFolderViewMetrics;

typedef struct CHSWidgetRenderStyle {
    NSInteger field0;
    BOOL field1;
} CHSWidgetRenderStyle;

typedef struct SBHIconGridSizeClassAreas {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
} SBHIconGridSizeClassAreas;

typedef struct SBHIconManagerStatistics {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
    NSUInteger field9;
    NSUInteger field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    NSUInteger field14;
    NSUInteger field15;
    NSUInteger field16;
    NSUInteger field17;
    NSUInteger field18;
    NSUInteger field19;
    NSUInteger field20;
    NSUInteger field21;
} SBHIconManagerStatistics;

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct SBHIconGridSizeClassIconImageInfos {
    SBIconImageInfo icon;
    SBIconImageInfo small;
    SBIconImageInfo medium;
    SBIconImageInfo large;
    SBIconImageInfo newsLargeTall;
    SBIconImageInfo extraLarge;
} SBHIconGridSizeClassIconImageInfos;

typedef struct SBHIconGridSizeClassExtraFloats {
    CGFloat icon;
    CGFloat small;
    CGFloat medium;
    CGFloat large;
    CGFloat newsLargeTall;
    CGFloat extraLarge;
} SBHIconGridSizeClassExtraFloats;

typedef struct SBHStackLayoutMetrics {
    CGFloat field0;
    CGSize field1;
    CGPoint field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} SBHStackLayoutMetrics;

typedef struct _UITableViewVisibleCellsUpdateRanges {
    _NSRange field0;
    _NSRange field1;
    _NSRange field2;
    _NSRange field3;
    _NSRange field4;
    BOOL field5;
} _UITableViewVisibleCellsUpdateRanges;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct SBTitledHomeScreenButtonMetrics {
    CGFloat minimumButtonWidth;
    CGFloat minimumButtonHeight;
    CGFloat minimumHorizontalPadding;
    CGFloat baselineToTop;
    CGFloat preferredTitlePointSize;
    CGFloat minimumTitlePointSize;
} SBTitledHomeScreenButtonMetrics;

typedef struct SBIconListModelRotationReorderingInfo {
    BOOL field0;
    NSUInteger field1;
    NSUInteger field2;
    BOOL field3;
} SBIconListModelRotationReorderingInfo;

