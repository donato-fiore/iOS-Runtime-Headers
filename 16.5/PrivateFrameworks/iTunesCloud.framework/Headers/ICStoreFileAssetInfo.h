// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSTOREFILEASSETINFO_H
#define ICSTOREFILEASSETINFO_H

@class NSDictionary, NSURL, NSString, NSArray, NSData;

#import <Foundation/Foundation.h>

#import "ICStoreFinanceItemMetadata.h"

@interface ICStoreFileAssetInfo : NSObject {
    NSDictionary *_responseDictionary;
}


@property (copy, nonatomic) NSURL *assetURL; // ivar: _assetURL
@property (copy, nonatomic) NSString *downloadKey; // ivar: _downloadKey
@property (nonatomic) NSInteger expectedProtectionType; // ivar: _expectedProtectionType
@property (copy, nonatomic) NSArray *fairPlayInfoList; // ivar: _fairPlayInfoList
@property (copy, nonatomic) NSString *fileExtension; // ivar: _fileExtension
@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (nonatomic) NSInteger flavorType; // ivar: _flavorType
@property (copy, nonatomic) NSData *md5; // ivar: _md5
@property (copy, nonatomic) ICStoreFinanceItemMetadata *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *playbackAuthorizationToken; // ivar: _playbackAuthorizationToken
@property (readonly, nonatomic) NSInteger protectionType;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;


-(id)initWithAssetURL:(id)arg0 ;


@end


#endif