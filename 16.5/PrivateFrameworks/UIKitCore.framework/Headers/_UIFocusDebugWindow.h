// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSDEBUGWINDOW_H
#define _UIFOCUSDEBUGWINDOW_H

@class NSTimer, NSArray;


#import "UIWindow.h"
#import "UIScrollView.h"

@interface _UIFocusDebugWindow : UIWindow {
    NSTimer *_timer;
    NSArray *_cacheModules;
    UIScrollView *_scrollView;
    CGPoint _lastDragPoint;
}




+(BOOL)_isSystemWindow;
+(BOOL)hasAnyModules;
+(id)moduleClasses;
-(BOOL)_isEligibleForFocusOcclusion;
-(BOOL)canBecomeKeyWindow;
-(BOOL)isTransparentFocusItem;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 ;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)_update:(id)arg0 ;
-(void)_updateTimer;
-(void)drag:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif