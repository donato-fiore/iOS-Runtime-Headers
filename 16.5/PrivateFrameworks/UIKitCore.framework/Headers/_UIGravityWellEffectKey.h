// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIGRAVITYWELLEFFECTKEY_H
#define _UIGRAVITYWELLEFFECTKEY_H

@class NSString;
@protocol _UIContentEffectKey;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIGravityWellEffectKey : NSObject <_UIContentEffectKey>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint point; // ivar: _point
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif