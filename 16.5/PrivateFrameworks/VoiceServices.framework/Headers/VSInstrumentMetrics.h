// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSINSTRUMENTMETRICS_H
#define VSINSTRUMENTMETRICS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSInstrumentMetrics : NSObject <NSSecureCoding>



@property CGFloat audioDuration; // ivar: _audioDuration
@property (copy) NSString *audioOutputRoute; // ivar: _audioOutputRoute
@property NSInteger audioStartTimestampDiffs; // ivar: _audioStartTimestampDiffs
@property BOOL canUseServerTTS; // ivar: _canUseServerTTS
@property (copy) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property NSInteger eagerRequestCreatedTimestampDiffs; // ivar: _eagerRequestCreatedTimestampDiffs
@property NSInteger errorCode; // ivar: _errorCode
@property (copy) NSString *experimentIdentifier; // ivar: _experimentIdentifier
@property BOOL isCacheHitFromDisk; // ivar: _isCacheHitFromDisk
@property BOOL isCacheHitFromMemory; // ivar: _isCacheHitFromMemory
@property BOOL isServerStreamTTS; // ivar: _isServerStreamTTS
@property BOOL isServerTTS; // ivar: _isServerTTS
@property BOOL isServerTTSRacing; // ivar: _isServerTTSRacing
@property BOOL isServerTimeout; // ivar: _isServerTimeout
@property BOOL isSpeechRequest; // ivar: _isSpeechRequest
@property BOOL isWarmStart; // ivar: _isWarmStart
@property BOOL neuralAlignmentStall; // ivar: _neuralAlignmentStall
@property BOOL neuralAudioClick; // ivar: _neuralAudioClick
@property BOOL neuralFallback; // ivar: _neuralFallback
@property NSInteger promptCount; // ivar: _promptCount
@property NSInteger requestCreatedTimestamp; // ivar: _requestCreatedTimestamp
@property NSInteger serverFirstPacketTimestamp; // ivar: _serverFirstPacketTimestamp
@property NSInteger serverLastPacketTimestamp; // ivar: _serverLastPacketTimestamp
@property CGFloat serverStreamedAudioDuration; // ivar: _serverStreamedAudioDuration
@property NSInteger sourceOfTTS; // ivar: _sourceOfTTS
@property NSInteger speechBeginTimestamp; // ivar: _speechBeginTimestamp
@property NSInteger speechEndTimestamp; // ivar: _speechEndTimestamp
@property (readonly) NSInteger speechEstimatedOutputBeginTimestamp;
@property NSInteger synthesisBeginTimestamp; // ivar: _synthesisBeginTimestamp
@property NSInteger synthesisEndTimestamp; // ivar: _synthesisEndTimestamp
@property (copy) NSString *utterance; // ivar: _utterance
@property (copy) NSString *voiceAssetKey; // ivar: _voiceAssetKey
@property (copy) NSString *voiceResourceAssetKey; // ivar: _voiceResourceAssetKey


+(BOOL)supportsSecureCoding;
+(id)descriptionFormatter;
+(id)stringOfSourceOfTTS:(NSInteger)arg0 ;
+(id)vs_metricsFromSTSMetrics:(id)arg0 ;
-(BOOL)isSynthesisCached;
-(CGFloat)_clockFactor;
-(CGFloat)audioQueueLatency;
-(CGFloat)cappedRealTimeFactor;
-(CGFloat)eagerRequestTimeGap;
-(CGFloat)realTimeFactor;
-(CGFloat)serverStreamFirstPacketLatency;
-(CGFloat)serverStreamLastPacketLatency;
-(CGFloat)timeToPlaybackLatency;
-(CGFloat)timeToSpeakLatency;
-(CGFloat)ttsSynthesisLatency;
-(id)description;
-(id)dictionaryMetrics;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif