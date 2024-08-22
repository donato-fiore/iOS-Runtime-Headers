// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOMPOUNDEFFECT_H
#define _UICOMPOUNDEFFECT_H

@class NSArray;


#import "UIVisualEffect.h"

@interface _UICompoundEffect : UIVisualEffect {
    NSArray *_effects;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_expectedUsage;
-(NSUInteger)hash;
-(id)_allEffects;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEffects:(id)arg0 ;
-(void)_enumerateEffects:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif