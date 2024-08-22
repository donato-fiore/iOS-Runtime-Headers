// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TILANGUAGEMODELOFFLINELEARNINGAGENT_H
#define TILANGUAGEMODELOFFLINELEARNINGAGENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TILanguageModelOfflineLearningTask.h"

@interface TILanguageModelOfflineLearningAgent : NSObject

@property (retain, nonatomic) TILanguageModelOfflineLearningTask *currentLearningTask; // ivar: _currentLearningTask
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


+(id)contactRecordsForRecipients:(id)arg0 ;
+(id)sharedLearningAgent;
+(void)didFinishLearningWithAgent:(id)arg0 task:(id)arg1 ;
-(BOOL)continueLearningTaskWithStrategy:(id)arg0 ;
-(id)init;
-(void)handleRemovalOfLearnedModels;
-(void)performLearningIfNecessaryWithStrategy:(id)arg0 lastAdaptationTime:(CGFloat)arg1 ;
-(void)performTaskInBackground:(id)arg0 ;


@end


#endif