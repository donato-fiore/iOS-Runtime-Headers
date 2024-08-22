// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGELQMRELATEDTRIGGER_H
#define WIFIUSAGELQMRELATEDTRIGGER_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface WiFiUsageLQMRelatedTrigger : NSObject

@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *trigger; // ivar: _trigger


-(id)description;
-(id)initWithTrigger:(id)arg0 andReason:(id)arg1 andTimestamp:(id)arg2 ;


@end


#endif