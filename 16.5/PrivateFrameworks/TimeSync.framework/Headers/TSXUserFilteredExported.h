// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXUSERFILTEREDEXPORTED_H
#define TSXUSERFILTEREDEXPORTED_H

@class NSString;
@protocol TSXUserFilteredClockClientProtocol;

#import <Foundation/Foundation.h>

#import "TSXUserFilteredClock.h"

@interface TSXUserFilteredExported : NSObject <TSXUserFilteredClockClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSXUserFilteredClock *object; // ivar: _object
@property (readonly) Class superclass;


-(void)changedClockMaster;
-(void)resetClock;
-(void)updateLockState:(int)arg0 ;
-(void)updateTimeSyncTime:(NSUInteger)arg0 timeSyncInterval:(NSUInteger)arg1 domainTime:(NSUInteger)arg2 domainInterval:(NSUInteger)arg3 ;


@end


#endif