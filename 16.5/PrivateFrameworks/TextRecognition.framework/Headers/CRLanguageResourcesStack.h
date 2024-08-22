// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRLANGUAGERESOURCESSTACK_H
#define CRLANGUAGERESOURCESSTACK_H

@class NSMutableSet, NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CRLanguageResourcesStack : NSObject

@property (retain) NSMutableSet *activeSubscribers; // ivar: _activeSubscribers
@property (retain) NSMutableArray *availableResources; // ivar: _availableResources
@property (retain) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (retain) NSObject<OS_dispatch_semaphore> *resourceCountSemaphore; // ivar: _resourceCountSemaphore
@property NSInteger resourceType; // ivar: _resourceType
@property (retain) NSMutableSet *subscribers; // ivar: _subscribers
@property NSInteger totalResources; // ivar: _totalResources


-(BOOL)hasSubscriber:(id)arg0 ;
-(NSInteger)subscriberCount;
-(id)initWithLocaleIdentifier:(id)arg0 resourceType:(NSInteger)arg1 ;
-(id)popResourceForSubscriber:(id)arg0 ;
-(void)addSubscriber:(id)arg0 ;
-(void)deactivateSubscriber:(id)arg0 ;
-(void)pushResource:(id)arg0 ;
-(void)removeSubscriber:(id)arg0 ;


@end


#endif