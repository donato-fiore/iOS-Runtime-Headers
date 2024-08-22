// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TIPREFERENCE_H
#define _TIPREFERENCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TIPreference : NSObject

@property (readonly, nonatomic) NSString *analyzedAtKey;
@property (readonly, nonatomic) NSString *approxDateOfBuildInstallKey; // ivar: _approxDateOfBuildInstallKey
@property (readonly, nonatomic) NSString *buildAtChangeKey;
@property (readonly, nonatomic) NSString *buildAtLastAnalysisKey; // ivar: _buildAtLastAnalysisKey
@property (readonly, nonatomic) NSString *changedAtKey;
@property (retain, nonatomic) id *currentValue; // ivar: _currentValue
@property (retain, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *fallbackKey; // ivar: _fallbackKey
@property (nonatomic) BOOL isAnalyzed; // ivar: _isAnalyzed
@property (nonatomic) BOOL isCloudSetting; // ivar: _isCloudSetting
@property (nonatomic) BOOL isWatchSync; // ivar: _isWatchSync
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSString *previousValueKey;


+(id)preferenceWithKey:(id)arg0 domain:(id)arg1 defaultValue:(id)arg2 ;
+(id)preferenceWithKey:(id)arg0 domain:(id)arg1 defaultValue:(id)arg2 fallbackKey:(id)arg3 ;
+(id)preferenceWithKey:(id)arg0 domain:(id)arg1 defaultValue:(id)arg2 fallbackKey:(id)arg3 isAnalyzed:(BOOL)arg4 ;
-(id)approxDateOfBuildInstall;
-(id)buildAtLastAnalysis;


@end


#endif