// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBARBACKGROUNDLAYOUTMODERN_H
#define _UIBARBACKGROUNDLAYOUTMODERN_H

@class UIBarBackgroundLayout;


#import "_UIBarBackgroundAppearanceData.h"

@interface _UIBarBackgroundLayoutModern : UIBarBackgroundLayout {
    BOOL _backgroundsAreSame;
}


@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData1; // ivar: _backgroundData1
@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData2; // ivar: _backgroundData2


-(BOOL)bg1HasShadow;
-(BOOL)bg2Enabled;
-(BOOL)bg2HasShadow;
-(BOOL)shouldUseExplicitGeometry;
-(CGFloat)bg1Alpha;
-(CGFloat)bg1ShadowAlpha;
-(CGFloat)bg2Alpha;
-(CGFloat)bg2ShadowAlpha;
-(NSInteger)bg1ImageMode;
-(NSInteger)bg2ImageMode;
-(id)bg1Color;
-(id)bg1Effects;
-(id)bg1Image;
-(id)bg1ShadowColor;
-(id)bg1ShadowEffect;
-(id)bg1ShadowImage;
-(id)bg1ShadowTint;
-(id)bg2Color;
-(id)bg2Effects;
-(id)bg2Image;
-(id)bg2ShadowColor;
-(id)bg2ShadowEffect;
-(id)bg2ShadowImage;
-(id)bg2ShadowTint;
-(id)initWithLayout:(id)arg0 ;
-(void)describeInto:(id)arg0 ;


@end


#endif