// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAUDIOTIMEERRORCORRELATORPOSTUPSAMPLER_H
#define TSAUDIOTIMEERRORCORRELATORPOSTUPSAMPLER_H



#import "TSAudioTimeErrorCorrelator.h"

@interface TSAudioTimeErrorCorrelatorPostUpsampler : TSAudioTimeErrorCorrelator {
    *float _channelABuffer;
    *float _scratch1Buffer;
    *float _scratch2Buffer;
    *float _correlationBuffer;
    *float _upsamplerFilterCoefficientsBuffer;
    NSInteger _upsamplerFilterCoefficientsLength;
}




-(id)initWithMaxCorrelationLength:(NSInteger)arg0 andUpscaleFactor:(NSInteger)arg1 forSamplingRate:(CGFloat)arg2 ;
-(void)_makeBlock;
-(void)dealloc;


@end


#endif