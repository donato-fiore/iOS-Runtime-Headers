// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEQUARANTINEASSET_H
#define WFREMOTEQUARANTINEASSET_H

@class WFFileRepresentation, NSString, CKRecordID, NSData;
@protocol WFCloudKitItem;

#import <Foundation/Foundation.h>


@interface WFRemoteQuarantineAsset : NSObject <WFCloudKitItem>



@property (retain, nonatomic) WFFileRepresentation *assetDataFile; // ivar: _assetDataFile
@property (nonatomic) NSInteger compatibilityVersion; // ivar: _compatibilityVersion
@property (copy, nonatomic) NSString *configuration; // ivar: _configuration
@property (nonatomic) NSInteger contentVersion; // ivar: _contentVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: identifier
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) Class superclass;


+(id)properties;
+(id)recordType;


@end


#endif