// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDATABASERESULT_H
#define WFDATABASERESULT_H

@class NSNumber, NSArray, NSError, NSHashTable, NSPredicate, WFCoreDataResultState;
@protocol WFDatabaseResultFetchOperation, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFDatabase.h"

@interface WFDatabaseResult : NSObject

@property (retain, nonatomic) NSNumber *cachedCount; // ivar: _cachedCount
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSArray *descriptors; // ivar: _descriptors
@property (readonly, nonatomic) NSError *fetchError; // ivar: _fetchError
@property (readonly, nonatomic) NSObject<WFDatabaseResultFetchOperation> *fetchOperation; // ivar: _fetchOperation
@property (readonly, nonatomic) NSArray *observers;
@property (readonly, nonatomic) NSHashTable *observersTable; // ivar: _observersTable
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSPredicate *searchPredicate; // ivar: _searchPredicate
@property (readonly, nonatomic) WFCoreDataResultState *state; // ivar: _state
@property (readonly, nonatomic) NSArray *staticDescriptors; // ivar: _staticDescriptors


+(id)callbackQueue;
-(id)description;
-(id)initWithDatabase:(id)arg0 fetchOperation:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 fetchRequest:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 fetchRequest:(id)arg1 relationshipKeysAffectingDescriptors:(id)arg2 ;
-(id)initWithStaticDescriptors:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)reset;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateDescriptorsAndNotify:(id)arg0 state:(id)arg1 ;


@end


#endif