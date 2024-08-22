// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIASSET_H
#define TRIASSET_H

@class NSString;


#import "TRIPBMessage.h"

@interface TRIAsset : TRIPBMessage

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) int cloudKitContainer;
@property (nonatomic) unsigned int cloudKitIndex;
@property (nonatomic) BOOL hasAssetId;
@property (nonatomic) BOOL hasCloudKitContainer;
@property (nonatomic) BOOL hasCloudKitIndex;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasSigned_p;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL hasTreatmentId;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL signed_p;
@property (nonatomic) NSUInteger size;
@property (copy, nonatomic) NSString *treatmentId;


+(id)descriptor;


@end


#endif