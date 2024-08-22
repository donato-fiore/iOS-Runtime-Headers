// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUFAKEPROGRESS_H
#define TSUFAKEPROGRESS_H

@protocol OS_dispatch_queue;


#import "TSUBasicProgress.h"

@interface TSUFakeProgress : TSUBasicProgress {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSUInteger _currentStage;
    NSUInteger _numberOfStages;
    BOOL _stopped;
}




-(id)initWithMaxValue:(CGFloat)arg0 ;
-(id)initWithMaxValue:(CGFloat)arg0 numberOfStages:(NSUInteger)arg1 ;
-(void)advanceToStage:(NSUInteger)arg0 ;
-(void)p_slowlyAdvanceToNextStage;
-(void)start;
-(void)stop;


@end


#endif