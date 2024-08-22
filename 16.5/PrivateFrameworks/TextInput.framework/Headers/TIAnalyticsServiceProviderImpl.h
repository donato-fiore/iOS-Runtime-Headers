// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIANALYTICSSERVICEPROVIDERIMPL_H
#define TIANALYTICSSERVICEPROVIDERIMPL_H

@class NSString;
@protocol TIAnalyticsServiceProvider;

#import <Foundation/Foundation.h>


@interface TIAnalyticsServiceProviderImpl : NSObject <TIAnalyticsServiceProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dispatchEventWithName:(id)arg0 payload:(id)arg1 ;


@end


#endif