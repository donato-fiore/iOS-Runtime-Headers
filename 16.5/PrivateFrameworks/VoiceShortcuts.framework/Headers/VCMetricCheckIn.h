// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMETRICCHECKIN_H
#define VCMETRICCHECKIN_H

@class NSDate, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface VCMetricCheckIn : NSObject

@property (readonly, copy, nonatomic) NSDate *checkInDate;
@property (readonly, copy, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (readonly, copy, nonatomic) NSDate *intervalStartDate;
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)recentCheckInWithMode:(NSInteger)arg0 ;
-(BOOL)isCheckInAllowed;
-(id)calendar;
-(id)checkInKey;
-(id)initWithCurrentDate:(id)arg0 mode:(NSInteger)arg1 defaults:(id)arg2 ;
-(void)updateCheckInToNow;


@end


#endif