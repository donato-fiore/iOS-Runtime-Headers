// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTIME_H
#define TSTIME_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSgPTPTime.h"
#import "TSGPSTime.h"

@interface TSTime : NSObject <NSCopying>

 {
    BOOL _initedWithgPTP;
    NSUInteger _grandmasterIdentity;
    unsigned short _localPortNumber;
    BOOL _timeTraceable;
    BOOL _frequencyTraceable;
}


@property (readonly, copy, nonatomic) TSgPTPTime *gPTPTime;
@property (readonly, copy, nonatomic) TSGPSTime *gpsTime;
@property (readonly, nonatomic) NSUInteger nanosecondsSinceEpoch; // ivar: _nanosecondsSinceEpoch
@property (readonly, copy, nonatomic) NSDate *taiDate;
@property (readonly, copy, nonatomic) NSDate *utcDate;


+(id)timeConverter;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)nanosecondsSinceTime:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithGPSTime:(id)arg0 ;
-(id)initWithNanosecondsSinceEpoch:(NSUInteger)arg0 ;
-(id)initWithTAIDate:(id)arg0 ;
-(id)initWithUTCDate:(id)arg0 ;
-(id)initWithgPTPTime:(id)arg0 ;
-(id)timeByAddingNanoseconds:(NSInteger)arg0 ;


@end


#endif