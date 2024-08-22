// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPICKERVIEWSTYLE_IOS_H
#define _UIPICKERVIEWSTYLE_IOS_H

@class UIPickerViewStyle;



@interface _UIPickerViewStyle_iOS : UIPickerViewStyle



-(BOOL)sizeIsValid:(struct CGSize )arg0 ;
-(CGFloat)defaultRowHeightForSize:(struct CGSize )arg0 ;
-(CGFloat)horizontalPaddingForCenterHighlightView;
-(CGFloat)horizontalPaddingForContents;
-(CGFloat)paddingAroundWheels;
-(CGFloat)paddingBetweenWheels;
-(id)createCenterHighlightView;
-(struct CATransform3D )perspectiveTransform;
-(struct CGSize )defaultSizeForTraitCollection:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 forTraitCollection:(id)arg1 ;
-(void)configureMaskGradientLayer:(id)arg0 ;


@end


#endif