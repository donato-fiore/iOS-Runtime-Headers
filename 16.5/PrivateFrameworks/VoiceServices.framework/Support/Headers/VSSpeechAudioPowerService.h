// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSPEECHAUDIOPOWERSERVICE_H
#define VSSPEECHAUDIOPOWERSERVICE_H

@class NSString;
@protocol AFAudioPowerProviding;

#import <Foundation/Foundation.h>


@interface VSSpeechAudioPowerService : NSObject <AFAudioPowerProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<AFAudioPowerProviding> *previousProvider; // ivar: _previousProvider
@property (readonly) Class superclass;


+(id)sharedServices;
-(BOOL)getAveragePower:(*float)arg0 andPeakPower:(*float)arg1 ;
-(id)getCurrentAudioPowerProvider;
-(void)didEndAccessPower;
-(void)willBeginAccessPower;


@end


#endif