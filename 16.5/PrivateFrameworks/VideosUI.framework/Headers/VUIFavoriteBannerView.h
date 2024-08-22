// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIFAVORITEBANNERVIEW_H
#define VUIFAVORITEBANNERVIEW_H

@class UIView, NSArray;


#import "VUIFavoriteBannerLayout.h"
#import "VUILabel.h"

@interface VUIFavoriteBannerView : UIView

@property (retain, nonatomic) NSArray *backgroundImageLogos; // ivar: _backgroundImageLogos
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) VUIFavoriteBannerLayout *layout; // ivar: _layout
@property (retain, nonatomic) VUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel


-(id)_generatePlainWeaveImagePointsForSize:(struct CGSize )arg0 ;
-(id)_generatePointsForPlainWeaveSide:(CGFloat)arg0 containerRect:(struct CGRect )arg1 imageSize:(struct CGSize )arg2 direction:(NSUInteger)arg3 ;
-(id)_generateSiderowImagePointsForSize:(struct CGSize )arg0 ;
-(id)_generateSingleRowImagePoints;
-(struct CGSize )_imageSizeForBannerStyle:(NSUInteger)arg0 ;
-(struct CGSize )_layoutSubviewsWithSize:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct CGSize )imageSizeForBannerStyle:(NSUInteger)arg0 sizeClass:(NSInteger)arg1 ;
-(struct CGSize )maxImageSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)prepareForCellReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif