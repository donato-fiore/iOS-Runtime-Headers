// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAXSDSETTINGS_H
#define WFAXSDSETTINGS_H


#import <Foundation/Foundation.h>


@interface WFAXSDSettings : NSObject



+(BOOL)isApplianceSoundDetectionType:(id)arg0 ;
+(BOOL)soundDetectionEnabled;
+(id)allBMApplianceTypes;
+(id)bmTypeForAXSDSoundDetectionType:(id)arg0 ;
+(id)localizedNameForSoundDetectionType:(id)arg0 ;
+(id)mapLocalizedSupportedSoundDetectionTypesUsingBlock:(id)arg0 ;


@end


#endif