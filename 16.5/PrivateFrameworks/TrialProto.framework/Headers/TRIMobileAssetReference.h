// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIMOBILEASSETREFERENCE_H
#define TRIMOBILEASSETREFERENCE_H

@class NSString;


#import "TRIPBMessage.h"

@interface TRIMobileAssetReference : TRIPBMessage

@property (copy, nonatomic) NSString *assetSpecifier;
@property (copy, nonatomic) NSString *assetType;
@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) BOOL hasAssetSpecifier;
@property (nonatomic) BOOL hasAssetType;
@property (nonatomic) BOOL hasAssetVersion;
@property (nonatomic) BOOL hasIsFileFactor;
@property (nonatomic) BOOL hasIsOnDemand;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL isFileFactor;
@property (nonatomic) BOOL isOnDemand;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSUInteger size;


+(id)descriptor;


@end


#endif