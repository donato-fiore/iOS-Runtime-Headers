// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSVOICEBOOSTER_H
#define VSVOICEBOOSTER_H


#import <Foundation/Foundation.h>


@interface VSVoiceBooster : NSObject

@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (nonatomic) AudioTimeStamp audioTimeStamp; // ivar: _audioTimeStamp
@property (nonatomic) *OpaqueAudioConverter floatConverter; // ivar: _floatConverter
@property (nonatomic) *OpaqueAudioConverter integerConverter; // ivar: _integerConverter
@property (nonatomic) NSUInteger pcmBufferSize; // ivar: _pcmBufferSize
@property (nonatomic) float voiceBoostGainDecibels; // ivar: _voiceBoostGainDecibels
@property (nonatomic) *OpaqueAudioComponentInstance voiceBoostUnit; // ivar: _voiceBoostUnit


-(BOOL)initialize;
-(id)initWithStreamDescription:(struct AudioStreamBasicDescription )arg0 pcmBufferSize:(NSUInteger)arg1 ;
-(id)processData:(id)arg0 ;
-(void)dealloc;
-(void)uninitialize;


@end


#endif