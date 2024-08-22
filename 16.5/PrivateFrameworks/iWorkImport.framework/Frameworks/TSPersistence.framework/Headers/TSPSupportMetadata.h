// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPSUPPORTMETADATA_H
#define TSPSUPPORTMETADATA_H

@class NSSet;
@protocol OS_dispatch_queue;


#import "TSPObject.h"

@interface TSPSupportMetadata : TSPObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    DigestMap<TSP::DataCollaborationProperties> _dataCollaborationPropertiesMap;
    os_unfair_lock_s _archivingLock;
    BOOL _isInCollaborationModeForArchiving;
    DigestMap<TSP::DataCollaborationProperties> _dataCollaborationPropertiesMapForArchiving;
    NSSet *_knownDataDigests;
}




-(NSInteger)tsp_identifier;
-(id)initWithContext:(id)arg0 ;
-(id)packageLocator;
-(struct DataCollaborationProperties )collaborationPropertiesForData:(id)arg0 ;
-(unsigned char)componentRequiredPackageIdentifier;
-(void)collaborationPropertiesForData:(id)arg0 usingBlock:(id)arg1 ;
-(void)commonInit;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_resetServerDataFlags;
-(void)saveToArchiver:(id)arg0 ;
-(void)setCollaborationPropertiesForData:(id)arg0 usingBlock:(id)arg1 ;
-(void)setKnownDataDigestsForAutosave:(id)arg0 ;
-(void)takeSnapshotWithCollaborationMode:(BOOL)arg0 ;
-(void)validateDataCollaborationProperties:(struct DataCollaborationProperties *)arg0 forData:(id)arg1 ;


@end


#endif