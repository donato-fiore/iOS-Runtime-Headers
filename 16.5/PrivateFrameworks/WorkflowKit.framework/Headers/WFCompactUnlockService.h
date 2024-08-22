// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOMPACTUNLOCKSERVICE_H
#define WFCOMPACTUNLOCKSERVICE_H

@class SBSLockScreenService;

#import <Foundation/Foundation.h>


@interface WFCompactUnlockService : NSObject

@property (retain, nonatomic) SBSLockScreenService *service; // ivar: _service


+(BOOL)isDeviceLocked;
-(void)dealloc;
-(void)requestUnlockIfNeeded:(id)arg0 ;


@end


#endif