// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXGPTPCLOCKEXPORTED_H
#define TSXGPTPCLOCKEXPORTED_H

@class NSString;
@protocol TSXgPTPClockClientProtocol;

#import <Foundation/Foundation.h>

#import "TSXgPTPClock.h"

@interface TSXgPTPClockExported : NSObject <TSXgPTPClockClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSXgPTPClock *object; // ivar: _object
@property (readonly) Class superclass;


-(void)beginGrandmasterChangeWithGrandmasterID:(NSUInteger)arg0 localPort:(unsigned short)arg1 ;
-(void)changeLocalPortGrandmasterChangeWithGrandmasterID:(NSUInteger)arg0 localPort:(unsigned short)arg1 ;
-(void)changedClockMaster;
-(void)endGrandmasterChangeWithGrandmasterID:(NSUInteger)arg0 localPort:(unsigned short)arg1 ;
-(void)resetClock;
-(void)updateGrandmasterIdentity:(NSUInteger)arg0 andgPTPPath:(id)arg1 ;
-(void)updateLockState:(int)arg0 ;
-(void)updateTimeSyncTime:(NSUInteger)arg0 timeSyncInterval:(NSUInteger)arg1 domainTime:(NSUInteger)arg2 domainInterval:(NSUInteger)arg3 ;
-(void)updateWithSyncInfoValid:(BOOL)arg0 syncFlags:(unsigned char)arg1 timeSyncTime:(NSUInteger)arg2 domainTimeHi:(NSUInteger)arg3 domainTimeLo:(NSUInteger)arg4 cumulativeScaledRate:(NSUInteger)arg5 inverseCumulativeScaledRate:(NSUInteger)arg6 grandmasterID:(NSUInteger)arg7 localPortNumber:(unsigned short)arg8 ;


@end


#endif