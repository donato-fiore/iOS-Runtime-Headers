// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSTEXTTOPHONEMESTASK_H
#define VSTEXTTOPHONEMESTASK_H



#import "VSSpeechSpeakTask.h"

@interface VSTextToPhonemesTask : VSSpeechSpeakTask

@property (nonatomic) NSInteger phonemeSystem; // ivar: _phonemeSystem
@property (copy, nonatomic) id *reply; // ivar: _reply


-(BOOL)isSpeaking;
-(void)main;


@end


#endif