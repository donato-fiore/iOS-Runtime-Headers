// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCDEVICELOOKUP_H
#define WCDEVICELOOKUP_H

@class ACAccountStore;

#import <Foundation/Foundation.h>


@interface WCDeviceLookup : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore


-(id)init;
-(void)checkAllDevicesRunningMinimumiOSVersion:(struct ? )arg0 macOSVersion:(struct ? )arg1 orInactiveForTimeInterval:(CGFloat)arg2 completionHandler:(id)arg3 ;


@end


#endif