// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTUTILITIES_H
#define VTUTILITIES_H


#import <Foundation/Foundation.h>


@interface VTUtilities : NSObject



+(BOOL)VTIsHorseman;
+(BOOL)isAlwaysOn;
+(BOOL)isIOS;
+(BOOL)isInternalInstall;
+(BOOL)isNano;
+(BOOL)isNonUI;
+(BOOL)isTorpedo;
+(BOOL)supportBargeIn;
+(BOOL)supportExternalPhraseSpotter;
+(BOOL)supportPremiumAssets;
+(BOOL)supportRemoteDarwinVoiceTrigger;
+(BOOL)supportTTS;
+(CGFloat)VTMachAbsoluteTimeGetTimeInterval:(NSUInteger)arg0 ;
+(CGFloat)_round:(CGFloat)arg0 withPlaces:(int)arg1 ;
+(CGFloat)systemUpTime;
+(NSUInteger)deviceCategoryForDeviceProductType:(id)arg0 ;
+(NSUInteger)horsemanDeviceType;
+(id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg0 ;
+(id)deviceProductType;
+(id)deviceProductVersion;
+(id)deviceSoftwareVersion;
+(id)getAssetHashFromConfigPath:(id)arg0 ;
+(id)sanitizeEventInfoForLogging:(id)arg0 ;
+(void)forceReload;


@end


#endif