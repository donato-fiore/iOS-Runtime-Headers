// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBUISYSTEMAPERTUREELEMENTSOURCEANIMATIONCONTEXT_H
#define _SBUISYSTEMAPERTUREELEMENTSOURCEANIMATIONCONTEXT_H

@class NSMutableSet, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _SBUISystemApertureElementSourceAnimationContext : NSObject {
    NSMutableSet *_sceneResizeActions;
    NSMutableArray *_pendingCoordinatedAnimations;
}


@property (readonly, nonatomic) BOOL canSkipRemoteSceneResizeActions; // ivar: _canSkipRemoteSceneResizeActions
@property (readonly, nonatomic) BOOL hasPendingCoordinatedAnimations;
@property (readonly, nonatomic) BOOL hasTransientLocalResizeAction;


-(void)addPendingAnimation:(id)arg0 ;
-(void)addSceneResizeAction:(id)arg0 ;
-(void)disableSkippingSceneResizeActions;
-(void)noteIsExpectingRemoteSceneResizeAction;
-(void)performPendingCoordinatedAnimations;
-(void)removeSceneResizeAction:(id)arg0 ;


@end


#endif