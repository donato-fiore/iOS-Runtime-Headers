// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDIMAGEINFO_H
#define TSDIMAGEINFO_H

@class TSUBezierPath, TSPData, NSArray, NSString, NSSet, TSPObject<TSDOwningAttachment>;
@protocol TSDReducibleImageContainer, TSDContainerInfo, TSDMixing, TSSPresetSource, TSKTransformableObject, TSDCompatibilityAwareMediaContainer, TSDAttachmentAwareContainerInfo, TSDInfo;


#import "TSDMediaInfo.h"
#import "TSDImageDataHelper.h"
#import "TSDMediaStyle.h"
#import "TSDInfoGeometry.h"
#import "TSDImageAdjustments.h"
#import "TSDMaskInfo.h"

@interface TSDImageInfo : TSDMediaInfo <TSDReducibleImageContainer, TSDContainerInfo, TSDMixing, TSSPresetSource, TSKTransformableObject, TSDCompatibilityAwareMediaContainer, TSDAttachmentAwareContainerInfo>

 {
    TSUBezierPath *mInstantAlphaPath;
    CGSize mNaturalSize;
    TSDImageDataHelper *mImageDataHelper;
    TSPData *mThumbnailImageData;
    TSPData *mThumbnailAdjustedImageData;
    TSDImageDataHelper *mAdjustedImageDataHelper;
    TSPData *mEnhancedImageData;
    TSDMediaStyle *mStyle;
    TSUBezierPath *mTracedPath;
    BOOL mShouldTracePDFData;
    BOOL mBackgroundRemoved;
    BOOL mCurrentlyInDocument;
    CGFloat mDescentForInlineLayout;
    BOOL mDescentForInlineLayoutValid;
}


@property (retain, nonatomic) TSPData *adjustedImageData; // ivar: mAdjustedImageData
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (nonatomic) BOOL backgroundRemoved;
@property (readonly, nonatomic) BOOL canAdjustImage;
@property (readonly, nonatomic) BOOL canBeMasked;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat descentForInlineLayout;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSPData *enhancedImageData;
@property (readonly, nonatomic) NSUInteger estimatedDataSizeForNewAdjustmentSentToServer;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) TSDImageAdjustments *imageAdjustments; // ivar: mImageAdjustments
@property (readonly, retain, nonatomic) TSPData *imageData; // ivar: mImageData
@property (readonly, nonatomic) TSPData *imageDataForExport;
@property (retain, nonatomic) TSPData *imageDataNonnull;
@property (readonly, nonatomic) TSDMediaStyle *imageStyle;
@property (readonly, nonatomic) NSSet *infosToObserveForAttachedInfo;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (retain, nonatomic) TSUBezierPath *instantAlphaPath;
@property (readonly, nonatomic) TSUBezierPath *instantAlphaPathIgnoringNaturalSize;
@property (readonly, nonatomic) BOOL isMaster;
@property (retain, nonatomic) TSDMaskInfo *maskInfo; // ivar: mMaskInfo
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) CGSize naturalSize;
@property (retain, nonatomic) TSPData *originalImageData; // ivar: mOriginalImageData
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly, nonatomic) BOOL shouldGenerateThumbnails;
@property (nonatomic) BOOL shouldTracePDFData;
@property (readonly) Class superclass;
@property (retain, nonatomic) TSPData *thumbnailAdjustedImageData;
@property (retain, nonatomic) TSPData *thumbnailImageData;
@property (readonly, nonatomic) TSUBezierPath *tracedPath;


+(id)bootstrapPropertyMapForPresetIndex:(NSUInteger)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 ;
+(id)presetKinds;
+(void)adjustIncomingImageGeometry:(id)arg0 maskGeometry:(id)arg1 forImageData:(id)arg2 maskedWithInstantAlphaPath:(id)arg3 withNaturalSize:(struct CGSize )arg4 forTargetImageGeometry:(id)arg5 withTargetMaskGeometry:(id)arg6 ;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 ;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 reservedCount:(NSUInteger)arg3 ;
-(BOOL)allowsCaption;
-(BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
-(BOOL)allowsTitle;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)canCopyData;
-(BOOL)canResetMediaSize;
-(BOOL)hasPDFDataForCopy;
-(BOOL)isMasked;
-(BOOL)isPDF;
-(BOOL)maskCanBeReset;
-(BOOL)needsDownload;
-(BOOL)p_aspectRatioUnlockedResizeWouldCauseSkew;
-(BOOL)p_canCopy:(id)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(Class)styleClass;
-(NSInteger)mediaCompatibilityTypeForData:(id)arg0 associatedHint:(id)arg1 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithContext:(id)arg0 style:(id)arg1 ;
-(id)defaultMaskInfo;
-(id)defaultMaskInfoWithContext:(id)arg0 ;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 imageData:(id)arg3 originalImageData:(id)arg4 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 imageData:(id)arg3 thumbnailImageData:(id)arg4 originalImageData:(id)arg5 imageAdjustments:(id)arg6 adjustedImageData:(id)arg7 thumbnailAdjustedImageData:(id)arg8 ;
-(id)mediaDataForDragging;
-(id)mediaDisplayName;
-(id)mediaFileType;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)objectForProperty:(int)arg0 ;
-(id)pastedPropertyMapForStyle:(id)arg0 tailLineEndInfo:(int)arg1 ;
-(id)presetKind;
-(id)promisedDataForType:(id)arg0 ;
-(id)propertyNameForFlagsCommand;
-(id)propertyNameForOriginalSizeCommand;
-(id)style;
-(id)styleIdentifierTemplateForNewPreset;
-(id)typeName;
-(id)typesToPromiseWhenCopyingSingleDrawable;
-(struct CGAffineTransform )computeFullTransform;
-(struct CGPoint )centerForReplacingWithNewMedia;
-(struct CGSize )defaultOriginalSize;
-(struct CGSize )originalSize;
-(struct CGSize )rawDataSize;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(unsigned short)propertyIdForFlagsCommand;
-(unsigned short)propertyIdForOriginalSizeCommand;
-(void)acceptVisitor:(id)arg0 ;
-(void)dealloc;
-(void)i_forciblyRegenerateThumbnail;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_upgradeImageGeometry;
-(void)p_upgradeImageThumbnail;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)scaleDownSizeToFitWithinSize:(struct CGSize )arg0 ;
-(void)setExteriorTextWrap:(id)arg0 ;
-(void)setStyle:(id)arg0 ;
-(void)updateGeometryToReplaceMediaInfo:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif