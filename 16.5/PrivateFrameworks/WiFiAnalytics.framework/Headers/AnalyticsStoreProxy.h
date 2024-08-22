// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANALYTICSSTOREPROXY_H
#define ANALYTICSSTOREPROXY_H


#import <Foundation/Foundation.h>


@interface AnalyticsStoreProxy : NSObject



+(BOOL)batchDelete:(id)arg0 withPredicate:(id)arg1 withFetchRequest:(id)arg2 moc:(id)arg3 ;
+(BOOL)batchUpdate:(id)arg0 withPredicate:(id)arg1 propertiesToUpdate:(id)arg2 moc:(id)arg3 ;
+(NSUInteger)entityCount:(id)arg0 withPredicate:(id)arg1 moc:(id)arg2 ;
+(id)analyticsStoreEntitiesWithDate;
+(id)analyticsStoreEntityNames;
+(id)analyticsStoreEntityRelationshipNames;
+(id)createEntity:(id)arg0 moc:(id)arg1 ;
+(id)entity:(id)arg0 withPredicate:(id)arg1 created:(*BOOL)arg2 moc:(id)arg3 ;
+(id)entityByCounting:(id)arg0 withPredicate:(id)arg1 created:(*BOOL)arg2 moc:(id)arg3 ;
+(id)fetch:(id)arg0 withPredicate:(id)arg1 moc:(id)arg2 ;
+(id)fetchAll:(id)arg0 moc:(id)arg1 ;
+(id)fetchPropertiesForEntity:(id)arg0 properties:(id)arg1 predicate:(id)arg2 moc:(id)arg3 ;
+(id)fetchPropertiesForEntityWithLimitAndSortDescriptor:(id)arg0 properties:(id)arg1 predicate:(id)arg2 fetchLimit:(NSUInteger)arg3 sortDescriptor:(id)arg4 returnDistinct:(BOOL)arg5 moc:(id)arg6 ;
+(id)fetchRequestForEntity:(id)arg0 ;
+(id)fetchRequestForEntityWithBatchSize:(id)arg0 batchSize:(NSUInteger)arg1 prefetch:(id)arg2 ;
+(id)fetchRequestForEntityWithOffset:(id)arg0 limit:(NSUInteger)arg1 offset:(NSUInteger)arg2 prefetch:(id)arg3 ;
+(id)predicateForEntityWithAge:(id)arg0 maxAge:(NSUInteger)arg1 ;
+(id)predicateForEntityWithAgeOlderThan:(id)arg0 dateAttribute:(id)arg1 olderThan:(CGFloat)arg2 ;


@end


#endif