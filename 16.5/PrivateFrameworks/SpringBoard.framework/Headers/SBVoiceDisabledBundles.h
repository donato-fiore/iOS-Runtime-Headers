// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBVOICEDISABLEDBUNDLES_H
#define SBVOICEDISABLEDBUNDLES_H


#import <Foundation/Foundation.h>


@interface SBVoiceDisabledBundles : NSObject



+(BOOL)voiceControlDisabledByCurrentlyRunningApp;
+(void)setAppDisabledVoiceControl:(BOOL)arg0 bundleIdentifier:(id)arg1 ;


@end


#endif