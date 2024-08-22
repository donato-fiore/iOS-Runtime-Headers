// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYMPTOMSAWDOBSERVERDELEGATEENTRY_H
#define SYMPTOMSAWDOBSERVERDELEGATEENTRY_H

@class NSMutableSet;
@protocol SymptomsAWDObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SymptomsAWDObserverDelegateEntry : NSObject

@property (retain, nonatomic) NSObject<SymptomsAWDObserverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableSet *events; // ivar: _events
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDelegate:(id)arg0 ;
-(id)description;


@end


#endif