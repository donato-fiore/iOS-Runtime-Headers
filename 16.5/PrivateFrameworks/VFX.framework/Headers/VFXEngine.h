// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VFXENGINE_H
#define VFXENGINE_H


#import <Foundation/Foundation.h>

#import "_TtC3VFX9VFXCamera.h"
#import "_TtC3VFX8VFXScene.h"

@interface VFXEngine : NSObject {
    ? externalDrawCallQuery;
    ? transientDrawCall;
}


@property (nonatomic, readonly) float deltaTime;
@property (nonatomic, readonly) *void opaqueECS;
@property (nonatomic, retain) _TtC3VFX9VFXCamera *pointOfView; // ivar: pointOfView
@property (nonatomic, retain) _TtC3VFX8VFXScene *scene; // ivar: scene


-(NSInteger)drawCallCount;
-(id)init;
-(id)recycleBuffersGetCompletion:(SEL)arg0 ;
-(void)enumerateDrawCall:(id)arg0 ;
-(void)updateWithDeltaTime:(CGFloat)arg0 ;


@end


#endif