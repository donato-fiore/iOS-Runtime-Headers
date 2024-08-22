// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIJSDEVICE_H
#define VUIJSDEVICE_H

@class NSString;
@protocol VUIJSDevice;


#import "VUIJSObject.h"

@interface VUIJSDevice : VUIJSObject <VUIJSDevice>

 {
    id *_networkPropertiesChangedToken;
}


@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) BOOL isInAirplaneMode;
@property (readonly, nonatomic) BOOL isInRetailDemoMode;
@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isSeedBuild;
@property (readonly, nonatomic) BOOL isUI;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *networkType;
@property (readonly, nonatomic) NSString *osBuildNumber;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) BOOL runningAnInternalBuild;
@property (readonly, nonatomic) BOOL supportsSharedWatchPostPlayBinge;
@property (readonly, nonatomic) NSString *systemVersion;


+(id)getMobileGestaltString:(struct __CFString *)arg0 ;
-(id)initWithAppContext:(id)arg0 ;
-(void)dealloc;


@end


#endif