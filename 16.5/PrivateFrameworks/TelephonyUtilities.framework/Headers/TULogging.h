// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TULOGGING_H
#define TULOGGING_H


#import <Foundation/Foundation.h>


@interface TULogging : NSObject



+(BOOL)sendDirectoryToCrashReporter:(id)arg0 error:(*id)arg1 ;
+(void)disablePhoneLogging;
+(void)enablePhoneLogging;
+(void)registerForShouldLogChangedNotification;
+(void)unregisterForShouldLogChangedNotification;


@end


#endif