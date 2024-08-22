// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LEAVEMO_H
#define LEAVEMO_H

@class NSManagedObject, NSDate;

#import <Foundation/Foundation.h>

#import "BSSMO.h"

@interface LeaveMO : NSManagedObject

@property (nonatomic) CGFloat assocDuration;
@property (retain, nonatomic) BSSMO *bss;
@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NSObject *histBcnPer;
@property (retain, nonatomic) NSObject *histBcnSched;
@property (retain, nonatomic) NSObject *histCca;
@property (retain, nonatomic) NSObject *histFwTxFrames;
@property (retain, nonatomic) NSObject *histFwTxPer;
@property (retain, nonatomic) NSObject *histFwTxRetrans;
@property (retain, nonatomic) NSObject *histRssi;
@property (retain, nonatomic) NSObject *histRxFrames;
@property (retain, nonatomic) NSObject *histSnr;
@property (retain, nonatomic) NSObject *histTxFrames;
@property (retain, nonatomic) NSObject *histTxPer;
@property (retain, nonatomic) NSObject *histTxRetrans;
@property (nonatomic) BOOL isInVoluntary;
@property (nonatomic) short motionState;
@property (nonatomic) int reason;
@property (nonatomic) int subReason;


+(id)entityName;
+(id)fetchRequest;
+(id)firstLeaveAfter:(id)arg0 ssid:(id)arg1 moc:(id)arg2 ;
+(id)generateInstance:(id)arg0 ;


@end


#endif