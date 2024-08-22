// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPDOCUMENTRESOURCELEGACYREGISTRY_H
#define TSPDOCUMENTRESOURCELEGACYREGISTRY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TSPDocumentResourceLegacyRegistry : NSObject {
    NSDictionary *_metadataDictionary;
}


@property (readonly) NSDictionary *metadataDictionary;


+(id)sharedSageRegistry;
+(id)sharedSageRegistryMetadataURL;
+(id)sharedTangierRegistry;
+(id)sharedTangierRegistryMetadataURL;
+(void)setSharedSageRegistryMetadataURL:(id)arg0 ;
+(void)setSharedTangierRegistryMetadataURL:(id)arg0 ;
-(id)documentResourceLegacyInfoForApplicationRelativePath:(id)arg0 ;
-(id)init;
-(id)initWithMetadataDictionary:(id)arg0 ;
-(id)initWithMetadataURL:(id)arg0 ;
-(id)metadataDictionaryKeyForRelativePath:(id)arg0 ;


@end


#endif