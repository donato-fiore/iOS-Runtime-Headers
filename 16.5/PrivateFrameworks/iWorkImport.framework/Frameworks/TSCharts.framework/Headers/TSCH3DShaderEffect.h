// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSHADEREFFECT_H
#define TSCH3DSHADEREFFECT_H

@protocol TSCH3DShaderEffectStateInfo;

#import <Foundation/Foundation.h>


@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>





+(Class)stateClass;
+(id)effect;
+(id)stateSharingID;
-(BOOL)alwaysUploadData;
-(BOOL)isEqual:(id)arg0 ;
-(Class)stateClass;
-(NSUInteger)hash;
-(id)stateSharingID;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)injectGLSLInto:(id)arg0 context:(id)arg1 ;
-(void)injectMetalShaderInto:(id)arg0 context:(id)arg1 ;
-(void)updateState:(id)arg0 effectsStates:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 updateCurrentStates:(id)arg2 ;


@end


#endif