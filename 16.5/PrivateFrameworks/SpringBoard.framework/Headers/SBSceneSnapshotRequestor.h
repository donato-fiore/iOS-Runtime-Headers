// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENESNAPSHOTREQUESTOR_H
#define SBSCENESNAPSHOTREQUESTOR_H

@class NSMutableSet, NSHashTable, NSString;
@protocol BSDescriptionProviding, BSInvalidatable, SBSceneSnapshotRequestorDelegate;

#import <Foundation/Foundation.h>


@interface SBSceneSnapshotRequestor : NSObject <BSDescriptionProviding, BSInvalidatable>

 {
    NSMutableSet *_outgoingSnapshots;
    NSMutableSet *_incomingSnapshots;
    NSHashTable *_preventSupplementalSnapshotsAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBSceneSnapshotRequestorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleSnapshotRequestAction:(id)arg0 forSceneHandle:(id)arg1 ;
-(id)_debugName;
-(id)_fbsSceneSnapshotRequestsFromSBSceneSnapshotRequests:(id)arg0 forSceneHandle:(id)arg1 settings:(id)arg2 snapshotRequestContext:(id)arg3 ;
-(id)_sbSceneSnapshotRequestsForSceneHandle:(id)arg0 settings:(id)arg1 snapshotRequestContext:(id)arg2 ;
-(id)_sceneSnapshotRequestContext;
-(id)_sceneSnapshotRequestStrategy;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)preventTakingSupplementalSnapshotsForBackgroundingScenesWithReason:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)invalidate;
-(void)invalidatePendingSnapshotsForSceneID:(id)arg0 ;
-(void)requestSnapshotsForSceneHandle:(id)arg0 updatingToNewSettings:(id)arg1 withUpdateContext:(id)arg2 ;


@end


#endif