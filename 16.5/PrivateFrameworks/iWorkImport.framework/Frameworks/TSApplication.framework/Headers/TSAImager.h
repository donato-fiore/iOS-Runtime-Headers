// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAIMAGER_H
#define TSAIMAGER_H

@class TSDImager, TSUImage;



@interface TSAImager : TSDImager

@property (nonatomic) CGFloat drawableThumbnailContentInset; // ivar: _drawableThumbnailContentInset
@property (readonly, nonatomic) TSUImage *drawableThumbnailImage;
@property (nonatomic) CGSize drawableThumbnailSize; // ivar: _drawableThumbnailSize
@property (nonatomic) BOOL forceOutputSizeToMatchThumbnailSize; // ivar: _forceOutputSizeToMatchThumbnailSize
@property (nonatomic) BOOL shouldTintWhiteImages; // ivar: _shouldTintWhiteImages


-(BOOL)p_isTextInfo:(id)arg0 ;
-(BOOL)p_requiresModifiedStrokeForDrawable:(id)arg0 atScaleFactor:(CGFloat)arg1 ;
-(CGFloat)p_sizeMultiplierForDrawable:(id)arg0 ;
-(CGFloat)p_strokeWidthForScaleFactor:(CGFloat)arg0 drawable:(id)arg1 ;
-(id)p_strokeForShapeInfo:(id)arg0 ;
-(void)p_hideCaptionAndTitleFromDeepCopiedDrawable:(id)arg0 ;
-(void)p_prepareShapeInfoStroke:(id)arg0 atScaleFactor:(CGFloat)arg1 finalRect:(struct CGRect *)arg2 ;
-(void)p_prepareStyledInfoStyle:(id)arg0 ;


@end


#endif