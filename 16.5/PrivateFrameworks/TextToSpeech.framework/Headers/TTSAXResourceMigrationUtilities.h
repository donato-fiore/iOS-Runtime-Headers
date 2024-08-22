// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSAXRESOURCEMIGRATIONUTILITIES_H
#define TTSAXRESOURCEMIGRATIONUTILITIES_H

@class AXAssetsService, NSDictionary;

#import <Foundation/Foundation.h>


@interface TTSAXResourceMigrationUtilities : NSObject

@property (retain, nonatomic) AXAssetsService *assetsService; // ivar: _assetsService
@property (nonatomic) BOOL isMigrationComplete; // ivar: _isMigrationComplete
@property (retain, nonatomic) NSDictionary *obsoleteVoicesWithReplacements; // ivar: _obsoleteVoicesWithReplacements


+(id)sharedInstance;
-(BOOL)resourceNeedsMigration:(id)arg0 ;
-(id)_readIsMigrationCompleteFromPreferences;
-(id)_readVoiceIdentifiersToMigrateFromPreferences;
-(id)_remapGenderedSiriVoiceIdentifiers:(id)arg0 ;
-(id)convertIdentifierIfNeeded:(id)arg0 ;
-(id)init;
-(id)legacyIdentifierForUpdatedIdentifierDuringMigration:(id)arg0 ;
-(id)updatedIdentifierForLegacyIdentifier:(id)arg0 withLanguageCode:(id)arg1 ;
-(void)deleteCompactResourceIfNeededForIdentifier:(id)arg0 ;
-(void)downloadCompactResourceIfNeededForIdentifier:(id)arg0 ;
-(void)resourceCompletedMigration:(id)arg0 ;
-(void)restartMigrationIfNeeded;
-(void)writeIsMigrationCompleteToPreferences:(id)arg0 ;
-(void)writeVoiceIdentifiersToMigrateToPreferences:(id)arg0 ;


@end


#endif