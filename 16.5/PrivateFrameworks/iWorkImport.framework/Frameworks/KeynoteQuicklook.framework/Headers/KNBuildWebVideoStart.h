// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNBUILDWEBVIDEOSTART_H
#define KNBUILDWEBVIDEOSTART_H

@class NSString;
@protocol KNAnimationPluginAmbientAnimationStart;


#import "KNBuildAppear.h"

@interface KNBuildWebVideoStart : KNBuildAppear <KNAnimationPluginAmbientAnimationStart>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)startsAmbientAnimation;
+(NSInteger)animationCategory;
+(id)animationFilter;
+(id)animationName;
+(id)localizedMenuString:(NSInteger)arg0 ;
+(id)supportedTypes;
+(id)thumbnailImageNameForType:(NSInteger)arg0 ;
-(void)addAnimationsTo:(id)arg0 context:(id)arg1 ;


@end


#endif