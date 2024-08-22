// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSHADEREFFECTS_H
#define TSCH3DSHADEREFFECTS_H

@class NSMutableDictionary, NSArray, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DShaderEffects : NSObject <NSCopying>

 {
    NSMutableDictionary *_sections;
    NSArray *_cacheList;
}


@property (readonly, nonatomic) NSSet *identifier;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSectionEnabled:(int)arg0 ;
-(BOOL)removeEffectOfClass:(Class)arg0 fromSection:(int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effects;
-(id)init;
-(void)addEffect:(id)arg0 ;
-(void)addEffect:(id)arg0 toSection:(int)arg1 ;
-(void)addEffectOnce:(id)arg0 toSection:(int)arg1 ;
-(void)addEffectsFromArray:(id)arg0 ;
-(void)addEffectsFromArray:(id)arg0 toSection:(int)arg1 ;
-(void)addVariables:(id)arg0 ;
-(void)enumerateEffectsUsingBlock:(id)arg0 ;
-(void)injectGLSLInto:(id)arg0 context:(id)arg1 ;
-(void)injectMetalShaderInto:(id)arg0 context:(id)arg1 ;
-(void)prependEffect:(id)arg0 ;
-(void)prependEffect:(id)arg0 toSection:(int)arg1 ;
-(void)removeEffect:(id)arg0 fromSection:(int)arg1 ;
-(void)reset;
-(void)resetCacheList;
-(void)resetSection:(int)arg0 ;
-(void)resetSection:(int)arg0 toArray:(id)arg1 ;
-(void)resetToArray:(id)arg0 ;
-(void)setEnable:(BOOL)arg0 forSection:(int)arg1 ;


@end


#endif