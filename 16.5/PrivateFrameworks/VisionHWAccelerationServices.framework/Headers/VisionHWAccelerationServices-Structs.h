typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct UnifiedAppState {
    id processState;
    int RBSProcessState;
} UnifiedAppState;

typedef struct optional<UnifiedAppState> {
    unk ;
    char __null_state_;
    UnifiedAppState __val_;
    BOOL __engaged_;
} optional<UnifiedAppState>;

