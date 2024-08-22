// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDGLSHADERQUALIFIERPOINT3D_H
#define TSDGLSHADERQUALIFIERPOINT3D_H



#import "TSDGLShaderQualifier.h"

@interface TSDGLShaderQualifierPoint3D : TSDGLShaderQualifier

@property (readonly, nonatomic) ? GLPoint3DValue; // ivar: _GLPoint3DValue
@property (nonatomic) ? proposedGLPoint3DValue; // ivar: _proposedGLPoint3DValue


-(id)description;
-(void)setGLUniformWithShader:(id)arg0 ;


@end


#endif