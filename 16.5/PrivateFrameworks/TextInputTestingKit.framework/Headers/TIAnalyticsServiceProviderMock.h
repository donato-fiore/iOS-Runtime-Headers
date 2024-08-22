// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIANALYTICSSERVICEPROVIDERMOCK_H
#define TIANALYTICSSERVICEPROVIDERMOCK_H

@class NSMutableDictionary, NSString;
@protocol TIAnalyticsServiceProvider;

#import <Foundation/Foundation.h>


@interface TIAnalyticsServiceProviderMock : NSObject <TIAnalyticsServiceProvider>



@property (readonly, nonatomic) NSMutableDictionary *allEvents; // ivar: _allEvents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)sumFloatField:(id)arg0 forEvent:(id)arg1 ;
-(CGFloat)sumFloatField:(id)arg0 forEvent:(id)arg1 filteredWithPredicate:(id)arg2 ;
-(CGFloat)sumFloatField:(id)arg0 forEvents:(id)arg1 ;
-(NSInteger)countEvent:(id)arg0 ;
-(NSInteger)countEvent:(id)arg0 filteredWithPredicate:(id)arg1 ;
-(NSInteger)sumIntegerField:(id)arg0 forEvent:(id)arg1 ;
-(NSInteger)sumIntegerField:(id)arg0 forEvent:(id)arg1 filteredWithPredicate:(id)arg2 ;
-(NSInteger)sumIntegerField:(id)arg0 forEvents:(id)arg1 ;
-(id)eventsWithName:(id)arg0 ;
-(id)init;
-(void)clear;
-(void)dispatchEventWithName:(id)arg0 payload:(id)arg1 ;


@end


#endif