// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UAUSERACTIVITY_H
#define UAUSERACTIVITY_H

@class NSMutableDictionary, NSString, NSURL, SFCompanionAdvertiser, NSSet, NSDate, NSDictionary, NSData, CSSearchableItemAttributeSet, NSError, NSMutableSet, NSUUID, NSUserActivity;
@protocol SFCompanionAdvertiserDelegate, OS_dispatch_group, UAUserActivityDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UAUserActivityManager.h"

@interface UAUserActivity : NSObject <SFCompanionAdvertiserDelegate>

 {
    NSMutableDictionary *_frameworkPayload;
    NSString *_title;
    NSURL *_webpageURL;
    NSURL *_referrerURL;
    NSString *_targetContentIdentifier;
    SFCompanionAdvertiser *_advertiser;
    NSObject<OS_dispatch_group> *_advertiserCompletedGroup;
    SFCompanionAdvertiser *_resumerAdvertiser;
    CGFloat _lastSaveTime;
    BOOL _saveScheduled;
    BOOL _needsSave;
    BOOL _needsSaveValueAtEndOfWillSaveCallback;
    BOOL _dirty;
    BOOL _supportsContinuationStreams;
    BOOL _userActivityWasCreatedSent;
    BOOL _indexInProcess;
    NSInteger _inWillSaveCallback;
    NSSet *_keywords;
    NSDate *_expirationDate;
    NSString *_contentUserAction;
    NSSet *_requiredUserInfoKeys;
    int _forwardToCoreSpotlightIndexerCount;
    BOOL _eligibleForHandoff;
    BOOL _eligibleForSearch;
    BOOL _eligibleForReminders;
    BOOL _eligibleForPublicIndexing;
    BOOL _eligibleForPrediction;
    NSString *_persistentIdentifier;
    id<UAUserActivityDelegate> *_delegate;
    unsigned int _userInfoChangeCount;
    NSDictionary *_savedUserInfo;
    NSObject<OS_dispatch_queue> *_willCallSaveSerializationQueue;
}


@property (readonly) BOOL activityHasBeenSentToServer; // ivar: _activityHasBeenSentToServer
@property (copy) NSData *cachedEncodedUserInfo; // ivar: _cachedEncodedUserInfo
@property BOOL canCreateStreams; // ivar: _canCreateStreams
@property (copy) CSSearchableItemAttributeSet *contentAttributeSet;
@property (copy) NSString *contentIdentifier;
@property (copy) NSString *contentUserAction;
@property BOOL createsNewUUIDIfSaved; // ivar: _createsNewUUIDIfSaved
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSError *decodeUserInfoError; // ivar: _decodeUserInfoError
@property (weak) NSObject<UAUserActivityDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property BOOL dirty;
@property (retain) NSMutableSet *dirtyPayloadIdentifiers; // ivar: _dirtyPayloadIdentifiers
@property (copy) NSString *dynamicIdentifier; // ivar: _dynamicIdentifier
@property (getter=isEligibleForHandoff) BOOL eligibleForHandoff;
@property (getter=isEligibleForPrediction) BOOL eligibleForPrediction;
@property (getter=isEligibleForPublicIndexing) BOOL eligibleForPublicIndexing;
@property (getter=isEligibleForReminders) BOOL eligibleForReminders;
@property (getter=isEligibleForSearch) BOOL eligibleForSearch;
@property BOOL encodedContainsUnsynchronizedCloudDocument; // ivar: _encodedContainsUnsynchronizedCloudDocument
@property BOOL encodedFileProviderURL; // ivar: _encodedFileProviderURL
@property (copy) NSDate *expirationDate;
@property BOOL forceImmediateSendToServer; // ivar: _forceImmediateSendToServer
@property (readonly) BOOL forwardToCoreSpotlightIndexer;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly) BOOL isCurrent;
@property (copy) NSSet *keywords;
@property (copy) NSDate *madeCurrentDate; // ivar: _madeCurrentDate
@property (copy) NSDate *madeCurrentEndDate; // ivar: _madeCurrentEndDate
@property (readonly) CGFloat madeCurrentInterval; // ivar: _madeCurrentInterval
@property (readonly, copy) NSDate *madeInitiallyCurrentDate; // ivar: _madeInitiallyCurrentDate
@property (readonly, weak) UAUserActivityManager *manager; // ivar: _manager
@property BOOL needsSave;
@property (copy) NSDictionary *options; // ivar: _options
@property (readonly, copy) NSUUID *originalUniqueIdentifier; // ivar: _originalUniqueIdentifier
@property (readonly) NSUInteger os_state_handler; // ivar: _os_state_handler
@property (weak) NSUserActivity *parentUserActivity;
@property (retain) NSMutableDictionary *payloadDataCache; // ivar: _payloadDataCache
@property (retain) NSMutableDictionary *payloadObjects; // ivar: _payloadObjects
@property (retain) NSMutableDictionary *payloadUpdateBlocks; // ivar: _payloadUpdateBlocks
@property (copy) NSString *persistentIdentifier;
@property (copy) NSURL *referrerURL;
@property (copy) NSSet *requiredUserInfoKeys;
@property BOOL sendToServerPending; // ivar: _sendToServerPending
@property (copy) NSDate *sentToIndexerDate; // ivar: _sentToIndexerDate
@property (copy) NSData *streamsData;
@property (copy) NSString *subtitle;
@property (readonly) NSUInteger suggestedActionType; // ivar: _suggestedActionType
@property (readonly) Class superclass;
@property BOOL supportsContinuationStreams;
@property (copy) NSString *targetContentIdentifier;
@property (copy) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (copy) NSString *title;
@property (copy) NSString *typeIdentifier; // ivar: _typeIdentifier
@property (readonly, copy) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (getter=isUniversalLink) BOOL universalLink; // ivar: _universalLink
@property (copy) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly) NSUInteger userInfoChangeCount;
@property BOOL userInfoContainsFileURLs; // ivar: _userInfoContainsFileURLs
@property (copy) NSURL *webpageURL;
@property (readonly, retain) NSObject<OS_dispatch_queue> *willCallSaveSerializationQueue;


