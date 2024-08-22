// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSPOTLIGHTSHADEREFFECT_H
#define TSCH3DSPOTLIGHTSHADEREFFECT_H



#import "TSCH3DLightShaderEffect.h"

@interface TSCH3DSpotLightShaderEffect : TSCH3DLightShaderEffect



+(id)variableSpotLightLightIntensities;
-(id)variableSpotLightLightIntensities;
-(id)variables;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;
-(void)uploadSpotLightWithUploader:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif