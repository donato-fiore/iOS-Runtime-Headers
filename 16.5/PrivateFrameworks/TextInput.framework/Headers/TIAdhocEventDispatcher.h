// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIADHOCEVENTDISPATCHER_H
#define TIADHOCEVENTDISPATCHER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TIAdhocEventDispatcher : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventSpecMap; // ivar: _eventSpecMap


+(id)sharedInstance;
-(id)initFromConfig:(id)arg0 ;
-(id)loadEventSpecMapFromConfig:(id)arg0 ;
-(id)replacePeriodsInString:(id)arg0 ;
-(void)dispatchEventForStatisticWithName:(id)arg0 andValue:(NSInteger)arg1 ;
-(void)dispatchEventForStatisticWithName:(id)arg0 andValue:(NSInteger)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif