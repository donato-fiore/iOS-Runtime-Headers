// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPDECODERREADCOORDINATOR_H
#define TSPDECODERREADCOORDINATOR_H

@class NSMapTable, NSString;
@protocol TSPReadCoordinator, TSPDecoder, TSPDecoderReadCoordinatorDelegate, OS_dispatch_queue;


#import "TSPReadCoordinatorBase.h"
#import "TSPObjectContext.h"
#import "TSPFinalizeHandlerQueue.h"
#import "TSPComponent.h"
#import "TSPDocumentLoadValidationPolicy.h"

@interface TSPDecoderReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator>

 {
    id<TSPDecoder> *_decoder;
    TSPObjectContext *_context;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    id<TSPDecoderReadCoordinatorDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_dataQueue;
    TSPComponent *_rootObjectComponent;
    NSMapTable *_objects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isReadingFromDocument;
@property (readonly) Class superclass;


-(BOOL)endReading;
-(BOOL)hasDocumentVersionUUID;
-(BOOL)isCrossAppPaste;
-(BOOL)isCrossDocumentPaste;
-(BOOL)isExternalLazyReference:(id)arg0 ;
-(BOOL)readLazyReference:(id)arg0 object:(*id)arg1 error:(*id)arg2 ;
-(NSInteger)reader:(id)arg0 wantsObjectIdentifierForUUID:(id)arg1 ;
-(NSUInteger)fileFormatVersion;
-(NSUInteger)readVersion;
-(id)baseObjectUUID;
-(id)context;
-(id)externalObjectForIdentifier:(NSInteger)arg0 componentIdentifier:(NSInteger)arg1 isReadFinished:(BOOL)arg2 ;
-(id)init;
-(id)initWithDecoder:(id)arg0 context:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 ;
-(id)objectForIdentifier:(NSInteger)arg0 ;
-(id)reader:(id)arg0 wantsDataForIdentifier:(NSInteger)arg1 ;
-(id)unarchivedObjectForIdentifier:(NSInteger)arg0 isReadFinished:(BOOL)arg1 ;
-(unsigned char)packageIdentifier;
-(unsigned int)sourceType;
-(void)didReferenceExternalObject:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(void)didUpdateLazyReferenceDelegate:(id)arg0 ;
-(void)readComponent:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)readRootObjectWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)reader:(id)arg0 didFindExternalReferenceToObjectIdentifier:(NSInteger)arg1 componentIdentifier:(NSInteger)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 objectClass:(Class)arg5 objectProtocol:(id)arg6 fromParentObject:(id)arg7 completion:(id)arg8 ;
-(void)reader:(id)arg0 didFindExternalRepeatedReference:(id)arg1 isWeak:(BOOL)arg2 allowUnknownObject:(BOOL)arg3 objectClass:(Class)arg4 objectProtocol:(id)arg5 fromParentObject:(id)arg6 completion:(id)arg7 ;
-(void)reader:(id)arg0 didReadLazyReference:(id)arg1 ;
-(void)reader:(id)arg0 didUnarchiveObject:(id)arg1 ;


@end


#endif