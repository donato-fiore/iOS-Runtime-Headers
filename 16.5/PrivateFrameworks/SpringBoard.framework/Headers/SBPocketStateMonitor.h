// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPOCKETSTATEMONITOR_H
#define SBPOCKETSTATEMONITOR_H

@class CMPocketStateManager, NSHashTable, NSString;
@protocol CMPocketStateDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBPocketStateMonitor : NSObject <CMPocketStateDelegate>

 {
    CMPocketStateManager *_pocketStateManager;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger pocketState; // ivar: _pocketState
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)initWithCMPocketStateManager:(id)arg0 calloutQueue:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)pocketStateManager:(id)arg0 didUpdateState:(NSInteger)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif