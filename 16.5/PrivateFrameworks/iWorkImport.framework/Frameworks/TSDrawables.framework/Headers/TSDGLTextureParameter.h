// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDGLTEXTUREPARAMETER_H
#define TSDGLTEXTUREPARAMETER_H


#import <Foundation/Foundation.h>


@interface TSDGLTextureParameter : NSObject {
    unsigned int _pname;
    NSUInteger _paramCount;
    *int _intData;
    *float _floatData;
    unsigned int _target;
}




+(id)stringWithCurrentTextureParameters;
+(id)textureParameterWithPName:(unsigned int)arg0 floatParameter:(float)arg1 ;
+(id)textureParameterWithPName:(unsigned int)arg0 floatParameters:(*float)arg1 count:(NSUInteger)arg2 ;
+(id)textureParameterWithPName:(unsigned int)arg0 floatParameters:(*float)arg1 count:(NSUInteger)arg2 target:(unsigned int)arg3 ;
+(id)textureParameterWithPName:(unsigned int)arg0 integerParameter:(int)arg1 ;
+(id)textureParameterWithPName:(unsigned int)arg0 integerParameters:(*int)arg1 count:(NSUInteger)arg2 ;
+(id)textureParameterWithPName:(unsigned int)arg0 integerParameters:(*int)arg1 count:(NSUInteger)arg2 target:(unsigned int)arg3 ;
-(id)initWithPName:(unsigned int)arg0 paramCount:(NSUInteger)arg1 intData:(*int)arg2 floatData:(*float)arg3 target:(unsigned int)arg4 ;
-(void)dealloc;
-(void)setGLTextureParameter;


@end


#endif