typedef struct ? {
    int level;
    int x;
    int y;
    int uncertainty;
} ?;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct _GEOStandardTileKey {
    BOOL reserved;
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL type;
    BOOL pixelSize;
    BOOL textScale;
} _GEOStandardTileKey;

typedef struct _GEOGloriaQuadIDTileKey {
    BOOL z;
    BOOL quadKey;
    BOOL type;
    BOOL padding;
    unk typeSpecificInfo;
    ? cellularInfo;
    unsigned int unused;
} _GEOGloriaQuadIDTileKey;

typedef struct _GEORegionalResourceKey {
    BOOL index;
    BOOL scenarios;
    BOOL type;
    BOOL pixelSize;
    BOOL textScale;
    BOOL forceRefetch;
    BOOL padding;
} _GEORegionalResourceKey;

typedef struct _GEOSputnikMetadataKey {
    BOOL part;
    BOOL region;
    BOOL type;
    BOOL pixelSize;
    BOOL padding;
} _GEOSputnikMetadataKey;

typedef struct _GEOFlyoverKey {
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL h;
    BOOL region;
    BOOL type;
    BOOL pixelSize;
    BOOL textScale;
} _GEOFlyoverKey;

typedef struct _GEOTransitLineSelectionKey {
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL muid;
} _GEOTransitLineSelectionKey;

typedef struct _GEOPolygonSelectionKey {
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL polyId;
} _GEOPolygonSelectionKey;

typedef struct _GEOTileOverlayKey {
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL contentScale;
    BOOL providerId;
    BOOL keyframeIndex;
    BOOL padding;
} _GEOTileOverlayKey;

typedef struct _GEOIdentifiedResourceKey {
    NSUInteger identifier;
    unsigned char levelOfDetail;
    unsigned char type;
    BOOL supportsASTC;
    BOOL padding;
} _GEOIdentifiedResourceKey;

typedef struct _GEOMuninMeshKey {
    BOOL pointId;
    BOOL buildId;
    BOOL bucketId;
    BOOL cameraId;
    BOOL lod;
} _GEOMuninMeshKey;

typedef struct _GEOVisualLocalizationTrackKey {
    unsigned short formatVersion;
    unsigned char uncertainty;
    BOOL reserved;
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL padding;
} _GEOVisualLocalizationTrackKey;

typedef struct _GEOVisualLocalizationMetadataKey {
    BOOL maxSupportedOutputVersion;
    BOOL maxSupportedFormatVersion;
    BOOL reserved;
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL padding;
} _GEOVisualLocalizationMetadataKey;

typedef struct _GEOVisualLocalizationDataKey {
    NSUInteger buildID;
    unsigned char uncertainty;
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL padding;
} _GEOVisualLocalizationDataKey;

typedef struct _GEOS2TileKey {
    BOOL z;
    BOOL x;
    BOOL y;
    BOOL f;
    BOOL type;
    BOOL pixelSize;
    BOOL textScale;
    BOOL padding;
} _GEOS2TileKey;

typedef struct _GEOTileKey {
    BOOL provider;
    BOOL expires;
    unk ;
    _GEOStandardTileKey standard;
    _GEOGloriaQuadIDTileKey gloriaQuad;
    _GEORegionalResourceKey regional;
    _GEOSputnikMetadataKey sputnikMetadata;
    _GEOFlyoverKey flyover;
    _GEOTransitLineSelectionKey transitLineSelection;
    _GEOPolygonSelectionKey polygonSelection;
    _GEOTileOverlayKey tileOverlay;
    _GEOIdentifiedResourceKey identifiedResource;
    _GEOMuninMeshKey muninMesh;
    _GEOVisualLocalizationTrackKey visualLocalization;
    _GEOVisualLocalizationMetadataKey visualLocalizationMetadata;
    _GEOVisualLocalizationDataKey visualLocalizationData;
    _GEOS2TileKey s2Tile;
} _GEOTileKey;

typedef struct _GEOVisualLocalizationTrackAdditionalInfo {
    NSUInteger field0;
    unsigned int field1;
    BOOL field2;
} _GEOVisualLocalizationTrackAdditionalInfo;

typedef struct __list_node_base<VLLocalizationDataKey, void *> {
    void __prev_;
    void __next_;
} __list_node_base<VLLocalizationDataKey, void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__list_node<VLLocalizationDataKey, void *>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__list_node<VLLocalizationDataKey, void *>>>;

typedef struct list<VLLocalizationDataKey, std::allocator<VLLocalizationDataKey>> {
    __list_node_base<VLLocalizationDataKey, void *> __end_;
    __compressed_pair<unsigned long, std::allocator<std::__list_node<VLLocalizationDataKey, void *>>> __size_alloc_;
} list<VLLocalizationDataKey, std::allocator<VLLocalizationDataKey>>;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct GEOOnce_s {
    os_unfair_lock_s lock;
    BOOL didRun;
} GEOOnce_s;

typedef struct vl_t {
} // Error Processing Struct Fields

