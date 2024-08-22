// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WK_RTCRTPENCODINGPARAMETERS_H
#define WK_RTCRTPENCODINGPARAMETERS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface WK_RTCRtpEncodingParameters : NSObject

@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (copy, nonatomic) NSNumber *maxBitrateBps; // ivar: _maxBitrateBps
@property (copy, nonatomic) NSNumber *maxFramerate; // ivar: _maxFramerate
@property (copy, nonatomic) NSNumber *minBitrateBps; // ivar: _minBitrateBps
@property ? nativeParameters;
@property (nonatomic) NSInteger networkPriority; // ivar: _networkPriority
@property (copy, nonatomic) NSNumber *numTemporalLayers; // ivar: _numTemporalLayers
@property (copy, nonatomic) NSString *rid; // ivar: _rid
@property (copy, nonatomic) NSNumber *scaleResolutionDownBy; // ivar: _scaleResolutionDownBy
@property (readonly, nonatomic) NSNumber *ssrc; // ivar: _ssrc


+(NSInteger)priorityFromNativePriority:(int)arg0 ;
+(int)nativePriorityFromPriority:(NSInteger)arg0 ;
-(id)initWithNativeParameters:(*void)arg0 ;


@end


#endif