+(BOOL)checkWebpageURL:(id)arg0 actionType:(NSUInteger)arg1 throwIfFailed:(BOOL)arg2 ;
+(BOOL)currentUserActivityProxiesWithOptions:(id)arg0 matching:(id)arg1 completionHandler:(id)arg2 ;
+(BOOL)currentUserActivityUUIDWithOptions:(id)arg0 completionHandler:(id)arg1 ;
+(BOOL)determineIfUserActivityIsCurrent:(id)arg0 completionHandler:(id)arg1 ;
+(BOOL)isIndexPendingForUUID:(id)arg0 ;
+(BOOL)registerAsProxyForApplication:(int)arg0 options:(id)arg1 completionBlock:(id)arg2 ;
+(BOOL)supportsUserActivityAppLinks;
+(BOOL)userActivityContinuationSupported;
+(id)_decodeFromEntireString:(id)arg0 ;
+(id)_decodeFromScanner:(id)arg0 ;
+(id)_decodeFromString:(id)arg0 ;
+(id)_encodeKeyAndValueIntoString:(id)arg0 value:(id)arg1 ;
+(id)_encodeToString:(id)arg0 ;
+(id)allowedWebpageURLSchemes;
+(id)currentUserActivityUUID;
+(id)fetchUserActivityWithUUID:(id)arg0 intervalToWaitForDocumentSynchronizationToComplete:(CGFloat)arg1 completionHandler:(id)arg2 ;
+(id)mainBundleIdentifier;
+(id)observers;
+(id)registerForSuggestedActionNudgeOfType:(NSUInteger)arg0 withOptions:(id)arg1 block:(id)arg2 ;
+(id)userActivityFromUUID:(id)arg0 timeout:(CGFloat)arg1 withError:(*id)arg2 ;
+(id)userActivityFromUUID:(id)arg0 withError:(*id)arg1 ;
+(void)addDynamicUserActivity:(id)arg0 matching:(id)arg1 ;
+(void)addUserActivityObserver:(id)arg0 ;
+(void)deleteAllSavedUserActivitiesWithCompletionHandler:(id)arg0 ;
+(void)deleteSavedUserActivitiesWithPersistentIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
+(void)fetchUserActivityWithUUID:(id)arg0 completionHandler:(id)arg1 ;
+(void)removeDynamicUserActivity:(id)arg0 matching:(id)arg1 ;
+(void)removeUserActivityObserver:(id)arg0 ;
+(void)setIndexPending:(BOOL)arg0 forUUID:(id)arg1 ;
+(void)unregisterForSuggestedActionNudgeOfType:(id)arg0 ;
-(BOOL)_encodeIntoUserActivityStringWithSave:(BOOL)arg0 completionHandler:(id)arg1 ;
-(BOOL)archiveURL:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)createUserActivityDataWithSaving:(BOOL)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)createUserActivityStringsWithSaving:(BOOL)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)encodeUserInfo:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)finishUserInfoUpdate;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPayloadDirty:(id)arg0 ;
-(NSInteger)priority;
-(NSUInteger)beginUserInfoUpdate:(id)arg0 ;
-(id)_encodeIntoUserActivityDataWithSave:(BOOL)arg0 error:(*id)arg1 ;
-(id)_encodeIntoUserActivityStringWithSave:(BOOL)arg0 optionalString:(*id)arg1 optionalData:(*id)arg2 error:(*id)arg3 ;
-(id)archiver:(id)arg0 willEncodeObject:(id)arg1 ;
-(id)callWillSaveDelegateIfDirtyAndPackageUpData:(BOOL)arg0 clearDirty:(BOOL)arg1 ;
-(id)callWillSaveDelegateIfDirtyAndPackageUpData:(BOOL)arg0 clearDirty:(BOOL)arg1 completionHandler:(id)arg2 ;
-(id)contentAttributes;
-(id)contentType;
-(id)copyWithNewUUID:(BOOL)arg0 ;
-(id)createUserActivityDataWithSaving:(BOOL)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)createUserActivityStringsWithSaving:(BOOL)arg0 options:(id)arg1 optionalString:(*id)arg2 data:(*id)arg3 error:(*id)arg4 ;
-(id)decodeUserInfo:(id)arg0 ;
-(id)determineMatchingApplicationBundleIdentfierWithOptions:(id)arg0 ;
-(id)encodeUserInfo:(id)arg0 ;
-(id)encodeUserInfo:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initDynamicActivityWithTypeIdentifier:(id)arg0 dynamicIdentifier:(id)arg1 suggestedActionType:(NSUInteger)arg2 options:(id)arg3 ;
-(id)initWithManager:(id)arg0 userActivityInfo:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg0 ;
-(id)initWithTypeIdentifier:(id)arg0 dynamicIdentifier:(id)arg1 options:(id)arg2 ;
-(id)initWithTypeIdentifier:(id)arg0 options:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg0 suggestedActionType:(NSUInteger)arg1 options:(id)arg2 ;
-(id)initWithUserActivityData:(id)arg0 options:(id)arg1 ;
-(id)initWithUserActivityStrings:(id)arg0 optionalString:(id)arg1 tertiaryData:(id)arg2 options:(id)arg3 ;
-(id)objectForIdentifier:(id)arg0 ;
-(id)payloadForIdentifier:(id)arg0 ;
-(id)payloadIdentifiers;
-(id)payloadUpdateBlockForIdentifier:(SEL)arg0 ;
-(id)stateString;
-(id)teamID;
-(id)unarchiveURL:(id)arg0 error:(*id)arg1 ;
-(id)unarchiver:(id)arg0 didDecodeObject:(id)arg1 ;
-(id)userActivityInfoForSelf;
-(id)userActivityInfoForSelfWithPayload:(BOOL)arg0 ;
-(void)_resignCurrent;
-(void)addContentAttribute:(id)arg0 forKey:(id)arg1 ;
-(void)addKeywordsFromArray:(id)arg0 ;
-(void)addUserInfoEntriesFromDictionary:(id)arg0 ;
-(void)advertiser:(id)arg0 didReceiveInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)becomeCurrent;
-(void)dealloc;
-(void)didReceiveInputStream:(id)arg0 outputStream:(id)arg1 ;
-(void)didSynchronizeUserActivity;
-(void)displayInDtrace;
-(void)getContinuationStreamsWithCompletionHandler:(id)arg0 ;
-(void)indexActivity:(CGFloat)arg0 forceIndexing:(BOOL)arg1 ;
-(void)invalidate;
-(void)pinUserActivityWithCompletionHandler:(id)arg0 ;
-(void)prepareUserActivityForLaunchingWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeContentAttribute:(id)arg0 ;
-(void)resignCurrent;
-(void)scheduleSendUserActivityInfoToLSUserActivityd;
-(void)sendToCoreSpotlightIndexer;
-(void)sendUserActivityInfoToLSUserActivityd:(BOOL)arg0 onAsyncQueue:(BOOL)arg1 ;
-(void)setContentAttributes:(id)arg0 ;
-(void)setContentType:(id)arg0 ;
-(void)setPayload:(id)arg0 object:(id)arg1 identifier:(id)arg2 ;
-(void)setPayload:(id)arg0 object:(id)arg1 identifier:(id)arg2 dirty:(BOOL)arg3 ;
-(void)setPayloadIdentifier:(id)arg0 object:(id)arg1 withBlock:(id)arg2 ;
-(void)tellDaemonAboutNewLSUserActivity;
-(void)updateForwardToCoreSpotlightIndexer:(char)arg0 ;
-(void)willSynchronizeUserActivityWithHandler:(id)arg0 ;


@end


#endif