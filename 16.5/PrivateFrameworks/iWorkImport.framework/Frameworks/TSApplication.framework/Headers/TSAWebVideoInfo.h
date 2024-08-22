// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAWEBVIDEOINFO_H
#define TSAWEBVIDEOINFO_H

@class TSDDrawableInfo, TSDMediaStyle, NSString, TSPData, NSURL, TSDAttribution, NSSet, TSSStyle;
@protocol TSDFittingOnInsertion, TSDMixing, TSDDrawableInfoCustomUnarchivingSubclassProviding, TSDStyleOwning, TSSStyleClient;



@interface TSAWebVideoInfo : TSDDrawableInfo <TSDFittingOnInsertion, TSDMixing, TSDDrawableInfoCustomUnarchivingSubclassProviding, TSDStyleOwning, TSSStyleClient>

 {
    TSDMediaStyle *_style;
    NSString *_URLString;
    TSPData *_posterImageData;
    BOOL _definedPosterImageData;
    BOOL _definedAttribution;
    CGSize _archivedImageNaturalSize;
}


@property (readonly, nonatomic) NSURL *URL;
@property (copy, nonatomic) TSDAttribution *attribution; // ivar: _attribution
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSPData *posterImageData;
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (retain, nonatomic) TSSStyle *style;
@property (readonly, nonatomic) Class styleClass;
@property (readonly) Class superclass;


+(Class)drawableInfoSubclassForClass:(Class)arg0 unarchiver:(id)arg1 ;
+(id)p_defaultArchivedImageStyleWithContext:(id)arg0 ;
-(BOOL)allowsCaption;
-(BOOL)allowsTitle;
-(BOOL)isSelectable;
-(BOOL)supportsHyperlinks;
-(BOOL)supportsParentRotation;
-(BOOL)wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
-(BOOL)wantsStandardTypesInAdditionToTypesToPromiseWhenDraggingSingleDrawable;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)animationFilters;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 URL:(id)arg2 posterImageData:(id)arg3 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 URL:(id)arg3 posterImageData:(id)arg4 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)p_attributedStringRepresentation;
-(id)pastedPropertyMapForStyle:(id)arg0 tailLineEndInfo:(int)arg1 ;
-(id)promisedDataForType:(id)arg0 ;
-(id)typeName;
-(id)typesToPromiseWhenCopyingSingleDrawable;
-(unsigned int)elementKind;
-(void)acceptVisitor:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)didInitFromSOS;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)scaleDownSizeToFitWithinSize:(struct CGSize )arg0 ;
-(void)takeGeometryFromReplacedWebVideoInfo:(id)arg0 ;
-(void)takePropertiesFromReplacedWebVideoInfo:(id)arg0 ;


@end


#endif