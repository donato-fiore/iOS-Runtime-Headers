// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNANIMATIONPLUGINCONTEXT_H
#define KNANIMATIONPLUGINCONTEXT_H

@class TSDGLState, TSDAnimationSet, NSDictionary, NSString, NSArray, TSDMetalContext, TSDMetalTextureRenderer, TSDRep;
@protocol KNAnimationPluginContext;

#import <Foundation/Foundation.h>

#import "KNAnimatedBuild.h"
#import "KNAnimationRandomGenerator.h"

@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext>



@property (retain, nonatomic) TSDGLState *GLState; // ivar: _GLState
@property (weak, nonatomic) KNAnimatedBuild *animatedBuild; // ivar: _animatedBuild
@property (nonatomic) CGRect animationFrame; // ivar: _animationFrame
@property (retain, nonatomic) TSDAnimationSet *animationSet; // ivar: _animationSet
@property (nonatomic) CGRect boundingRect; // ivar: _boundingRect
@property (nonatomic) CGRect boundingRectOnCanvas; // ivar: _boundingRectOnCanvas
@property (weak, nonatomic) NSDictionary *buildAttributes; // ivar: _buildAttributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger direction; // ivar: _direction
@property (nonatomic) CGRect drawableFrame; // ivar: _drawableFrame
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBuild;
@property (readonly, nonatomic) BOOL isFrameRenderer;
@property (readonly, nonatomic) BOOL isMagicMove;
@property (readonly, nonatomic) BOOL isMetalRenderer;
@property (nonatomic) BOOL isMotionBlurred; // ivar: _isMotionBlurred
@property (nonatomic) BOOL isMovieExport; // ivar: _isMovieExport
@property (readonly, nonatomic) BOOL isOpenGLRenderer;
@property (nonatomic) BOOL isPreview; // ivar: _isPreview
@property (nonatomic) BOOL isSceneRenderingEnabled; // ivar: _isSceneRenderingEnabled
@property (readonly, nonatomic) BOOL isTransition;
@property (nonatomic) BOOL isWarmingUp; // ivar: _isWarmingUp
@property (weak, nonatomic) NSArray *magicMoveMatches; // ivar: _magicMoveMatches
@property (retain, nonatomic) TSDMetalContext *metalContext; // ivar: _metalContext
@property (retain, nonatomic) TSDMetalTextureRenderer *metalTextureRenderer; // ivar: _metalTextureRenderer
@property (nonatomic) CGFloat percent; // ivar: _percent
@property (retain, nonatomic) KNAnimationRandomGenerator *randomGenerator; // ivar: _randomGenerator
@property (nonatomic) NSInteger rendererType; // ivar: _rendererType
@property (weak, nonatomic) TSDRep *rep; // ivar: _rep
@property (retain, nonatomic) NSArray *scaledTextures; // ivar: _scaledTextures
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tags; // ivar: _tags
@property (retain, nonatomic) NSArray *textures; // ivar: _textures
@property (weak, nonatomic) NSDictionary *transitionAttributes; // ivar: _transitionAttributes
@property (readonly, nonatomic) BOOL willRenderWithLiveTextureSources;


-(id)init;


@end


#endif