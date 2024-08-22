// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DPREFILTEREDLINEOUTPUTCOLORSHADEREFFECT_H
#define TSCH3DPREFILTEREDLINEOUTPUTCOLORSHADEREFFECT_H



#import "TSCH3DShaderEffect.h"

@interface TSCH3DPrefilteredLineOutputColorShaderEffect : TSCH3DShaderEffect



+(id)variablePrefilterStrokeColor;
-(id)variablePrefilterStrokeColor;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif