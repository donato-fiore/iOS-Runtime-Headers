// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARSTARKVISUALSTYLE_H
#define _UINAVIGATIONBARSTARKVISUALSTYLE_H

@class UINavigationBarVisualStyle;



@interface _UINavigationBarStarkVisualStyle : UINavigationBarVisualStyle



-(BOOL)shouldForceLegacyLeftBackTitleMarginForView:(id)arg0 withCustomBackButtonBackground:(id)arg1 useAdditionalLetterpressPadding:(BOOL)arg2 ;
-(CGFloat)backIndicatorBottomMargin;
-(CGFloat)buttonHeight;
-(CGFloat)horizontalMarginAdjustment;
-(CGFloat)imageButtonMarginInNavigationBar:(id)arg0 ;
-(CGFloat)leftBackTitleMargin;
-(CGFloat)leftTitleMargin;
-(CGFloat)textButtonMarginInNavigationBar:(id)arg0 ;
-(CGFloat)topMargin;
-(CGFloat)topTitleMargin;
-(NSInteger)navigationBar:(id)arg0 metricsForOrientation:(NSInteger)arg1 hasPrompt:(BOOL)arg2 ;


@end


#endif