// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINTERFACEACTIONREPRESENTATIONVIEWSPRINGLOADEDEFFECT_H
#define UIINTERFACEACTIONREPRESENTATIONVIEWSPRINGLOADEDEFFECT_H

@class NSString;
@protocol UISpringLoadedInteractionEffect;

#import <Foundation/Foundation.h>


@interface UIInterfaceActionRepresentationViewSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect>

 {
    id<UISpringLoadedInteractionEffect> *_blinkEffect;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;


@end


#endif