// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCQUICKACTIONSPROCESSOR_H
#define VKCQUICKACTIONSPROCESSOR_H


#import <Foundation/Foundation.h>


@interface VKCQuickActionsProcessor : NSObject



+(NSInteger)sortOrderForElement:(id)arg0 ;
+(id)configureQuickActionForTuple:(id)arg0 unfilteredTextElements:(id)arg1 ;
+(id)dedupeQuickActions:(id)arg0 ;
+(id)sortQuickActions:(id)arg0 ;
+(void)quickActionsFromElements:(id)arg0 unfilteredElements:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif