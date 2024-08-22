// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPCOMPONENTWRITER_H
#define TSPCOMPONENTWRITER_H

@class NSString, NSMapTable, NSHashTable, NSIndexSet, NSMutableIndexSet, NSSet;
@protocol TSPComponentWriterDelegate, TSPComponentWriteChannel, OS_dispatch_semaphore, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPObjectReferenceMap.h"
#import "TSPArchiverManager.h"
#import "TSPReferenceOrderedSet.h"
#import "TSPMutableComponentObjectUUIDMap.h"
#import "TSPMutableComponentDataReferenceMap.h"
#import "TSPComponent.h"
#import "TSPObject.h"

@interface TSPComponentWriter : NSObject {
    NSString *_locator;
    id<TSPComponentWriterDelegate> *_delegate;
    NSInteger _mode;
    unsigned char _packageIdentifier;
    TSPObjectReferenceMap *_objectReferenceMap;
    id<TSPComponentWriteChannel> *_writeChannel;
    TSPArchiverManager *_archiverManager;
    NSObject<OS_dispatch_semaphore> *_delegateSemaphore;
    NSUInteger _componentReadVersion;
    TSPReferenceOrderedSet *_archivedObjects;
    NSMapTable *_archivedObjectsDictionary;
    TSPMutableComponentObjectUUIDMap *_componentObjectUUIDMap;
    TSPMutableComponentDataReferenceMap *_componentDataReferenceMap;
    vector<TSP::ObjectStackEntry, std::allocator<TSP::ObjectStackEntry>> _objectStack;
    NSObject<OS_dispatch_group> *_writeGroup;
    NSObject<OS_dispatch_queue> *_writeQueue;
    TSPReferenceOrderedSet *_weakReferences;
    NSHashTable *_lazyReferences;
    NSHashTable *_dataReferences;
    TSPReferenceOrderedSet *_externalReferences;
    NSIndexSet *_componentAmbiguousReferences;
    NSMutableIndexSet *_ambiguousReferences;
    NSUInteger _objectTargetType;
    ? _flags;
}


@property (readonly, nonatomic) TSPComponent *component; // ivar: _component
@property (readonly, nonatomic) NSSet *featureInfos; // ivar: _featureInfos
@property (readonly, nonatomic) TSPObject *rootObject; // ivar: _rootObject


-(BOOL)canSkipArchivingStronglyReferencedObject:(id)arg0 fromComponentRootObject:(id)arg1 ;
-(BOOL)isObjectExternal:(id)arg0 archiverOrNil:(id)arg1 parentObject:(id)arg2 hasArchiverAccessLock:(BOOL)arg3 claimingComponent:(*id)arg4 isOwnedByDifferentPackage:(*BOOL)arg5 isAmbiguousOwnership:(*BOOL)arg6 ;
-(BOOL)isObjectExternalBecauseItAlreadyBelongsToAnotherComponent:(id)arg0 parentObject:(id)arg1 claimingComponent:(*id)arg2 claimingPackageIdentifier:(*unsigned char)arg3 claimingComponentWillBeCopied:(*BOOL)arg4 claimingComponentReadVersion:(*NSUInteger)arg5 ;
-(BOOL)isObjectExternalBecauseOfExplicitComponentOwnership:(id)arg0 archiverOrNil:(id)arg1 claimingComponentOrNil:(id)arg2 hasArchiverAccessLock:(BOOL)arg3 explicitComponentRootObject:(*id)arg4 claimingComponent:(*id)arg5 isOwnedByDifferentPackage:(*BOOL)arg6 ;
-(BOOL)shouldDelayWritingObject:(id)arg0 ;
-(BOOL)shouldWriteObject:(id)arg0 ;
-(BOOL)supportsAutomaticAmbiguousOwnershipResolutionWithComponentReadVersion:(NSUInteger)arg0 ;
-(BOOL)validateObjectContextForObject:(id)arg0 ;
-(id)init;
-(id)initWithComponent:(id)arg0 locator:(id)arg1 rootObject:(id)arg2 delegate:(id)arg3 mode:(NSInteger)arg4 packageIdentifier:(unsigned char)arg5 objectReferenceMapOrNil:(id)arg6 writeChannel:(id)arg7 archiverManager:(id)arg8 ;
-(void)acquireArchiverAccessLockAndWriteObjects:(id)arg0 parentObject:(id)arg1 completion:(id)arg2 ;
-(void)validateAmbiguousObjectOwnershipForObject:(id)arg0 explicitComponentRootObject:(id)arg1 parentObject:(id)arg2 claimingComponent:(id)arg3 claimingPackageIdentifier:(unsigned char)arg4 claimingComponentWillBeCopied:(BOOL)arg5 claimingComponentReadVersion:(NSUInteger)arg6 isAmbiguousOwnership:(*BOOL)arg7 ;
-(void)validateExplicitComponentOwnershipForObject:(id)arg0 archiverOrNil:(id)arg1 parentObject:(id)arg2 hasArchiverAccessLock:(BOOL)arg3 ;
-(void)writeArchiver:(id)arg0 forObjectIdentifier:(NSInteger)arg1 ;
-(void)writeObject:(id)arg0 archiver:(id)arg1 parentObject:(id)arg2 completion:(id)arg3 ;
-(void)writeWithArchiverAccessLockForObjects:(id)arg0 parentObject:(id)arg1 completion:(id)arg2 ;
-(void)writeWithCompletionQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif