// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNLIVEVIDEOINFO_H
#define KNLIVEVIDEOINFO_H

@class TSDStyledInfo, TSDMediaStyle, TSDFill, TSPData, NSString, TSDInfoGeometry, NSUUID, TSPObject<TSDOwningAttachment>;
@protocol TSDDrawableInfoCustomUnarchivingSubclassProviding, TSDMixing, TSAPdfTaggerIgnorable, TSDInfo;


#import "KNLiveVideoSource.h"

@interface KNLiveVideoInfo : TSDStyledInfo <TSDDrawableInfoCustomUnarchivingSubclassProviding, TSDMixing, TSAPdfTaggerIgnorable>

 {
    TSDMediaStyle *_style;
    CGFloat _scale;
    CGPoint _normalizedOffset;
    NSInteger _maskKind;
    CGFloat _maskCornerRadius;
    NSInteger _backgroundKind;
    TSDFill *_backgroundFill;
    TSPData *_archivedMoviePosterImageData;
}


@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (copy, nonatomic) TSDFill *backgroundFill;
@property (nonatomic) NSInteger backgroundKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger effectiveBackgroundKind;
@property (readonly, nonatomic) NSInteger effectiveMaskKind;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger i_archivedBackgroundKind;
@property (nonatomic) NSInteger i_archivedMaskKind;
@property (copy, nonatomic) NSUUID *i_sourceId; // ivar: _sourceId
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (nonatomic) CGFloat maskCornerRadius;
@property (nonatomic) NSInteger maskKind;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) CGPoint normalizedOffset;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (nonatomic) CGFloat scale;
@property (readonly, nonatomic) BOOL shouldBeIgnoredByPDFTagger;
@property (retain, nonatomic) KNLiveVideoSource *source;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(Class)drawableInfoSubclassForClass:(Class)arg0 unarchiver:(id)arg1 ;
+(NSInteger)i_backgroundKindForArchivedBackgroundKind:(NSInteger)arg0 ;
+(id)i_makeArchivedMoviePosterImageDataWithContext:(id)arg0 ;
-(BOOL)allowsCaption;
-(BOOL)allowsTitle;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)isAllowedInGroups;
-(BOOL)shouldShowInPrint;
-(BOOL)supportsUserInteractionWhenVisibleInAnimation;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(Class)styleClass;
-(NSInteger)effectiveMaskKindForGeometry:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)animationFilters;
-(id)copyWithContext:(id)arg0 ;
-(id)defaultDescriptiveName;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)objectForProperty:(int)arg0 ;
-(id)pastedPropertyMapForStyle:(id)arg0 tailLineEndInfo:(int)arg1 ;
-(id)presetKind;
-(id)style;
-(id)styleIdentifierTemplateForNewPreset;
-(id)typeName;
-(int)intValueForProperty:(int)arg0 ;
-(unsigned int)elementKind;
-(void)acceptVisitor:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_updateSlideNodeLiveVideoSourceUsage;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setStyle:(id)arg0 ;


@end


#endif