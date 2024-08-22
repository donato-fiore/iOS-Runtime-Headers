// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUAUDIOFREQUENCYCONTROLLER_H
#define TUAUDIOFREQUENCYCONTROLLER_H

@class NSString, AVCAudioPowerSpectrumMeter;
@protocol AVCAudioPowerSpectrumMeterDelegate, TUAudioFrequencyControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUAudioFrequencyController : NSObject <AVCAudioPowerSpectrumMeterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<TUAudioFrequencyControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVCAudioPowerSpectrumMeter *powerSpectrumMeter; // ivar: _powerSpectrumMeter
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(float)normalizedPowerLevelForPowerSpectrum:(id)arg0 ;
+(float)rawPowerLevelForPowerSpectrum:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(unsigned int)_avcTapTypeForTUTapType:(NSInteger)arg0 ;
-(void)audioPowerSpectrumMeter:(id)arg0 didUpdateAudioPowerSpectrums:(id)arg1 ;
-(void)meterServerDidDisconnect:(id)arg0 ;
-(void)registerCellularPowerSpectrum:(NSInteger)arg0 ;
-(void)registerParticipantPowerSpectrum:(NSInteger)arg0 ;
-(void)unregisterCellularPowerSpectrum:(NSInteger)arg0 ;
-(void)unregisterParticipantPowerSpectrum:(NSInteger)arg0 ;


@end


#endif