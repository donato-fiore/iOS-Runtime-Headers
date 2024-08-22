// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPEQUATIONINLINELAYOUT_H
#define TSWPEQUATIONINLINELAYOUT_H



#import "TSWPEquationLayout.h"

@interface TSWPEquationInlineLayout : TSWPEquationLayout

@property (nonatomic) BOOL disableXHeightMatching; // ivar: _disableXHeightMatching
@property (readonly, nonatomic) CGFloat fontSizeAdjustedForXHeight; // ivar: _fontSizeAdjustedForXHeight


+(CGFloat)fontSizeThatMatchesXHeightForFontName:(id)arg0 fontSize:(CGFloat)arg1 ;
-(BOOL)p_textIsVertical;
-(BOOL)wantsRoundedInlinePosition;
-(CGFloat)descentForInlineLayout;
-(CGFloat)p_textScale;
-(id)computeInfoGeometryFromPureLayoutGeometry:(id)arg0 ;
-(id)computeLayoutGeometry;
-(id)layoutGeometryFromInfo;
-(id)p_layoutTarget;
-(id)p_newLayoutContextWithMaximumSize:(struct CGSize )arg0 textScale:(CGFloat)arg1 returnFontSizeAdjustedForXHeight:(*CGFloat)arg2 ;
-(id)p_textPropertiesForLayout;
-(struct CGSize )invalidEquationSize;
-(struct CGSize )unconstrainedSize;
-(void)invalidateTextScalePercent;
-(void)willLayoutInlineWithMaximumSize:(struct CGSize )arg0 textScale:(CGFloat)arg1 ;


@end


#endif