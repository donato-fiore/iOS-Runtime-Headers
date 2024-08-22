// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPTEMPORARYOBJECTCONTEXTDELEGATE_H
#define TSPTEMPORARYOBJECTCONTEXTDELEGATE_H

@class NSString, NSError, NSURL, NSSet;
@protocol TSPFileCoordinatorDelegate, TSPObjectContextDelegate, NSFilePresenter;

#import <Foundation/Foundation.h>


@interface TSPTemporaryObjectContextDelegate : NSObject <TSPFileCoordinatorDelegate, TSPObjectContextDelegate>



@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSObject<NSFilePresenter> *filePresenter;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreDocumentSupport; // ivar: _ignoreDocumentSupport
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (copy, nonatomic) NSURL *packageURL; // ivar: _packageURL
@property (readonly, nonatomic) NSSet *persistenceWarnings; // ivar: _persistenceWarnings
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPackageURL:(id)arg0 ;
-(id)persistenceWarningsForData:(id)arg0 isReadable:(BOOL)arg1 isExternal:(BOOL)arg2 ;
-(void)addPersistenceWarnings:(id)arg0 ;
-(void)performReadUsingAccessor:(id)arg0 ;
-(void)presentPersistenceError:(id)arg0 ;


@end


#endif