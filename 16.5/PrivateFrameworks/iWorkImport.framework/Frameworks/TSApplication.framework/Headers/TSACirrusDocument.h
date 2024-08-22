// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSACIRRUSDOCUMENT_H
#define TSACIRRUSDOCUMENT_H

@class TSUTemporaryDirectory, NSDictionary, NSUUID, TSPObjectContext, NSString, TSPDocumentLoadValidationPolicy, TSPDocumentSaveValidationPolicy, SFUCryptoKey, NSURL;
@protocol TSPObjectContextDelegate, NSFilePresenter;

#import <Foundation/Foundation.h>

#import "TSADocumentRoot.h"

@interface TSACirrusDocument : NSObject <TSPObjectContextDelegate>

 {
    BOOL _isClosed;
    TSUTemporaryDirectory *_tempDirForSupport;
    TSUTemporaryDirectory *_tempDirForCache;
}


@property (readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
@property (readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property (retain, nonatomic) TSPObjectContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;
@property (readonly, nonatomic) NSString *documentPasswordHint; // ivar: _documentPasswordHint
@property (readonly, nonatomic) TSADocumentRoot *documentRoot;
@property (readonly, nonatomic) TSPDocumentSaveValidationPolicy *documentSaveValidationPolicy;
@property (readonly) SFUCryptoKey *encryptionKey;
@property (readonly, nonatomic) NSObject<NSFilePresenter> *filePresenter;
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) BOOL skipDocumentUpgrade;
@property (readonly) Class superclass;


-(id)documentCachePath;
-(id)initWithURL:(id)arg0 registry:(id)arg1 error:(*id)arg2 passphrase:(id)arg3 ;
-(id)logContext;
-(id)name;
-(id)supportDirectoryURL;
-(id)tskDocumentInfo;
-(void)close;
-(void)dealloc;
-(void)documentDidLoad;
-(void)presentPersistenceError:(id)arg0 ;


@end


#endif