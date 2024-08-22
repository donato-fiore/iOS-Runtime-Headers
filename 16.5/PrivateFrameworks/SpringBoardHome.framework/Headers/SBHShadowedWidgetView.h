// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHSHADOWEDWIDGETVIEW_H
#define SBHSHADOWEDWIDGETVIEW_H

@class UIView;



@interface SBHShadowedWidgetView : UIView {
    BOOL _supportsShadowViewFrameProviding;
}


@property (nonatomic) CGAffineTransform contentTransform; // ivar: _contentTransform
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic, getter=isPerspectiveEnabled) BOOL perspectiveEnabled; // ivar: _perspectiveEnabled
@property (nonatomic) CGAffineTransform shadowSupplementalTransform; // ivar: _shadowSupplementalTransform
@property (retain, nonatomic) UIView *shadowView; // ivar: _shadowView


+(Class)layerClass;
-(id)initWithContentView:(id)arg0 shadowView:(id)arg1 perspectiveEnabled:(BOOL)arg2 ;
-(void)_layoutShadowView;
-(void)_updateShadowView;
-(void)_updateZPositions;
-(void)layoutSubviews;


@end


#endif