// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STREMOTEEXTRACTOR_H
#define STREMOTEEXTRACTOR_H

@class NSData, NSString, NSError, NSXPCConnection, NSDictionary;
@protocol STExtractionOriginatorProtocol, STExtractor, NSCopying, STExtractorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "STExtractionOriginator.h"

@interface STRemoteExtractor : NSObject <STExtractionOriginatorProtocol, STExtractor, NSCopying>



@property (retain, nonatomic) NSData *archiveID;
@property (retain, nonatomic) NSData *asymmetricDecryptionKey;
@property (nonatomic) BOOL dataStreamStarted; // ivar: _dataStreamStarted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL doesConsumeExtractedData;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSXPCConnection *extractionServiceConnection; // ivar: _extractionServiceConnection
@property (weak, nonatomic) NSObject<STExtractorDelegate> *extractorDelegate; // ivar: _extractorDelegate
@property (nonatomic) BOOL finalBytesSent; // ivar: _finalBytesSent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) STExtractionOriginator *internalExtractionOriginator; // ivar: _internalExtractionOriginator
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // ivar: _ioQueue
@property (nonatomic) BOOL isInvalid; // ivar: _isInvalid
@property (nonatomic) BOOL isPrepared; // ivar: _isPrepared
@property (nonatomic) NSUInteger lastResumptionOffset; // ivar: _lastResumptionOffset
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) NSString *pluginBundlePath;
@property (retain, nonatomic) NSString *pluginDirectory;
@property (nonatomic) NSUInteger requiredExtractionMemory; // ivar: _requiredExtractionMemory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *reservationQueue; // ivar: _reservationQueue
@property (nonatomic) NSUInteger reservedExtractionMemory; // ivar: _reservedExtractionMemory
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSData *signingPublicKey;
@property (retain, nonatomic) NSString *sourceDirectory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressCompletionsDuringShutdown;
@property (retain, nonatomic) NSData *symmetricDecryptionKey;


+(BOOL)supportsSecureCoding;
+(id)STAEAExtractorWithOptions:(id)arg0 ;
+(id)fullReplacementSTAEAExtractor:(id)arg0 ;
+(id)incrementalPatchSTAEAExtractor:(id)arg0 srcDirectory:(id)arg1 ;
-(id)_reserveExtractionMemory;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createOutputDir:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(void)_checkForInvalidExtractionMemoryReservation;
-(void)_invalidate;
-(void)_releaseExtractionMemory;
-(void)_sendData:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishStreamWithCompletionBlock:(id)arg0 ;
-(void)prepareForExtractionToPath:(id)arg0 completionBlock:(id)arg1 ;
-(void)remote_extractionCompleteAtArchivePath:(id)arg0 ;
-(void)remote_extractionEnteredPassthroughMode;
-(void)remote_setExtractionProgress:(CGFloat)arg0 ;
-(void)setOption:(id)arg0 forKey:(id)arg1 ;
-(void)supplyBytes:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)suspendStreamWithCompletionBlock:(id)arg0 ;
-(void)terminateStreamWithError:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif