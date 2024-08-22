// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC3VFX8VFXSCENE_H
#define _TTC3VFX8VFXSCENE_H

@class NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface _TtC3VFX8VFXScene : NSObject {
    ? entityManager;
    ? loadOptions;
    ? loader;
    ? effects;
    ? __version;
    ? isInsideRE;
    ? isREAssetScene;
    ? hasSharedEntityManager;
    ? metalBinaryArchiveURLs;
    ? recordedMetalBinaryArchiveURL;
}


@property (nonatomic) BOOL allowsCameraControl;
@property (nonatomic, readonly) NSArray *bindings;
@property (nonatomic, copy) NSArray *effects;
@property (nonatomic) NSUInteger internalPixelFormat; // ivar: internalPixelFormat
@property (nonatomic) char internalPixelFormatDepth; // ivar: internalPixelFormatDepth
@property (nonatomic) BOOL isFrozen;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic, copy) NSArray *metalBinaryArchiveURLs;
@property (nonatomic, copy) NSURL *recordedMetalBinaryArchiveURL;
@property (nonatomic) BOOL showStatistics;
@property (nonatomic) float timeScale;
@property (nonatomic) BOOL useGammaBlending; // ivar: useGammaBlending
@property (nonatomic, readonly) NSInteger version;


+(id)builtinEffectIdentifiers;
+(id)vfxAssetsFrameworkBundle;
+(id)vfxLibraryURLFor:(id)arg0 ;
+(void)applicationDidEnterBackground;
+(void)applicationWillEnterForeground;
+(void)setBuiltinEffectIdentifiers:(id)arg0 ;
-(BOOL)isEnabled:(id)arg0 ;
-(id)addEffectFrom:(id)arg0 error:(*id)arg1 ;
-(id)addEffectFromTemplate:(id)arg0 ;
-(id)bindingOf:(id)arg0 named:(id)arg1 ;
-(id)firstBindingWithName:(id)arg0 ;
-(id)init;
-(id)initForEngineNamed:(id)arg0 ;
-(id)initWithContentsOf:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOf:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(id)parameterOf:(id)arg0 named:(id)arg1 ;
-(id)valueAtPath:(id)arg0 ;
-(void)dealloc;
-(void)performTransaction:(id)arg0 ;
-(void)prepare;
-(void)removeAllEffects;
-(void)removeEffect:(id)arg0 ;
-(void)restart;
-(void)setEnabled:(id)arg0 enabled:(BOOL)arg1 ;
-(void)setParameterOf:(id)arg0 named:(id)arg1 ;
-(void)setValue:(id)arg0 atPath:(id)arg1 ;
-(void)setupForSCNRuntime:(id)arg0 ;
-(void)updateWithDeltaTime:(CGFloat)arg0 ;
-(void)withPointerToParameterOf:(id)arg0 named:(id)arg1 block:(id)arg2 ;
-(void)withPointerToValueAtPath:(id)arg0 block:(id)arg1 ;


@end


#endif