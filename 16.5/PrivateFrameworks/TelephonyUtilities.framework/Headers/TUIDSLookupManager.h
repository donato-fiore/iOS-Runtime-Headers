// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIDSLOOKUPMANAGER_H
#define TUIDSLOOKUPMANAGER_H

@class NSString;
@protocol IDSBatchIDQueryControllerDelegate, TUIDSBatchIDQueryController, TUIDSIDQueryController, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TULocked.h"

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate>



@property (copy, nonatomic) id *batchQueryControllerCreationBlock; // ivar: _batchQueryControllerCreationBlock
@property (retain, nonatomic) NSObject<TUIDSBatchIDQueryController> *batchQuerySearchAudioController; // ivar: _batchQuerySearchAudioController
@property (retain, nonatomic) NSObject<TUIDSBatchIDQueryController> *batchQuerySearchMultiwayController; // ivar: _batchQuerySearchMultiwayController
@property (retain, nonatomic) NSObject<TUIDSBatchIDQueryController> *batchQuerySearchVideoController; // ivar: _batchQuerySearchVideoController
@property (retain, nonatomic) NSObject<TUIDSBatchIDQueryController> *batchQuerySearchiMessageController; // ivar: _batchQuerySearchiMessageController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TULocked *idsAVLessSharePlayCapableStatuses; // ivar: _idsAVLessSharePlayCapableStatuses
@property (readonly, nonatomic) TULocked *idsFaceTimeAudioStatuses; // ivar: _idsFaceTimeAudioStatuses
@property (readonly, nonatomic) TULocked *idsFaceTimeMultiwayStatuses; // ivar: _idsFaceTimeMultiwayStatuses
@property (readonly, nonatomic) TULocked *idsFaceTimeVideoStatuses; // ivar: _idsFaceTimeVideoStatuses
@property (readonly, nonatomic) TULocked *idsModernStatuses; // ivar: _idsModernStatuses
@property (readonly, nonatomic) TULocked *idsWebCapableStatuses; // ivar: _idsWebCapableStatuses
@property (readonly, nonatomic) TULocked *idsiMessageStatuses; // ivar: _idsiMessageStatuses
@property (readonly, nonatomic) NSObject<TUIDSIDQueryController> *queryController; // ivar: _queryController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(BOOL)isAnyDestinationAvailableInDestinations:(id)arg0 usingCache:(id)arg1 ;
+(id)sharedManager;
+(unsigned int)fzHandleIDStatusForDestination:(id)arg0 usingCache:(id)arg1 ;
-(BOOL)isAVLessSharePlayCapableForAnyDestinationInDestinations:(id)arg0 ;
-(BOOL)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)arg0 ;
-(BOOL)isFaceTimeAudioAvailableForItem:(id)arg0 ;
-(BOOL)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)arg0 ;
-(BOOL)isFaceTimeMultiwayAvailableForItem:(id)arg0 ;
-(BOOL)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)arg0 ;
-(BOOL)isFaceTimeVideoAvailableForItem:(id)arg0 ;
-(BOOL)isModernFaceTimeAvailableForDestination:(id)arg0 ;
-(BOOL)isWebCapableFaceTimeAvailableForDestination:(id)arg0 ;
-(BOOL)isiMessageAvailableForAnyDestinationInDestinations:(id)arg0 ;
-(id)init;
-(id)initWithQueryController:(id)arg0 ;
-(unsigned int)faceTimeAudioAvailabilityForDestination:(id)arg0 ;
-(unsigned int)faceTimeMultiwayAvailabilityForDestination:(id)arg0 ;
-(unsigned int)faceTimeVideoAvailabilityForDestination:(id)arg0 ;
-(void)batchQueryController:(id)arg0 updatedDestinationsStatus:(id)arg1 onService:(id)arg2 error:(id)arg3 ;
-(void)beginBatchQueryWithDestinations:(id)arg0 ;
-(void)beginBatchQueryWithDestinations:(id)arg0 includeMessages:(BOOL)arg1 ;
-(void)beginCachedQueryWithDestinations:(id)arg0 ;
-(void)beginCachedQueryWithDestinations:(id)arg0 includeMessages:(BOOL)arg1 ;
-(void)beginCachedQueryWithDestinations:(id)arg0 onService:(id)arg1 ;
-(void)beginQueryWithDestination:(id)arg0 onService:(id)arg1 ;
-(void)beginQueryWithDestinations:(id)arg0 ;
-(void)beginQueryWithDestinations:(id)arg0 includeMessages:(BOOL)arg1 ;
-(void)cancelQueries;
-(void)dealloc;
-(void)filteredDestinationForMultiway:(id)arg0 completionBlock:(id)arg1 ;
-(void)handleIDSQueryResultWithDestinationStatus:(id)arg0 onService:(id)arg1 ;
-(void)postStatusChangedNotification;
-(void)queryHasEndpointWithCapabilities:(id)arg0 forMultiwayDestinations:(id)arg1 completionBlock:(id)arg2 ;
-(void)queryHasWebOnlyEndpointsForDestinations:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif