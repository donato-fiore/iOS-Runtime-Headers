// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICARPLAYAPPLICATIONSCENESETTINGS_H
#define UICARPLAYAPPLICATIONSCENESETTINGS_H

@class NSString;
@protocol UICarPlayApplicationSceneSettings;


#import "UIApplicationSceneSettings.h"

@interface UICarPlayApplicationSceneSettings : UIApplicationSceneSettings <UICarPlayApplicationSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableFiveRowKeyboards;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif