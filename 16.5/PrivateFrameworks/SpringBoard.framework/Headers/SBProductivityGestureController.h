// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPRODUCTIVITYGESTURECONTROLLER_H
#define SBPRODUCTIVITYGESTURECONTROLLER_H

@class FBSceneManager, _UIKBProductivitySingleTapGesture, _UIKBProductivityDoubleTapGesture, _UIKBProductivityPanGestureRecognizer, _UIKBProductivityLongPressGestureRecognizer, _UIKBProductivityPinchGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "SBSystemGestureManager.h"
#import "SBWorkspaceKeyboardFocusController.h"

@interface SBProductivityGestureController : NSObject <UIGestureRecognizerDelegate>

 {
    FBSceneManager *_sceneManager;
    SBSystemGestureManager *_systemGestureManager;
    SBWorkspaceKeyboardFocusController *_focusController;
    _UIKBProductivitySingleTapGesture *_threeFingerSingleTap;
    _UIKBProductivityDoubleTapGesture *_threeFingerDoubleTap;
    _UIKBProductivityPanGestureRecognizer *_threeFingerSlide;
    _UIKBProductivityLongPressGestureRecognizer *_threeFingerLongPress;
    _UIKBProductivityPinchGestureRecognizer *_threeFingerPinch;
    CGFloat _initPinchableDistance;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_enabledForCurrentAppScenes;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(NSInteger)_orientationOfFocusedSceneForGesture:(id)arg0 ;
-(NSInteger)slideDirectionWithGesture:(id)arg0 ;
-(id)_focusedSceneForAction;
-(id)initWithSystemGestureManager:(id)arg0 focusController:(id)arg1 ;
-(void)_setupGestureRecognizers;
-(void)handleProductivityGesture:(id)arg0 ;


@end


#endif