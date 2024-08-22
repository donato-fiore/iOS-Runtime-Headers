// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCREENTIMETRACKINGCONTROLLER_H
#define SBSCREENTIMETRACKINGCONTROLLER_H

@class FBSDisplayLayoutMonitor, FBSDisplayLayout, FBSDisplayLayoutTransitionContext, NSString;
@protocol FBSDisplayLayoutObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBScreenTimeTrackingController : NSObject <FBSDisplayLayoutObserver>

 {
    FBSDisplayLayoutMonitor *_layoutMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_isScreenOn;
    BOOL _queue_isPhoneOrFaceTimeActive;
    NSUInteger _queue_thisCategoryStartTime;
    CGFloat _queue_lastCategoryChangeTime;
    int _queue_activeContext;
    int _queue_activeCategory;
    FBSDisplayLayout *_queue_lastLayout;
    FBSDisplayLayoutTransitionContext *_queue_lastLayoutTransitionContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_nameForContext:(int)arg0 ;
-(id)init;
-(void)_queue_handleNewLayout:(id)arg0 withContext:(id)arg1 ;
-(void)_queue_setActiveCategory:(int)arg0 context:(int)arg1 ;
-(void)_queue_setPhoneOrFaceTimeActive:(BOOL)arg0 ;
-(void)_queue_setScreenOn:(BOOL)arg0 withContext:(id)arg1 ;
-(void)dealloc;
-(void)layoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;


@end


#endif