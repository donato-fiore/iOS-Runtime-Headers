// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDRAWERGRABBERVIEW_H
#define WFDRAWERGRABBERVIEW_H

@class UIView, NSArray, _UIGrabber;


#import "WFDrawerController.h"

@interface WFDrawerGrabberView : UIView {
    NSArray *_accessibilityCustomActions;
    _UIGrabber *_grabber;
}


@property (weak, nonatomic) WFDrawerController *drawerController; // ivar: _drawerController


-(BOOL)accessibilityActivate;
-(BOOL)accessibilityCollapseDrawer;
-(BOOL)accessibilityExpandDrawer;
-(BOOL)isAccessibilityElement;
-(id)accessibilityCustomActions;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)init;
-(struct CGRect )accessibilityFrame;


@end


#endif