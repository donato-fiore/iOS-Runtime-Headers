// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPROXIMITYTOUCHHANDLINGCONTROLLER_H
#define SBPROXIMITYTOUCHHANDLINGCONTROLLER_H

@class UIWindowScene, UIWindow, NSSet, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_SBProximityTouchHandlingViewController.h"

@interface SBProximityTouchHandlingController : NSObject <BSInvalidatable>

 {
    UIWindowScene *_windowScene;
    UIWindow *_proxTouchHandlingWindow;
    _SBProximityTouchHandlingViewController *_proxTouchHandlingViewController;
    id<BSInvalidatable> *_suppressBackBoardTouchCancellation;
    id<BSInvalidatable> *_suppressSystemGestures;
}


@property (nonatomic) BOOL absorbTouchesBelowStatusBar; // ivar: _absorbTouchesBelowStatusBar
@property (retain, nonatomic) NSSet *allowedSystemGestureTypes; // ivar: _allowedSystemGestureTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat statusBarHeight; // ivar: _statusBarHeight
@property (readonly) Class superclass;


-(id)initWithSettings:(id)arg0 touchHandlingDelegate:(id)arg1 ;
-(void)invalidate;
-(void)windowSceneDidConnect:(id)arg0 ;


@end


#endif