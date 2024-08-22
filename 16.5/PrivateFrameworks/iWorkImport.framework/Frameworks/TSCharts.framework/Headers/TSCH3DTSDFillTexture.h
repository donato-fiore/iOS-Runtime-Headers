// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DTSDFILLTEXTURE_H
#define TSCH3DTSDFILLTEXTURE_H

@class TSDFill;


#import "TSCH3DTexture.h"

@interface TSCH3DTSDFillTexture : TSCH3DTexture {
    TSDFill *_fill;
}




+(id)textureWithTSDFill:(id)arg0 ;
-(BOOL)hasCompleteData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)databufferForDataCache:(id)arg0 ;
-(id)initWithTSDFill:(id)arg0 ;


@end


#endif