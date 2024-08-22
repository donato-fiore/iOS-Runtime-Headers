// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTSPEAKERIDUTILITIES_H
#define VTSPEAKERIDUTILITIES_H


#import <Foundation/Foundation.h>


@interface VTSpeakerIdUtilities : NSObject



+(BOOL)deleteExistingSATModelForLanguageCode:(id)arg0 ;
+(id)_getAssetHashFromConfigPath:(id)arg0 ;
+(id)createSATDirectoriesForType:(NSUInteger)arg0 forLanguageCode:(id)arg1 ;
+(id)getExplicitEnrollmentUtterancesForType:(NSUInteger)arg0 forLanguageCode:(id)arg1 ;
+(id)getImplicitEnrollmentUtterancesPriorTo:(id)arg0 forType:(NSUInteger)arg1 forLanguageCode:(id)arg2 ;
+(id)getProfileVersionFilePathForLanguageCode:(id)arg0 ;
+(id)getSATAudioDirectoryForType:(NSUInteger)arg0 forLanguageCode:(id)arg1 ;
+(id)getSATDirectoryForLanguageCode:(id)arg0 ;
+(id)getSATDirectoryForModelType:(NSUInteger)arg0 forLanguageCode:(id)arg1 ;
+(id)getSATModelDirectoryForType:(NSUInteger)arg0 forLanguageCode:(id)arg1 ;
+(id)getSortedEnrollmentUtterancesForType:(NSUInteger)arg0 forLanguageCode:(id)arg1 ;
+(id)getSortedImplicitEnrollmentUtterancesForType:(NSUInteger)arg0 forLanguageCode:(id)arg1 ;
+(id)getSpeakerModelPathForType:(NSUInteger)arg0 withLanguageCode:(id)arg1 withConfigPath:(id)arg2 createDirectory:(BOOL)arg3 ;
+(id)stringForVTSpIdType:(NSUInteger)arg0 ;
+(id)timeStampWithSaltGrain;


@end


#endif