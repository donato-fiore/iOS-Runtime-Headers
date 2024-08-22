// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TBPERSISTENCEMANAGER_H
#define TBPERSISTENCEMANAGER_H

@class NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator;

#import <Foundation/Foundation.h>

#import "TBPersistenceRemoteStoreServer.h"

@interface TBPersistenceManager : NSObject

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel; // ivar: _managedObjectModel
@property (retain, nonatomic) NSManagedObjectContext *persistenceContext; // ivar: _persistenceContext
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistenceCoordinator; // ivar: _persistenceCoordinator
@property (retain, nonatomic) TBPersistenceRemoteStoreServer *remoteStoreServer; // ivar: _remoteStoreServer


+(BOOL)isStoreCompatibleAtURL:(id)arg0 withModel:(id)arg1 ;
-(id)initWithManagedObjectModel:(id)arg0 storeDescriptor:(id)arg1 ;
-(void)addPersistentStorage:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif