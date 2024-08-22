// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWFAUXDATABASESTORECOORDINATOR_H
#define SCWFAUXDATABASESTORECOORDINATOR_H

@protocol SCWDatabaseStoreCoordinator, OS_dispatch_queue, SCWDatabaseStore;

#import <Foundation/Foundation.h>


@interface SCWFauxDatabaseStoreCoordinator : NSObject <SCWDatabaseStoreCoordinator>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<SCWDatabaseStore> *store; // ivar: _store
@property (readonly, nonatomic) NSObject<SCWDatabaseStore> *underlyingStore;


-(id)initWithDatabaseStore:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)readWithAccessor:(id)arg0 ;
-(void)readZone:(id)arg0 withAccessor:(id)arg1 ;
-(void)reloadWithAccessor:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)writeWithAccessor:(id)arg0 ;
-(void)writeZone:(id)arg0 withAccessor:(id)arg1 ;


@end


#endif