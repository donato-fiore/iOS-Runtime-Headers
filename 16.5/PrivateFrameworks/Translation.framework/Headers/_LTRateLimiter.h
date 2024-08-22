// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTRATELIMITER_H
#define _LTRATELIMITER_H


#import <Foundation/Foundation.h>


@interface _LTRateLimiter : NSObject {
    NSUInteger _count;
    BOOL _pageLoaded;
}


@property (nonatomic) NSUInteger maximumDynamicContentRequests; // ivar: _maximumDynamicContentRequests
@property (nonatomic) NSUInteger maximumPageLoadRequests; // ivar: _maximumPageLoadRequests


-(BOOL)allowedForRequests:(NSUInteger)arg0 ;
-(id)initWithMaximumPageLoadRequest:(NSUInteger)arg0 maximumDynamicContentRequests:(NSInteger)arg1 ;
-(void)markPageLoaded;


@end


#endif