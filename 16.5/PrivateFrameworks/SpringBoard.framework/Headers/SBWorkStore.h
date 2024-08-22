// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWORKSTORE_H
#define SBWORKSTORE_H

@class NSMutableArray, NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBWorkStore : NSObject {
    NSMutableArray *_keysWithWork;
    NSMutableDictionary *_workExpirationPeriods;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
}


@property (nonatomic) CGFloat defaultWorkExpirationPeriod; // ivar: _defaultWorkExpirationPeriod
@property (readonly, nonatomic) NSArray *keysWithWork;
@property (readonly, nonatomic) NSUInteger maxWorkPerKey; // ivar: _maxWorkPerKey
@property (readonly, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (readonly, nonatomic) NSMutableDictionary *workItemsPerKey; // ivar: _workItemsPerKey


-(id)debugDescription;
-(id)dequeueWorkForKey:(id)arg0 ;
-(id)description;
-(id)initWithMaximumNumberOfWorkItemsPerKey:(NSUInteger)arg0 ;
-(void)_notifyObserversWorkDidChange;
-(void)_workQueue_expireWorkForKey:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addWorkItem:(id)arg0 forKey:(id)arg1 ;
-(void)purgeWorkForKey:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setWorkExpirationPeriod:(CGFloat)arg0 forKey:(id)arg1 ;


@end


#endif