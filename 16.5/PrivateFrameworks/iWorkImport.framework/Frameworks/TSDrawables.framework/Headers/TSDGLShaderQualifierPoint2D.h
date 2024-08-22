// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDGLSHADERQUALIFIERPOINT2D_H
#define TSDGLSHADERQUALIFIERPOINT2D_H



#import "TSDGLShaderQualifier.h"

@interface TSDGLShaderQualifierPoint2D : TSDGLShaderQualifier

@property (readonly, nonatomic) ? GLPoint2DValue; // ivar: _GLPoint2DValue
@property (nonatomic) ? proposedGLPoint2DValue; // ivar: _proposedGLPoint2DValue


-(id)description;
-(void)setGLUniformWithShader:(id)arg0 ;


@end


#endif