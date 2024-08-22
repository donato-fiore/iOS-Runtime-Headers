// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSSYSTEMAPERTURELAYOUTMONITOR_H
#define SBSSYSTEMAPERTURELAYOUTMONITOR_H

@class BSServiceConnection, NSPointerArray, NSArray, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBSSystemApertureLayoutMonitor : NSObject <BSInvalidatable>

 {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSPointerArray *_observers;
    NSArray *_frames;
    id<BSInvalidatable> *_restrictToInertAssertion;
    BOOL _isValid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)acquireRestrictSystemApertureLayoutToInertAssertionWithReason:(id)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)systemApertureLayoutDidChange:(id)arg0 ;


@end


#endif