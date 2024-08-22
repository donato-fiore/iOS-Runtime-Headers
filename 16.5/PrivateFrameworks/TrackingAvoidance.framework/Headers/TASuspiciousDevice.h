// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TASUSPICIOUSDEVICE_H
#define TASUSPICIOUSDEVICE_H

@class NSData, NSDate, NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TAAccessoryInformation.h"
#import "TAMetricsDetection.h"
#import "TASPAdvertisement.h"

@interface TASuspiciousDevice : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) TAAccessoryInformation *accessoryInfo; // ivar: _accessoryInfo
@property (readonly, copy, nonatomic) NSData *address; // ivar: _address
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) TAMetricsDetection *detectionMetrics; // ivar: _detectionMetrics
@property (readonly, copy, nonatomic) NSDictionary *detectionSummary; // ivar: _detectionSummary
@property (readonly, nonatomic) NSUInteger detectionType; // ivar: _detectionType
@property (readonly, nonatomic) NSUInteger forceSurfaceReason; // ivar: _forceSurfaceReason
@property (readonly, nonatomic) NSUInteger immediacyType; // ivar: _immediacyType
@property (readonly, copy, nonatomic) TASPAdvertisement *latestAdvertisement; // ivar: _latestAdvertisement
@property (readonly, copy, nonatomic) NSArray *locationHistory; // ivar: _locationHistory


+(BOOL)supportsSecureCoding;
+(id)convertTAForceSurfaceReasonToString:(NSUInteger)arg0 ;
+(id)convertTANotificationImmediacyTypeToString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLatestAdv:(id)arg0 detectionSummary:(id)arg1 date:(id)arg2 locHistory:(id)arg3 detectionMetrics:(id)arg4 detectionType:(NSUInteger)arg5 immediacyType:(NSUInteger)arg6 accessoryInfo:(id)arg7 forceSurfaceReason:(NSUInteger)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateForceReasonWith:(NSUInteger)arg0 ;


@end


#endif