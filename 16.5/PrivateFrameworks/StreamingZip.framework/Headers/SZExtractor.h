// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SZEXTRACTOR_H
#define SZEXTRACTOR_H

@class NSString, NSError, NSDictionary, NSXPCConnection;
@protocol SZExtractor, NSCopying, SZExtractorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "StreamingUnzipper.h"
#import "SZExtractorInternalDelegate.h"

@interface SZExtractor : NSObject <SZExtractor, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SZExtractorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL doesConsumeExtractedData;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *extractionPath; // ivar: _extractionPath
@property (weak, nonatomic) NSObject<SZExtractorDelegate> *extractorDelegate;
@property (nonatomic) BOOL hasHadPostSetupMethodsCalled; // ivar: _hasHadPostSetupMethodsCalled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) StreamingUnzipper *inProcessUnzipper; // ivar: _inProcessUnzipper
@property (readonly, nonatomic) SZExtractorInternalDelegate *internalExtractorDelegate; // ivar: _internalExtractorDelegate
@property (readonly, nonatomic) BOOL isLocalExtractor; // ivar: _isLocalExtractor
@property (nonatomic) NSUInteger lastResumptionOffset; // ivar: _lastResumptionOffset
@property (nonatomic) BOOL needsPreparation; // ivar: _needsPreparation
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *unzipServiceConnection; // ivar: _unzipServiceConnection


+(BOOL)supportsSecureCoding;
+(id)_serviceConnectionWithError:(*id)arg0 ;
+(id)knownSZExtractorImplementations;
+(int)servicePIDWithError:(*id)arg0 ;
+(void)enableDebugLogging;
-(BOOL)_isValidObject;
-(BOOL)_synchronouslyPrepareForExtractionAtOffset:(*NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForLocalExtractionWithPath:(id)arg0 options:(id)arg1 resumptionOffset:(*NSUInteger)arg2 ;
-(id)initForRemoteExtractionWithPath:(id)arg0 options:(id)arg1 resumptionOffset:(*NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(id)initWithPath:(id)arg0 md5Hashes:(id)arg1 hashedChunkSize:(NSUInteger)arg2 resumptionOffset:(*NSUInteger)arg3 ;
-(id)initWithPath:(id)arg0 options:(id)arg1 ;
-(id)initWithPath:(id)arg0 options:(id)arg1 resumptionOffset:(*NSUInteger)arg2 ;
-(id)initWithPath:(id)arg0 resumptionOffset:(*NSUInteger)arg1 ;
-(void)_invalidateObject;
-(void)_prepareForExtractionSynchronously:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(void)_prepareForLocalExtraction:(id)arg0 ;
-(void)_prepareForRemoteExtractionSynchronously:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(void)_setUpWithPath:(id)arg0 options:(id)arg1 ;
-(void)_suspendStreamWithCompletionBlockSynchronously:(BOOL)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishStreamWithCompletionBlock:(id)arg0 ;
-(void)prepareForExtraction:(id)arg0 ;
-(void)prepareForExtractionToPath:(id)arg0 completionBlock:(id)arg1 ;
-(void)setActiveExtractorDelegateMethods:(int)arg0 ;
-(void)supplyBytes:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)suspendStreamWithCompletionBlock:(id)arg0 ;
-(void)terminateStreamWithError:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif