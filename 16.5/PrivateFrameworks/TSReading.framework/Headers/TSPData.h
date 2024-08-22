// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPDATA_H
#define TSPDATA_H

@class NSString;
@protocol OS_dispatch_queue, TSPDataStorage;

#import <Foundation/Foundation.h>

#import "TSPDataManager.h"
#import "TSPObjectContext.h"

@interface TSPData : NSObject {
    int _didCull;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<TSPDataStorage> *_storage;
    NSString *_filename;
    TSPDataManager *_manager;
    array<unsigned char, 20UL> _digest;
    BOOL _isDeallocating;
}


@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSUInteger encodedLength;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isApplicationData;
@property (readonly, nonatomic) BOOL isExternalData;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSString *packageLocator;
@property (retain, nonatomic) NSObject<TSPDataStorage> *storage;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)updateDigest:(*void)arg0 withProtobufString:(*void)arg1 ;
+(id)cullingListeners;
+(id)cullingListenersQueue;
+(id)dataFromDataRep:(id)arg0 filename:(id)arg1 context:(id)arg2 ;
+(id)dataFromNSData:(id)arg0 filename:(id)arg1 context:(id)arg2 ;
+(id)dataFromReadChannel:(id)arg0 filename:(id)arg1 context:(id)arg2 ;
+(id)dataFromURL:(id)arg0 context:(id)arg1 ;
+(id)dataFromURL:(id)arg0 useExternalReferenceIfAllowed:(BOOL)arg1 context:(id)arg2 ;
+(id)dataFromURL:(id)arg0 useExternalReferenceIfAllowed:(BOOL)arg1 useFileCoordination:(BOOL)arg2 context:(id)arg3 ;
+(id)null;
+(id)readOnlyDataFromDataRep:(id)arg0 filename:(id)arg1 context:(id)arg2 ;
+(id)readOnlyDataFromNSData:(id)arg0 filename:(id)arg1 context:(id)arg2 ;
+(id)readOnlyDataFromURL:(id)arg0 context:(id)arg1 ;
+(id)readOnlyDataWithoutDataDigestFromURL:(id)arg0 context:(id)arg1 ;
+(id)requiredAVAssetOptions;
+(void)addCullingListener:(id)arg0 ;
+(void)removeCullingListener:(id)arg0 ;
-(*void)digest;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLengthLikelyToBeGreaterThan:(NSUInteger)arg0 ;
-(BOOL)isStorageInPackage:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)AVAsset;
-(id)AVAssetWithOptions:(id)arg0 ;
-(id)NSData;
-(id)bookmarkData;
-(id)copyWithContext:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(NSInteger)arg0 digest:(*void)arg1 filename:(id)arg2 storage:(id)arg3 manager:(id)arg4 ;
-(id)preferredFilename;
-(struct CGDataProvider *)newCGDataProvider;
-(struct CGImage *)newCGImage;
-(struct CGImageSource *)newCGImageSource;
-(void)addDownloadObserver:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;
-(void)performInputStreamReadWithAccessor:(id)arg0 ;
-(void)willCull;


@end


#endif