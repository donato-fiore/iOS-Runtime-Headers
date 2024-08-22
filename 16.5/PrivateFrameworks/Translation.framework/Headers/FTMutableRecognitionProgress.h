// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLERECOGNITIONPROGRESS_H
#define FTMUTABLERECOGNITIONPROGRESS_H

@class NSString;


#import "FTRecognitionProgress.h"

@interface FTMutableRecognitionProgress : FTRecognitionProgress

@property (nonatomic) int processed_audio_duration_ms;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif