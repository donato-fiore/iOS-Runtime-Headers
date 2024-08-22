// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPPACKAGEMETADATADATAINFO_H
#define TSPPACKAGEMETADATADATAINFO_H

@class NSString, NSNumber;
@protocol TSPCryptoInfo;

#import <Foundation/Foundation.h>

#import "TSPDigest.h"

@interface TSPPackageMetadataDataInfo : NSObject

@property (readonly, nonatomic) NSObject<TSPCryptoInfo> *decryptionInfo; // ivar: _decryptionInfo
@property (readonly, nonatomic) TSPDigest *digest; // ivar: _digest
@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isUnmaterializedRemoteData; // ivar: _isUnmaterializedRemoteData
@property (readonly, nonatomic) NSNumber *materializedLength; // ivar: _materializedLength
@property (readonly, nonatomic) NSString *preferredFilename; // ivar: _preferredFilename


-(id)dataStorageWithPackage:(id)arg0 documentURL:(id)arg1 ;
-(id)initWithDataInfo:(*void)arg0 decryptionKey:(id)arg1 ;


@end


#endif