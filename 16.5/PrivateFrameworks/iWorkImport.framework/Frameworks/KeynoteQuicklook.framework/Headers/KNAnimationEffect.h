// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNANIMATIONEFFECT_H
#define KNANIMATIONEFFECT_H

@class NSString;
@protocol KNAnimationPlugin;

#import <Foundation/Foundation.h>

#import "KNAnimationContext.h"

@interface KNAnimationEffect : NSObject <KNAnimationPlugin>

 {
    KNAnimationContext *mAnimationContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)animationCategory;
+(NSUInteger)directionType;
+(id)animationFilter;
+(id)animationName;
+(id)defaultAttributes;
+(id)localizedMenuString:(NSInteger)arg0 ;
+(id)supportedTypes;
+(id)thumbnailImageNameForType:(NSInteger)arg0 ;
+(id)updateDirectionAttributeValue:(NSInteger)arg0 andCustomTextDirectionValue:(NSUInteger)arg1 turnOffBounce:(BOOL)arg2 turnOffMotionBlur:(BOOL)arg3 forAttributes:(id)arg4 ;
+(void)fillLocalizedDirectionMenu:(id)arg0 forType:(NSInteger)arg1 ;
-(id)initWithAnimationContext:(id)arg0 ;
-(struct CATransform3D )mvpMatrixWithContext:(id)arg0 ;
-(struct CATransform3D )mvpMatrixWithTexture:(id)arg0 andFrame:(struct CGRect )arg1 ;
-(struct CATransform3D )perspectiveMVPMatrixWithContext:(id)arg0 ;
-(struct CATransform3D )perspectiveMVPMatrixWithTexture:(id)arg0 andFrame:(struct CGRect )arg1 ;


@end


#endif