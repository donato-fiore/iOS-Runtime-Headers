// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMNOTESPOSITIONHYPERREGIONCOMPOSER_H
#define SBSYSTEMNOTESPOSITIONHYPERREGIONCOMPOSER_H

@class NSArray, NSString;
@protocol SBPIPPositionHyperregionComposing, BSInvalidatable, SBPIPPositionHyperregionComposerDelegate;

#import <Foundation/Foundation.h>

#import "SBPIPPositionHyperregionLibrary.h"

@interface SBSystemNotesPositionHyperregionComposer : NSObject <SBPIPPositionHyperregionComposing>

 {
    SBPIPPositionHyperregionLibrary *_regionsLibrary;
    NSUInteger _state;
    CGSize _dismissToSize;
    NSUInteger _offscreenCorners;
    int _animationState;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
}


@property (copy, nonatomic) NSArray *connectedWindowScenes;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBPIPPositionHyperregionComposerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)canonicalPositionForPoint:(struct CGPoint )arg0 proposedPosition:(NSUInteger)arg1 geometry:(struct SBPIPPositionGeometryContext )arg2 interaction:(struct SBPIPPositionInteractionStateContext )arg3 ;
-(id)init;
-(id)positionRegionsForRegions:(id)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 interaction:(struct SBPIPPositionInteractionStateContext )arg2 ;
-(struct CGPoint )defaultCornerPositionForLayoutSettingsPosition:(NSUInteger)arg0 proposedCenter:(struct CGPoint )arg1 geometry:(struct SBPIPPositionGeometryContext )arg2 interaction:(struct SBPIPPositionInteractionStateContext )arg3 ;
-(void)_addOffscreenCornersToRegions:(id)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 ;
-(void)_setupStateCapture;
-(void)dealloc;
-(void)invalidate;
-(void)performActionsWithTransientStateChange:(id)arg0 ;
-(void)setupForEdgeProtectCornerSwipe;
-(void)setupForInteractiveCornerGesture;
-(void)setupForInteractiveCornerGestureEnd;
-(void)setupForInteractiveDismissalToSize:(struct CGSize )arg0 ;
-(void)setupForStandardBehavior;
-(void)setupForSwipesFromCorners:(NSUInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif