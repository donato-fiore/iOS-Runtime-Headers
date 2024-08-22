// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPOBJECT_H
#define TSPOBJECT_H

@class NSUUID, NSString, TSUUUIDPath;
@protocol TSPReferenceItem, TSPObjectDelegate;

#import <Foundation/Foundation.h>

#import "TSPObject.h"
#import "TSPObjectContext.h"
#import "TSPComponent.h"
#import "TSPUnknownContent.h"

@interface TSPObject : NSObject <TSPReferenceItem>

 {
    id<TSPObjectDelegate> *_delegate;
    uint8_t _identifier;
    uint8_t _modifyObjectToken;
    NSUUID *_UUID;
    ? _flags;
}


@property (readonly, nonatomic) NSUInteger allowedObjectTargetTypes;
@property (readonly, nonatomic) BOOL allowsImplicitComponentOwnership;
@property (readonly, nonatomic) BOOL canModify;
@property (readonly, nonatomic) BOOL componentCanBeDropped;
@property (readonly, nonatomic) NSUInteger componentReadVersion;
@property (readonly, nonatomic) unsigned char componentRequiredPackageIdentifier;
@property (readonly, nonatomic) BOOL componentRequiresCurrentVersion;
@property (readonly, nonatomic) TSPObject *componentRootObject;
@property (readonly, nonatomic) NSInteger compressionAlgorithm;
@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int delayedArchivingPriority;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCommandObject;
@property (readonly, nonatomic) BOOL isComponentRoot;
@property (readonly, nonatomic) BOOL needsArchiving;
@property (copy, nonatomic) NSUUID *objectUUID;
@property (readonly, nonatomic) TSUUUIDPath *objectUUIDPath;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) BOOL shouldAlwaysArchiveWhenInMemory;
@property (readonly, nonatomic) BOOL shouldDelayArchiving;
@property (readonly, nonatomic) BOOL storeOutsideObjectArchive;
@property (readonly) Class superclass;
@property (weak, nonatomic) TSPComponent *tsp_component; // ivar: _component
@property (weak, nonatomic) NSObject<TSPObjectDelegate> *tsp_delegate;
@property (readonly, nonatomic) NSString *tsp_description;
@property (nonatomic) NSInteger tsp_identifier;
@property (readonly, nonatomic) BOOL tsp_isInDocument;
@property (readonly, nonatomic) BOOL tsp_isLazyReference;
@property (readonly, nonatomic) BOOL tsp_isPersisted;
@property (readonly, nonatomic) BOOL tsp_isTransientObject;
@property (nonatomic) NSInteger tsp_modifyObjectToken;
@property (readonly, nonatomic) NSString *tsp_publicLoggingDescription;
@property (readonly, nonatomic) TSPUnknownContent *tsp_unknownContent; // ivar: _unknownContent


+(BOOL)needsObjectUUID;
+(BOOL)tsp_isInternalObjectContainerClass;
+(BOOL)tsp_isPerformingUpgrade;
+(BOOL)tsp_isTransientObjectIdentifier:(NSInteger)arg0 ;
+(Class)classForUnarchiver:(id)arg0 ;
+(NSUInteger)tsp_estimatedByteSizeOfReferenceToObject:(id)arg0 ;
+(NSUInteger)tsp_estimatedCostOfObject:(id)arg0 ;
+(id)tsp_deserializeFromData:(id)arg0 options:(id)arg1 context:(id)arg2 error:(*id)arg3 ;
+(id)tsp_deserializeFromURL:(id)arg0 options:(id)arg1 context:(id)arg2 isCrossDocumentPaste:(BOOL)arg3 isCrossAppPaste:(BOOL)arg4 completion:(id)arg5 ;
+(void)performUpgradeUsingBlock:(id)arg0 ;
-(BOOL)tsp_hasSameUnknownFieldsAsObject:(id)arg0 ;
-(BOOL)validatedLoadFromUnarchiver:(id)arg0 ;
-(id)init;
-(id)initBaseObjectFromUnarchiver:(id)arg0 ;
-(id)initBaseObjectWithContext:(id)arg0 ;
-(id)initDocumentObjectWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)newObjectUUIDWithOffset:(NSUInteger)arg0 ;
-(id)tsp_deepCopyWithContext:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)tsp_deepCopyWithContext:(id)arg0 options:(id)arg1 objectMap:(*id)arg2 error:(*id)arg3 ;
-(id)tsp_deepCopyWithOptions:(id)arg0 ;
-(id)tsp_descriptionWithDepth:(NSUInteger)arg0 ;
-(id)tsp_objectInfoWithDepth:(NSUInteger)arg0 ;
-(id)tsp_referencedData;
-(id)tsp_referencedObjectUUIDs;
-(id)tsp_referencedObjects;
-(id)tsp_serializeToDataWithOptions:(id)arg0 completion:(id)arg1 ;
-(id)tsp_serializeToDataWithOptions:(id)arg0 dataReferences:(*id)arg1 error:(*id)arg2 ;
-(id)tsp_serializeToURL:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(id)tsp_writeObjectNSDataRepresentation:(id)arg0 andData:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)commonInit;
-(void)dealloc;
-(void)didAddReferenceToData:(id)arg0 ;
-(void)didFinishUnarchiving;
-(void)didInitFromSOS;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)performBlockIgnoringModifications:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)tsp_commonInitBaseObjectWithContext:(id)arg0 ;
-(void)tsp_deepCopyWithContext:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)tsp_deepCopyWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)wasAddedToDocumentDuringImportWithContext:(id)arg0 ;
-(void)wasAddedToDocumentDuringUnarchiveWithContext:(id)arg0 ;
-(void)wasAddedToDocumentWithContext:(id)arg0 ;
-(void)wasAddedToDocumentWithContext:(id)arg0 options:(NSUInteger)arg1 ;
-(void)willBeRemovedFromDocumentWithContext:(id)arg0 ;
-(void)willModify;
-(void)willModifyForUpgrade;
-(void)willModifyForUpgradeWithOptions:(NSUInteger)arg0 ;
-(void)willModifyToComponentRootObject:(id)arg0 ;
-(void)willModifyWithOptions:(NSUInteger)arg0 ;
-(void)willRemoveReferenceToData:(id)arg0 ;


@end


#endif