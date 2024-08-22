// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBREACHABILITYWINDOW_H
#define SBREACHABILITYWINDOW_H



#import "SBSecureWindow.h"

@interface SBReachabilityWindow : SBSecureWindow



-(BOOL)_allowsOcclusionDetectionOverride;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithWallpaperVariant:(NSInteger)arg0 windowScene:(id)arg1 ;
-(id)view;


@end


#endif