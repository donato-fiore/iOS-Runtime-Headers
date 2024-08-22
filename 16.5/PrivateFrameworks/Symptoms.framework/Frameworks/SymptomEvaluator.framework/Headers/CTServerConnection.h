// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSERVERCONNECTION_H
#define CTSERVERCONNECTION_H


#import <Foundation/Foundation.h>


@interface CTServerConnection : NSObject



+(void)registerForCTNofication:(struct __CFString *)arg0 ctShim:(id)arg1 completion:(id)arg2 ;
+(void)unregisterForCTNotification:(struct __CFString *)arg0 ctShim:(id)arg1 completion:(id)arg2 ;


@end


#endif