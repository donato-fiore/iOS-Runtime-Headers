// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKAPFSSNAPSHOTDISK_H
#define SKAPFSSNAPSHOTDISK_H

@class NSString;


#import "SKAPFSDisk.h"

@interface SKAPFSSnapshotDisk : SKAPFSDisk {
    NSString *_apfsUUID;
}


@property (retain) NSString *apfsUUID;
@property NSInteger sealStatus; // ivar: _sealStatus
@property (retain) NSString *snapshotName; // ivar: _snapshotName
@property (readonly) NSString *snapshotUUID;


-(id)dictionaryRepresentation;
-(id)innerDescription;
-(id)minimalDictionaryRepresentation;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif