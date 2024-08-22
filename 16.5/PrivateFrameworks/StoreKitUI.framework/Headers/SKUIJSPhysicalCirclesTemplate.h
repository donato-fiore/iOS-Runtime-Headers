// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIJSPHYSICALCIRCLESTEMPLATE_H
#define SKUIJSPHYSICALCIRCLESTEMPLATE_H

@class IKJSObject;
@protocol SKUIJSPhysicalCirclesTemplate;


#import "SKUIPhysicalCirclesTemplateDOMFeature.h"

@interface SKUIJSPhysicalCirclesTemplate : IKJSObject <SKUIJSPhysicalCirclesTemplate>

 {
    SKUIPhysicalCirclesTemplateDOMFeature *_feature;
}




-(id)initWithAppContext:(id)arg0 DOMFeature:(id)arg1 ;
-(void)_performAnimationWithType:(NSInteger)arg0 callback:(id)arg1 ;
-(void)afterDOMUpdate:(id)arg0 ;
-(void)performFinishAnimation:(id)arg0 ;
-(void)performResetAnimation:(id)arg0 ;


@end


#endif