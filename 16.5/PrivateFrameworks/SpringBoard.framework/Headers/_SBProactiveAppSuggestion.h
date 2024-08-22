// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBPROACTIVEAPPSUGGESTION_H
#define _SBPROACTIVEAPPSUGGESTION_H

@class ATXProactiveSuggestion, NSUUID;


#import "SBBestAppSuggestion.h"

@interface _SBProactiveAppSuggestion : SBBestAppSuggestion

@property (readonly, nonatomic) ATXProactiveSuggestion *appSuggestion; // ivar: _appSuggestion
@property (readonly, nonatomic) NSUUID *resultUUID;


-(BOOL)isBluetoothAudioPrediction;
-(BOOL)isBluetoothPrediction;
-(BOOL)isCarPlayPrediction;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFirstWakePrediction;
-(BOOL)isHeadphonesPrediction;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isPrediction;
-(NSUInteger)hash;
-(id)bundleIdentifier;
-(id)initWithAppSuggestion:(id)arg0 ;


@end


#endif