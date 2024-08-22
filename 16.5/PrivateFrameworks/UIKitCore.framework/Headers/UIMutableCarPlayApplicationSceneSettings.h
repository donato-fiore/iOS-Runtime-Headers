// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMUTABLECARPLAYAPPLICATIONSCENESETTINGS_H
#define UIMUTABLECARPLAYAPPLICATIONSCENESETTINGS_H

@class NSString;
@protocol UICarPlayApplicationSceneSettings;


#import "UIMutableApplicationSceneSettings.h"

@interface UIMutableCarPlayApplicationSceneSettings : UIMutableApplicationSceneSettings <UICarPlayApplicationSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableFiveRowKeyboards;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif