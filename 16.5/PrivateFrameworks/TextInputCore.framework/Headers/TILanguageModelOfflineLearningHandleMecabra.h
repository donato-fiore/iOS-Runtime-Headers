// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TILANGUAGEMODELOFFLINELEARNINGHANDLEMECABRA_H
#define TILANGUAGEMODELOFFLINELEARNINGHANDLEMECABRA_H



#import "TILanguageModelOfflineLearningHandle.h"
#import "TIWordSearch.h"

@interface TILanguageModelOfflineLearningHandleMecabra : TILanguageModelOfflineLearningHandle

@property (retain, nonatomic) TIWordSearch *wordSearch; // ivar: _wordSearch


-(void)adaptToParagraph:(id)arg0 timeStamp:(CGFloat)arg1 adaptationType:(int)arg2 ;
-(void)didFinishLearning;
-(void)load;
-(void)updateAdaptationContext:(id)arg0 ;


@end


#endif