// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPARCHIVERMANAGER_H
#define TSPARCHIVERMANAGER_H

@class NSMapTable;
@protocol TSPArchiverManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPDescriptionGenerator.h"

@interface TSPArchiverManager : NSObject {
    id<TSPArchiverManagerDelegate> *_delegate;
    Class _archiverClass;
    char _archiverFlags;
    NSMapTable *_archivers;
    NSMapTable *_metadataArchivers;
    NSObject<OS_dispatch_queue> *_archiversHighQueue;
    NSObject<OS_dispatch_queue> *_archiversLowQueue;
    NSObject<OS_dispatch_queue> *_archiveHighQueue;
    NSObject<OS_dispatch_queue> *_archiveDefaultQueue;
    NSObject<OS_dispatch_queue> *_archiveLowQueue;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    uint8_t _flags;
}


@property (retain, nonatomic) TSPDescriptionGenerator *descriptionGenerator; // ivar: _descriptionGenerator


-(id)archiverForObject:(id)arg0 archiveQueue:(id)arg1 waitForArchiving:(BOOL)arg2 ;
-(id)archiverForObject:(id)arg0 hasArchiverAccessLock:(BOOL)arg1 ;
-(id)explicitComponentRootObjectForObject:(id)arg0 hasArchiverAccessLock:(BOOL)arg1 ;
-(id)impl_archiverForObject:(id)arg0 ;
-(id)impl_explicitComponentRootObjectForObject:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 archiverClass:(Class)arg1 archiverFlags:(char)arg2 ;
-(void)archiveObjectWithHighPriority:(id)arg0 ;
-(void)archiveObjectWithLowPriority:(id)arg0 ;
-(void)archiveWithArchiver:(id)arg0 queue:(id)arg1 waitForArchiving:(BOOL)arg2 ;
-(void)dealloc;
-(void)performAsynchronousArchiverAccessUsingBlock:(id)arg0 ;
-(void)stop;


@end


#endif