// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPLATTERSOFTSHADOWVIEW_H
#define _UIPLATTERSOFTSHADOWVIEW_H



#import "UIView.h"
#import "_UIPlatterShadowView.h"
#import "UIBezierPath.h"

@interface _UIPlatterSoftShadowView : UIView

@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) _UIPlatterShadowView *diffuseShadowView; // ivar: _diffuseShadowView
@property (nonatomic) BOOL needsPunchOut; // ivar: _needsPunchOut
@property (readonly, nonatomic) _UIPlatterShadowView *rimShadowView; // ivar: _rimShadowView
@property (copy, nonatomic) UIBezierPath *shadowPath; // ivar: _shadowPath


-(id)initWithFrame:(struct CGRect )arg0 shadowPath:(id)arg1 ;
-(void)_updateForShadowPath;


@end


#endif