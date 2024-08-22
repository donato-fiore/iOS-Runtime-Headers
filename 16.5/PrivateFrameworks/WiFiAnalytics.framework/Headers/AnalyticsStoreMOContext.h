// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANALYTICSSTOREMOCONTEXT_H
#define ANALYTICSSTOREMOCONTEXT_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>

#import "AnalyticsPersistenceManager.h"
#import "AnalyticsStoreDescriptor.h"

@interface AnalyticsStoreMOContext : NSObject

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (retain, nonatomic) AnalyticsPersistenceManager *persistenceManager; // ivar: _persistenceManager
@property (retain, nonatomic) AnalyticsStoreDescriptor *storeDescriptor; // ivar: _storeDescriptor


-(BOOL)storeNeedsImmediatePruning:(NSUInteger)arg0 ;
-(id)initWithStoreDescriptor:(id)arg0 ;


@end


#endif