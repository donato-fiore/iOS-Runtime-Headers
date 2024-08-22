// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUSCALEDPROGRESS_H
#define TSUSCALEDPROGRESS_H

@protocol OS_dispatch_queue;


#import "TSUProgress.h"
#import "TSUScaledProgressStorage.h"

@interface TSUScaledProgress : TSUProgress {
    TSUScaledProgressStorage *_storage;
    TSUProgress *_progress;
    id *_progressObserver;
    NSObject<OS_dispatch_queue> *_progressQueue;
}


@property CGFloat maxValue;
@property (retain) TSUProgress *progress;


-(BOOL)isIndeterminate;
-(CGFloat)value;
-(id)addProgressObserverWithValueInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)init;
-(id)initForSubclass;
-(void)p_addProgressObserverToProgressInQueue;
-(void)p_removeProgressObserverFromProgressInQueue;
-(void)removeProgressObserver:(id)arg0 ;


@end


#endif