// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIBIOMEOBSERVER_H
#define TIBIOMEOBSERVER_H

@class NSString;
@protocol TITypingSessionAggregatedEventObserver;

#import <Foundation/Foundation.h>


@interface TIBiomeObserver : NSObject <TITypingSessionAggregatedEventObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)sessionDidEnd:(id)arg0 aligned:(id)arg1 ;


@end


#endif