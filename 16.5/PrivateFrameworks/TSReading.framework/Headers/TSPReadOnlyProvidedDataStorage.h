// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPREADONLYPROVIDEDDATASTORAGE_H
#define TSPREADONLYPROVIDEDDATASTORAGE_H

@class SFUDataRepresentation, NSString, SFUCryptoKey;
@protocol TSPDataStorage;

#import <Foundation/Foundation.h>


@interface TSPReadOnlyProvidedDataStorage : NSObject <TSPDataStorage>

 {
    SFUDataRepresentation *_dataRep;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSUInteger encodedLength;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly) Class superclass;


-(BOOL)isInPackage:(id)arg0 ;
-(BOOL)writeToBundleWriter:(id)arg0 preferredFilename:(id)arg1 filename:(*id)arg2 didCopyDataToBundle:(*BOOL)arg3 ;
-(NSUInteger)length;
-(id)AVAssetWithOptions:(id)arg0 ;
-(id)AVAssetWithOptions:(id)arg0 contentTypeUTI:(id)arg1 ;
-(id)AVAssetWithOptions:(id)arg0 usingResourceLoaderWithContentTypeUTI:(id)arg1 ;
-(id)NSDataWithOptions:(NSUInteger)arg0 ;
-(id)applicationDataLocator;
-(id)bookmarkDataWithOptions:(NSUInteger)arg0 ;
-(id)filenameForPreferredFilename:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(struct CGDataProvider *)newCGDataProvider;
-(struct CGImageSource *)newCGImageSource;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;
-(void)performReadWithAccessor:(id)arg0 ;


@end


#endif