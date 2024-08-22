// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIRESIZABLEIMAGE_H
#define _UIRESIZABLEIMAGE_H



#import "UIImage.h"

@interface _UIResizableImage : UIImage {
    UIEdgeInsets _capInsets;
    UIEdgeInsets _subimageInsets;
    ? _rImageFlags;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_isResizable;
-(BOOL)_isSubimage;
-(BOOL)_isTiledWhenStretchedToSize:(struct CGSize )arg0 ;
-(BOOL)_suppressesAccessibilityHairlineThickening;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)resizingMode;
-(id)_resizableImageWithCapMask:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 capInsets:(struct UIEdgeInsets )arg1 ;
-(struct CGRect )_contentRectInPixels;
-(struct CGRect )_contentRectInPixelsApplyingInsets:(struct UIEdgeInsets )arg0 emptySizeFallback:(id)arg1 ;
-(struct CGRect )_contentStretchInPixels;
-(struct UIEdgeInsets )_subimageInsets;
-(struct UIEdgeInsets )capInsets;
-(void)_configureImage:(id)arg0 assumePreconfigured:(BOOL)arg1 ;
-(void)_setAlwaysStretches:(BOOL)arg0 ;
-(void)_setCapInsets:(struct UIEdgeInsets )arg0 ;
-(void)_setSubimageInsets:(struct UIEdgeInsets )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif