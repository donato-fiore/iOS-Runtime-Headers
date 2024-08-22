// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONDOTLABELACCESSORYVIEW_H
#define SBICONDOTLABELACCESSORYVIEW_H

@class UIImageView;


#import "SBIconLabelAccessoryView.h"

@interface SBIconDotLabelAccessoryView : SBIconLabelAccessoryView {
    UIImageView *_imageView;
}




+(id)_cachedDotImage;
+(id)_dotColor;
+(id)labelAccessorySystemImageName;
+(struct CAColorMatrix )_vibrantColorMatrixInput;
+(void)_setCachedDotImage:(id)arg0 ;
-(id)firstBaselineAnchor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)lastBaselineAnchor;
-(struct CGSize )intrinsicContentSize;
-(void)updateWithLegibilitySettings:(id)arg0 labelFont:(id)arg1 ;


@end


#endif