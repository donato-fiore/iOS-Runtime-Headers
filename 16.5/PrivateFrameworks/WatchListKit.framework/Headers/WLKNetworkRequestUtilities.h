// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKNETWORKREQUESTUTILITIES_H
#define WLKNETWORKREQUESTUTILITIES_H


#import <Foundation/Foundation.h>


@interface WLKNetworkRequestUtilities : NSObject



+(BOOL)isGDPRAccepted;
+(id)_defaultAppSessionConfiguration;
+(id)_sharedCacheSessionConfiguration;
+(id)configurationBaseURLString;
+(id)defaultSessionConfiguration;
+(void)startNetworkRequest:(id)arg0 account:(id)arg1 sessionConfiguration:(id)arg2 options:(NSInteger)arg3 completion:(id)arg4 ;


@end


#endif