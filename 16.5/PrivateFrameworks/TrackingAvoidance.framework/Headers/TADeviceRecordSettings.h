// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TADEVICERECORDSETTINGS_H
#define TADEVICERECORDSETTINGS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TADeviceRecordSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger assumedKeyRollHour; // ivar: _assumedKeyRollHour
@property (nonatomic) CGFloat expiryTimeInterval; // ivar: _expiryTimeInterval
@property (readonly, nonatomic) CGFloat hyperHELEStagingInterval; // ivar: _hyperHELEStagingInterval
@property (readonly, nonatomic) CGFloat hyperStagingInterval; // ivar: _hyperStagingInterval
@property (readonly, nonatomic) CGFloat keepAliveInterval; // ivar: _keepAliveInterval
@property (readonly, nonatomic) CGFloat maxExpectedDurianWildInterval; // ivar: _maxExpectedDurianWildInterval
@property (readonly, nonatomic) CGFloat maxExpectedHELEWildInterval; // ivar: _maxExpectedHELEWildInterval
@property (readonly, nonatomic) CGFloat minimumHELEStagingInterval; // ivar: _minimumHELEStagingInterval
@property (readonly, nonatomic) CGFloat minimumStagingInterval; // ivar: _minimumStagingInterval
@property (nonatomic) CGFloat purgeTimeInterval; // ivar: _purgeTimeInterval
@property (readonly, nonatomic) CGFloat scanInterval; // ivar: _scanInterval
@property (readonly, nonatomic) BOOL shouldAlertHELEImmediatelyForImmediateTypes; // ivar: _shouldAlertHELEImmediatelyForImmediateTypes
@property (readonly, nonatomic) NSInteger stagingBackstopHour; // ivar: _stagingBackstopHour
@property (readonly, nonatomic) NSInteger stagingHELEBackstopHour; // ivar: _stagingHELEBackstopHour
@property (readonly, nonatomic) BOOL surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyroll; // ivar: _surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyroll
@property (readonly, nonatomic) BOOL surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyroll; // ivar: _surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyroll
@property (readonly, nonatomic) BOOL surfaceImmediatelyBeepOnMove; // ivar: _surfaceImmediatelyBeepOnMove


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExpiryTimeInterval:(CGFloat)arg0 purgeTimeInterval:(CGFloat)arg1 keepAliveInterval:(CGFloat)arg2 minimumStagingInterval:(CGFloat)arg3 stagingBackstopHour:(NSUInteger)arg4 assumedKeyRollHour:(NSUInteger)arg5 scanInterval:(CGFloat)arg6 surfaceImmediatelyBeepOnMove:(BOOL)arg7 surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyroll:(BOOL)arg8 maxExpectedHELEWildInterval:(CGFloat)arg9 maxExpectedDurianWildInterval:(CGFloat)arg10 shouldAlertHELEImmediatelyForImmediateTypes:(BOOL)arg11 minimumHELEStagingInterval:(CGFloat)arg12 stagingHELEBackstopHour:(NSUInteger)arg13 surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyroll:(BOOL)arg14 hyperHELEStagingInterval:(CGFloat)arg15 hyperStagingInterval:(CGFloat)arg16 ;
-(id)initWithExpiryTimeIntervalOrDefault:(id)arg0 purgeTimeIntervalOrDefault:(id)arg1 keepAliveIntervalOrDefault:(id)arg2 minimumStagingIntervalOrDefault:(id)arg3 stagingBackstopHourOrDefault:(id)arg4 assumedKeyRollHourOrDefault:(id)arg5 scanIntervalOrDefault:(id)arg6 surfaceImmediatelyBeepOnMoveOrDefault:(id)arg7 surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyrollOrDefault:(id)arg8 maxExpectedHELEWildIntervalOrDefault:(id)arg9 maxExpectedDurianWildIntervalOrDefault:(id)arg10 shouldAlertHELEImmediatelyForImmediateTypesOrDefault:(id)arg11 minimumHELEStagingIntervalOrDefault:(id)arg12 stagingHELEBackstopHourOrDefault:(id)arg13 surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyrollOrDefault:(id)arg14 hyperHELEStagingIntervalOrDefault:(id)arg15 hyperStagingIntervalOrDefault:(id)arg16 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif