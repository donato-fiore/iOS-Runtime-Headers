// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOMPOSITINGEFFECTVIEWENTRY_H
#define _UICOMPOSITINGEFFECTVIEWENTRY_H

@class UIVisualEffectViewEntry, NSString;



@interface _UICompositingEffectViewEntry : UIVisualEffectViewEntry

@property (copy, nonatomic) NSString *filterType; // ivar: _filterType


-(BOOL)canTransitionToEffect:(id)arg0 ;
-(BOOL)isSameTypeOfEffect:(id)arg0 ;
-(id)description;
-(void)addEffectToView:(id)arg0 ;
-(void)removeEffectFromView:(id)arg0 ;


@end


#endif