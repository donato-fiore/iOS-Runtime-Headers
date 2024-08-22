// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUPROGRESSCONTEXT_H
#define TSUPROGRESSCONTEXT_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "TSUProgressStage.h"

@interface TSUProgressContext : NSObject {
    TSUProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    CGFloat m_lastProgressReport;
    CGFloat m_lastOverallProgress;
}




-(CGFloat)currentPosition;
-(CGFloat)overallProgress;
-(id)addProgressObserverBlock:(id)arg0 ;
-(id)currentStage;
-(id)description;
-(id)init;
-(void)addProgressObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)advanceProgress:(CGFloat)arg0 ;
-(void)createStageWithSteps:(CGFloat)arg0 ;
-(void)createStageWithSteps:(CGFloat)arg0 takingSteps:(CGFloat)arg1 ;
-(void)dealloc;
-(void)endStage;
-(void)nextSubStageWillTakeThisManyOfMySteps:(CGFloat)arg0 ;
-(void)removeProgressObserver:(id)arg0 ;
-(void)reportProgress:(CGFloat)arg0 overallProgress:(CGFloat)arg1 ;
-(void)reset;
-(void)setMessage:(id)arg0 ;
-(void)setPercentageProgressFromTCProgressContext:(CGFloat)arg0 ;
-(void)setProgress:(CGFloat)arg0 ;


@end


#endif