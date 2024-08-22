// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC3VFX11VFXRENDERER_H
#define _TTC3VFX11VFXRENDERER_H

@class UIColor;
@protocol MTLTexture;

#import <Foundation/Foundation.h>

#import "_TtC3VFX9VFXEffect.h"
#import "_TtC3VFX9VFXCamera.h"
#import "_TtC3VFX8VFXScene.h"

@interface _TtC3VFX11VFXRenderer : NSObject {
    ? renderer;
    ? performMetalCaptureDuringSnapshot;
}


@property (nonatomic) BOOL additiveWritesToAlpha;
@property (nonatomic, retain) UIColor *backgroundColor; // ivar: backgroundColor
@property (nonatomic, retain) NSObject<MTLTexture> *depthTexture; // ivar: depthTexture
@property (nonatomic, retain) _TtC3VFX9VFXEffect *effect; // ivar: effect
@property (nonatomic, retain) _TtC3VFX9VFXCamera *pointOfView; // ivar: pointOfView
@property (nonatomic, retain) _TtC3VFX8VFXScene *scene; // ivar: scene
@property (nonatomic, retain) NSObject<MTLTexture> *texture; // ivar: texture


-(id)init;
-(id)initWithCommandQueue:(id)arg0 ;
-(id)snapshotImageWithSize:(struct CGSize )arg0 deltaTime:(CGFloat)arg1 ;
-(id)snapshotWithSize:(struct CGSize )arg0 deltaTime:(CGFloat)arg1 ;
-(void)encodeWithCommandBuffer:(id)arg0 ;
-(void)finalizeEncoding;


@end


#endif