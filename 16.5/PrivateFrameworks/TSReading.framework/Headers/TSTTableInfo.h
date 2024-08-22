// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLEINFO_H
#define TSTTABLEINFO_H

@class NSString, TSPObject<TSDOwningAttachment>;
@protocol TSKModel, TSKSearchable, TSSThemedObject, TSSPresetSource, TSSStyleClient, TSDContainerInfo, TSDMixing, TSWPStorageParent;


#import "TSDDrawableInfo.h"
#import "TSTTableModel.h"
#import "TSTTablePartitioner.h"
#import "TSTMasterLayout.h"
#import "TSKDocumentRoot.h"
#import "TSTEditingState.h"
#import "TSDInfoGeometry.h"

@interface TSTTableInfo : TSDDrawableInfo <TSKModel, TSKSearchable, TSSThemedObject, TSSPresetSource, TSSStyleClient, TSDContainerInfo, TSDMixing, TSWPStorageParent>

 {
    TSTTableModel *mTableModel;
    TSTTablePartitioner *mPartitioner;
    TSTMasterLayout *mMasterLayout;
}


@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (nonatomic) NSInteger contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (nonatomic) ? editingCellID; // ivar: mEditingCellID
@property (readonly, nonatomic) ? editingCellRange;
@property (retain, nonatomic) TSTEditingState *editingState; // ivar: mEditingState
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (nonatomic, getter=isFormulaEditing) BOOL formulaEditing; // ivar: mIsFormulaEditing
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) BOOL hasReference; // ivar: mHasReference
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic) TSTMasterLayout *masterLayout;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly, nonatomic) TSTTablePartitioner *partitioner;
@property (readonly, nonatomic) ? previousEditingCellID; // ivar: mPreviousEditingCellID
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTTableModel *tableModel;


+(BOOL)canPartition;
+(id)geometryForPrototypeIndex:(NSInteger)arg0 withCanvasPoint:(struct CGPoint )arg1 ;
+(id)presetKinds;
+(id)tablePrototypeWithIndex:(NSInteger)arg0 context:(id)arg1 geometry:(id)arg2 styles:(id)arg3 ;
+(unsigned short)numberOfColumnsForProtoIndex:(NSUInteger)arg0 ;
+(unsigned short)numberOfRowsForProtoIndex:(NSUInteger)arg0 ;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(int)arg2 ;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(int)arg2 reservedCount:(NSUInteger)arg3 ;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)isSafeToConvertToAttributedString;
-(BOOL)isSafeToConvertToImage;
-(BOOL)isSafeToConvertToText;
-(BOOL)reverseChunkingIsSupported;
-(BOOL)supportsAttachedComments;
-(BOOL)supportsHyperlinks;
-(BOOL)textIsVertical;
-(Class)editorClass;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg0 animationFilter:(id)arg1 ;
-(NSUInteger)textureDeliveryStyleFromDeliveryString:(id)arg0 ;
-(id)allWPStorages;
-(id)childCommandForApplyThemeCommand:(id)arg0 ;
-(id)childCommandForReplaceAllCommand:(id)arg0 ;
-(id)childEnumerator;
-(id)childInfos;
-(id)copyWithContext:(id)arg0 ;
-(id)descriptionForPasteboardWithSource:(id)arg0 ;
-(id)initForTestingWithContext:(id)arg0 rows:(unsigned short)arg1 columns:(unsigned short)arg2 ;
-(id)initWithContext:(id)arg0 fromSourceInfo:(id)arg1 carrySelection:(BOOL)arg2 ;
-(id)initWithContext:(id)arg0 fromSourceInfo:(id)arg1 cellRegion:(id)arg2 carrySelection:(BOOL)arg3 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3 styles:(id)arg4 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 styles:(id)arg2 ;
-(id)initWithContext:(id)arg0 otherTableInfo:(id)arg1 ;
-(id)mergedContainedStorages;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)referencedStyles;
-(id)searchForAnnotationsWithHitBlock:(id)arg0 ;
-(id)searchForString:(id)arg0 options:(NSUInteger)arg1 onHit:(id)arg2 ;
-(id)tabularTextRepresentation;
-(id)textureDeliveryStylesLocalized:(BOOL)arg0 animationFilter:(id)arg1 ;
-(int)elementKind;
-(void)acceptVisitor:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)clearPartitioner;
-(void)dealloc;
-(void)debugDump;
-(void)didCopy;
-(void)didReplaceTextsInStoragesWithPlaceHolderString;
-(void)p_didLoadRichTextPayloadTable:(id)arg0 ;
-(void)performBlockWithStylesheetForAddingStyles:(id)arg0 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)scaleInfoGeometry:(struct CGSize )arg0 ;
-(void)setupTableModelForPrototypeIndex:(NSInteger)arg0 ;
-(void)shiftGeometryToExcludeTableNameHeight;
-(void)shiftGeometryToIncludeTableNameHeight;
-(void)validate;
-(void)wasAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)willCopyWithOtherDrawables:(id)arg0 ;


@end


#endif