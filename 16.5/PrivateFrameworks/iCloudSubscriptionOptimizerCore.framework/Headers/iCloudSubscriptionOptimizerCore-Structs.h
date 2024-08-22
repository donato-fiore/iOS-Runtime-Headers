typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL appLaunchCount2wMax;
    BOOL appLaunchCount2wMedian;
    BOOL appLaunchCountSameSlot;
    BOOL avgWeeklyScreenTimeSeconds2w;
    BOOL cameraAppLaunchCount1w;
    BOOL cameraLaunchCountSameSlot;
    BOOL daemonVersion;
    BOOL dailyScreenTimeSeconds;
    BOOL diskStorageCapacityBytes;
    BOOL dropboxAppLaunchCount1w;
    BOOL filesAppLaunchCount1w;
    BOOL filesLaunchCountSameSlot;
    BOOL googleDriveAppLaunchCount1w;
    BOOL googlePhotoAppLaunchCount1w;
    BOOL isDoNotDisturbOnCount2w;
    BOOL isDrivingModeOnCount2w;
    BOOL isSleepModeOnCount2w;
    BOOL lastOpenedAppHour24h;
    BOOL minsSinceLastCameraAppLaunch1w;
    BOOL minsSinceLastFilesAppLaunch1w;
    BOOL minsSinceLastPhotosAppLaunch1w;
    BOOL minsUntilICloudBuy;
    BOOL minsUntilICloudNotificationOpened;
    BOOL minsUntilICloudOpenedSubStream;
    BOOL mlServerScore;
    BOOL numNotificationsSameSlot;
    BOOL numOpenedNotificationsSameSlot;
    BOOL offsetMins;
    BOOL openedICloudNotificationRatio1w;
    BOOL openedICloudNotificationRatio2w;
    BOOL openedNotificationCount2wMax;
    BOOL openedNotificationCount2wMedian;
    BOOL openedNotificationRatio1w;
    BOOL openedNotificationRatio24h;
    BOOL osVersionMajorVersion;
    BOOL osVersionMinorVersion;
    BOOL osVersionPatchVersion;
    BOOL photosAppLaunchCount1w;
    BOOL photosLaunchCount2wMax;
    BOOL photosLaunchCount2wMedian;
    BOOL photosLaunchCountSameSlot;
    BOOL timestampMillis;
    BOOL totalNotificationCount1w;
    BOOL totalNotificationCount2wMax;
    BOOL totalNotificationCount2wMedian;
    BOOL totalOpenedNotificationCount1w;
    BOOL usedDiskCapacityBytes;
    BOOL dayOfWeek;
    BOOL hourOfDay;
    BOOL icloudNotificationActionLabel;
    BOOL oBSOLETETrafficType;
    BOOL trafficType;
    BOOL userTier;
    BOOL buyLabel;
    BOOL isDoNotDisturbOn;
    BOOL isDoNotDisturbOnSameSlot;
    BOOL isDrivingModeOn;
    BOOL isDrivingModeOnSameSlot;
    BOOL isSleepModeOn;
    BOOL isSleepModeOnSameSlot;
    BOOL openLabelSubStream;
} ?;

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

