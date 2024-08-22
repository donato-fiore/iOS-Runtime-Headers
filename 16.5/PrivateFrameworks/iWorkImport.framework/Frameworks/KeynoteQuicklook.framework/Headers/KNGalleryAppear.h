// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNGALLERYAPPEAR_H
#define KNGALLERYAPPEAR_H

@class NSString;
@protocol KNBuildBasicContentAnimator;


#import "KNAnimationEffect.h"

@interface KNGalleryAppear : KNAnimationEffect <KNBuildBasicContentAnimator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)animationCategory;
+(NSInteger)rendererTypeForAnimationContext:(id)arg0 ;
+(id)animationFilter;
+(id)animationName;
+(id)defaultAttributes;
+(id)localizedMenuString:(NSInteger)arg0 ;
+(id)supportedTypes;
+(id)thumbnailImageNameForType:(NSInteger)arg0 ;
-(void)addAnimationsTo:(id)arg0 context:(id)arg1 ;


@end


#endif