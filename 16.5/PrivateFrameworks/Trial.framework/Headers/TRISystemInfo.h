// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRISYSTEMINFO_H
#define TRISYSTEMINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRISystemInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *aneVersion; // ivar: _aneVersion
@property (retain, nonatomic) NSString *carrierBundleIdentifier; // ivar: _carrierBundleIdentifier
@property (retain, nonatomic) NSString *carrierCountryIsoCode; // ivar: _carrierCountryIsoCode
@property (retain, nonatomic) NSArray *enabledInputModeIdentifiers; // ivar: _enabledInputModeIdentifiers
@property (nonatomic) BOOL hasAne; // ivar: _hasAne
@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled; // ivar: _isDiagnosticsAndUsageEnabled
@property (nonatomic) BOOL isEnrolledInBetaProgram; // ivar: _isEnrolledInBetaProgram
@property (nonatomic) BOOL logUserKeyboardEnabledInputMode; // ivar: _logUserKeyboardEnabledInputMode
@property (nonatomic) BOOL logUserSettingsLanguageCode; // ivar: _logUserSettingsLanguageCode
@property (nonatomic) BOOL logUserSettingsRegionCode; // ivar: _logUserSettingsRegionCode


+(BOOL)_isSeedBuild;
+(BOOL)_sysIsEnrolledInBetaProgram;
+(BOOL)supportsSecureCoding;
+(id)_persistentSystemInfoPath;
+(id)_sysEnabledInputModeIdentifiers;
+(id)createSystemInfoWithFactorProvider:(id)arg0 ;
+(id)info;
+(id)loadSystemInfo;
+(id)systemInfoFromFile:(id)arg0 ;
-(BOOL)save;
-(BOOL)saveToFile:(id)arg0 ;
-(id)initFromSystemWithFactorProvider:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif