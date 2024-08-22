// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIEDITINGOVERLAYGESTUREVIEW_H
#define UIEDITINGOVERLAYGESTUREVIEW_H

@class NSString;
@protocol _UIEventObserver;


#import "UIView.h"
#import "UIWindow.h"

@interface UIEditingOverlayGestureView : UIView <_UIEventObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIWindow *previousWindow; // ivar: _previousWindow
@property (readonly) Class superclass;


-(BOOL)_isTransparentFocusRegion;
-(id)_gestureRecognizersForEvent:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)didMoveToWindow;


@end


#endif