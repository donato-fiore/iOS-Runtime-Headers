// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DLIGHTSHADEREFFECTSTATE_H
#define TSCH3DLIGHTSHADEREFFECTSTATE_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DLightShaderEffectState : NSObject <NSCopying>

 {
    NSMutableArray *_lights;
    LightingPackageShaderEffectState _packageState;
}




+(id)effectState;
-(*void)packageState;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)removeAllObjects;
-(void)setPackageState:(*void)arg0 ;


@end


#endif