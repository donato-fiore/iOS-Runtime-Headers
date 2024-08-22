// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXKERNELCLOCKEXPORTED_H
#define TSXKERNELCLOCKEXPORTED_H

@class NSString;
@protocol TSXKernelClockClientProtocol;

#import <Foundation/Foundation.h>

#import "TSXKernelClock.h"

@interface TSXKernelClockExported : NSObject <TSXKernelClockClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSXKernelClock *object; // ivar: _object
@property (readonly) Class superclass;


-(void)changedClockMaster;
-(void)resetClock;
-(void)updateLockState:(int)arg0 ;
-(void)updateTimeSyncTime:(NSUInteger)arg0 timeSyncInterval:(NSUInteger)arg1 domainTime:(NSUInteger)arg2 domainInterval:(NSUInteger)arg3 ;


@end


#endif