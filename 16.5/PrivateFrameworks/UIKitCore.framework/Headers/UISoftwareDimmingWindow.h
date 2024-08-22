// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISOFTWAREDIMMINGWINDOW_H
#define UISOFTWAREDIMMINGWINDOW_H



#import "UIWindow.h"

@interface UISoftwareDimmingWindow : UIWindow

@property (nonatomic) float overlayLevel; // ivar: _overlayLevel


-(BOOL)_ignoresHitTest;
-(id)_roleHint;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateOverlayColor;


@end


#endif