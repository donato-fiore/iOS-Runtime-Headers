// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DGLES2VERSION_H
#define TSCH3DGLES2VERSION_H



#import "TSCH3DGLVersion.h"

@interface TSCH3DGLES2Version : TSCH3DGLVersion



+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)version;
-(BOOL)deprecatesLuminanceAlpha;
-(BOOL)supportsClipDistances;
-(id)additionalConclusionsForShaderType:(struct TSCH3DShaderType )arg0 ;
-(id)additionalGlobalsForShaderType:(struct TSCH3DShaderType )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)preprocessorDefinitions;
-(id)vertexAttributeQualifierForShaderType:(struct TSCH3DShaderType )arg0 ;
-(id)vertexVaryingQualifierForShaderType:(struct TSCH3DShaderType )arg0 ;
-(void)addCompatibilityFunctionsForShaderProgram:(id)arg0 ;


@end


#endif