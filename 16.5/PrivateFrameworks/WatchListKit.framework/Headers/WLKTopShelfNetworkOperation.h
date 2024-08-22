// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKTOPSHELFNETWORKOPERATION_H
#define WLKTOPSHELFNETWORKOPERATION_H

@class NSDictionary;


#import "WLKUTSNetworkRequestOperation.h"

@interface WLKTopShelfNetworkOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload


-(id)initWithEndPoint:(id)arg0 queryParameters:(id)arg1 options:(NSInteger)arg2 ;
-(void)processResponse;


@end


#endif