// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURESCENEELEMENTCONFIGURATION_H
#define SBSYSTEMAPERTURESCENEELEMENTCONFIGURATION_H

@class NSString;
@protocol BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface SBSystemApertureSceneElementConfiguration : NSObject <BSDescriptionProviding, NSCopying>



@property (nonatomic) BOOL allowsSceneReactivation; // ivar: _allowsSceneReactivation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL entersBackgroundWhenBacklightIsOff; // ivar: _entersBackgroundWhenBacklightIsOff
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumHeight; // ivar: _maximumHeight
@property (nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible; // ivar: _minimalPresentationPossible
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif