// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TILANGUAGEMODELOFFLINELEARNINGHANDLELANGUAGELIKELIHOOD_H
#define TILANGUAGEMODELOFFLINELEARNINGHANDLELANGUAGELIKELIHOOD_H



#import "TILanguageModelOfflineLearningHandle.h"

@interface TILanguageModelOfflineLearningHandleLanguageLikelihood : TILanguageModelOfflineLearningHandle



-(void)adaptToParagraph:(id)arg0 timeStamp:(CGFloat)arg1 adaptationType:(int)arg2 ;
-(void)didFinishLearning;
-(void)load;
-(void)updateAdaptationContext:(id)arg0 ;


@end


#endif