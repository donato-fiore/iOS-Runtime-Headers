// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIBASETASK_H
#define TRIBASETASK_H

@class NSArray, NSDate, NSString;
@protocol TRITaskQueueStateProviding;

#import <Foundation/Foundation.h>


@interface TRIBaseTask : NSObject

@property (readonly, nonatomic) NSArray *dependencies;
@property (retain, nonatomic) NSDate *startTime; // ivar: startTime
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider; // ivar: _stateProvider
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)requiredCapabilities;
-(id)description;
-(void)runDequeueHandlerUsingContext:(id)arg0 ;
-(void)runEnqueueHandlerUsingContext:(id)arg0 ;


@end


#endif