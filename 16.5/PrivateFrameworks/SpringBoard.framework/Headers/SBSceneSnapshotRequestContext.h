// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENESNAPSHOTREQUESTCONTEXT_H
#define SBSCENESNAPSHOTREQUESTCONTEXT_H

@protocol SBSceneSnapshotReferenceFrameProviding;

#import <Foundation/Foundation.h>

#import "SBLayoutStateTransitionContext.h"

@interface SBSceneSnapshotRequestContext : NSObject

@property (retain, nonatomic) NSObject<SBSceneSnapshotReferenceFrameProviding> *embeddedDisplayReferenceFrameProvider; // ivar: _embeddedDisplayReferenceFrameProvider
@property (retain, nonatomic) SBLayoutStateTransitionContext *sceneDisplayLayoutStateTransitionContext; // ivar: _sceneDisplayLayoutStateTransitionContext
@property (retain, nonatomic) NSObject<SBSceneSnapshotReferenceFrameProviding> *sceneDisplayReferenceFrameProvider; // ivar: _sceneDisplayReferenceFrameProvider
@property (nonatomic) NSUInteger sceneDisplayWindowManagementStyle; // ivar: _sceneDisplayWindowManagementStyle




@end


#endif