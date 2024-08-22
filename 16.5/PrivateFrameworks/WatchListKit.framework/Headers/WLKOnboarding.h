// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKONBOARDING_H
#define WLKONBOARDING_H


#import <Foundation/Foundation.h>


@interface WLKOnboarding : NSObject



+(BOOL)isOptedIn;
+(void)optInUserIfNeeded:(id)arg0 ;
+(void)optInUserIfNeededAndRefreshConfig:(id)arg0 ;


@end


#endif