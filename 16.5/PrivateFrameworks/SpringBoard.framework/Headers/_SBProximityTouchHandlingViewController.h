// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBPROXIMITYTOUCHHANDLINGVIEWCONTROLLER_H
#define _SBPROXIMITYTOUCHHANDLINGVIEWCONTROLLER_H

@class UIViewController;


#import "SBProximitySettings.h"

@interface _SBProximityTouchHandlingViewController : UIViewController {
    CGFloat _statusBarHeight;
    SBProximitySettings *_proximitySettings;
}




-(BOOL)shouldAutorotate;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_view;
-(void)loadView;


@end


#endif