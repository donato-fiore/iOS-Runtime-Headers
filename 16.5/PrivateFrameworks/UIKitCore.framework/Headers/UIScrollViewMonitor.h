// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCROLLVIEWMONITOR_H
#define UISCROLLVIEWMONITOR_H

@class NSString;
@protocol _UIViewSubtreeMonitor, _UIScrollViewScrollObserver, UIScrollViewMonitorDelegate;

#import <Foundation/Foundation.h>

#import "UIScrollView.h"
#import "UIWindow.h"

@interface UIScrollViewMonitor : NSObject <_UIViewSubtreeMonitor, _UIScrollViewScrollObserver>

 {
    UIScrollView *_scrollView;
    UIWindow *_window;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIScrollViewMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_monitorsView:(id)arg0 ;
-(id)initWithScrollView:(id)arg0 ;
-(void)_monitoredView:(id)arg0 didMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)_monitoredView:(id)arg0 willMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)stopMonitoring;


@end


#endif