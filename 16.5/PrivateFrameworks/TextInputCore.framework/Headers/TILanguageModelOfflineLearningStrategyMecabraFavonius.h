// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TILANGUAGEMODELOFFLINELEARNINGSTRATEGYMECABRAFAVONIUS_H
#define TILANGUAGEMODELOFFLINELEARNINGSTRATEGYMECABRAFAVONIUS_H

@class NSString;
@protocol TILanguageModelOfflineLearningStrategy;

#import <Foundation/Foundation.h>

#import "TILanguageModelOfflineLearningTask.h"

@interface TILanguageModelOfflineLearningStrategyMecabraFavonius : NSObject <TILanguageModelOfflineLearningStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) TILanguageModelOfflineLearningTask *learningTask; // ivar: _learningTask
@property (readonly) Class superclass;


-(BOOL)incrementUsageCountsForMessages:(id)arg0 withAdaptationContext:(id)arg1 ;
-(BOOL)learnMessages:(id)arg0 withRecipientRecords:(id)arg1 ;
-(id)filterMessages:(id)arg0 ;
-(id)identifyLanguagesForMessages:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 ;
-(void)didFinishLearning;


@end


#endif