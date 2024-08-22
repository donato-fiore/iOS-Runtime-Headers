// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAIMPORTCONTROLLER_H
#define TSAIMPORTCONTROLLER_H

@class NSURL, TSUTemporaryDirectory, NSMutableSet, NSMutableArray, NSProgress, NSDictionary, NSUUID, NSString, TSPObjectContext, TSPDocumentLoadValidationPolicy, TSPDocumentSaveValidationPolicy, SFUCryptoKey, NSMapTable, NSSet, NSOperationQueue;
@protocol TSPObjectContextDelegate, NSFilePresenter, TSDImportExportDelegate, TSAImportDelegate, OS_dispatch_queue, TSKImporter, TSADocumentPassphraseProvider;

#import <Foundation/Foundation.h>


@interface TSAImportController : NSObject <TSPObjectContextDelegate, NSFilePresenter, TSDImportExportDelegate>

 {
    NSURL *_temporaryURL;
    TSUTemporaryDirectory *_temporaryDFFDirectory;
    NSMutableSet *_importWarnings;
    NSMutableArray *_deferredWriters;
    NSProgress *_resourceAccessProgress;
    ? _flags;
}


@property (readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
@property (readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<TSAImportDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPObjectContext *documentContext; // ivar: _documentContext
@property (readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;
@property (readonly, nonatomic) TSPDocumentSaveValidationPolicy *documentSaveValidationPolicy;
@property (readonly, copy, nonatomic) NSString *documentType; // ivar: _documentType
@property (readonly, nonatomic) NSInteger documentTypeCategory;
@property (readonly) SFUCryptoKey *encryptionKey;
@property (readonly, nonatomic) NSObject<NSFilePresenter> *filePresenter;
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) BOOL hasWarnings;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ignoreDocumentSupport;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *importQueue; // ivar: _importQueue
@property (readonly, nonatomic) NSObject<TSKImporter> *importer; // ivar: _importer
@property (readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
@property (readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
@property (readonly, nonatomic) BOOL isBrowsingVersions;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (weak, nonatomic) NSObject<TSADocumentPassphraseProvider> *passphraseProvider; // ivar: _passphraseProvider
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue; // ivar: _presentedItemOperationQueue
@property (readonly, copy) NSURL *presentedItemURL; // ivar: _presentedItemURL
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly, nonatomic) BOOL shouldUpdateAdditionalResourceRequestsAfterImport;
@property (readonly, nonatomic) NSString *sourcePath; // ivar: _sourcePath
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSUTemporaryDirectory *temporaryDirectory; // ivar: _temporaryDirectory
@property (readonly, nonatomic) NSURL *temporaryURL;
@property (nonatomic) BOOL temporaryURLShouldBeAppropriateForReplacingSourcePath; // ivar: _temporaryURLShouldBeAppropriateForReplacingSourcePath


-(BOOL)_saveContextToTemporaryURL:(id)arg0 passphrase:(id)arg1 originalURL:(id)arg2 documentUUID:(id)arg3 error:(*id)arg4 ;
-(BOOL)needsFileCoordination;
-(id)additionalResourceRequestsForObjectContext:(id)arg0 ;
-(id)defaultDraftName;
-(id)documentProvider;
-(id)importErrorWithCode:(NSInteger)arg0 description:(id)arg1 failureReason:(id)arg2 underlyingError:(id)arg3 ;
-(id)importWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithPath:(id)arg0 delegate:(id)arg1 ;
-(id)initWithPath:(id)arg0 documentType:(id)arg1 delegate:(id)arg2 ;
-(id)logContext;
-(id)makeObjectContextWithTemplateDocument:(id)arg0 error:(*id)arg1 ;
-(id)name;
-(id)packageDataForWrite;
-(id)templateDocumentWithName:(id)arg0 variantIndex:(NSUInteger)arg1 ;
-(id)warnings;
-(void)_beginImportWithProgress:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_continueImportWithProgress:(id)arg0 success:(BOOL)arg1 error:(id)arg2 completedSteps:(int)arg3 completionQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)_performImportWithProgress:(id)arg0 completedSteps:(int)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)addIncompatibleMediaContainer:(id)arg0 incompatibleData:(id)arg1 compatibilityLevel:(NSInteger)arg2 ;
-(void)addPersistenceWarnings:(id)arg0 ;
-(void)addWarning:(id)arg0 ;
-(void)cancelImport;
-(void)dealloc;
-(void)finishImportWithProgress:(id)arg0 success:(BOOL)arg1 error:(id)arg2 completionQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)importWithProgress:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareForImportDisplayingProgress:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)presentPersistenceError:(id)arg0 ;
-(void)presentedItemDidMoveToURL:(id)arg0 ;
-(void)relinquishPresentedItemToWriter:(id)arg0 ;
-(void)removeFilePresenter;
-(void)removeWarning:(id)arg0 ;
-(void)resumeAutosaveWithReason:(id)arg0 ;
-(void)resumeSaveAndAutosaveWithReason:(id)arg0 ;
-(void)retrievePassphraseForEncryptedDocumentWithImporter:(id)arg0 completion:(id)arg1 ;
-(void)showProgressIfNeeded:(id)arg0 forURL:(id)arg1 ;
-(void)suspendAutosaveWithReason:(id)arg0 ;
-(void)suspendSaveAndAutosaveWithReason:(id)arg0 ;
-(void)willSaveImportedDocument;


@end


#endif