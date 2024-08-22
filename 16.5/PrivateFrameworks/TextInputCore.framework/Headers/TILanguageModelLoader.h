// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TILANGUAGEMODELLOADER_H
#define TILANGUAGEMODELLOADER_H

@class NSString, NSArray, NSDictionary;
@protocol _ICContactFetchingDelegate;

#import <Foundation/Foundation.h>

#import "TILanguageModelAdaptationContext.h"
#import "TIInputMode.h"

@interface TILanguageModelLoader : NSObject

@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // ivar: _adaptationContext
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (nonatomic) NSObject<_ICContactFetchingDelegate> *contactFetchingDelegate; // ivar: _contactFetchingDelegate
@property (readonly, nonatomic) NSArray *customResourcePaths; // ivar: _customResourcePaths
@property (readonly, nonatomic) NSString *dynamicResourcePath; // ivar: _dynamicResourcePath
@property (readonly, nonatomic) TIInputMode *inputMode; // ivar: _inputMode
@property (readonly, nonatomic) NSArray *mobileAssets; // ivar: _mobileAssets
@property (nonatomic) shared_ptr<KB::LanguageModel> model; // ivar: _model
@property (readonly, nonatomic, getter=isMultiLingualModeEnabled) BOOL multiLingualModeEnabled; // ivar: _multiLingualModeEnabled
@property (retain, nonatomic) NSString *recipientIdentifier; // ivar: _recipientIdentifier
@property (readonly, nonatomic) NSArray *staticResourcePaths;
@property (retain, nonatomic) NSDictionary *trialParameters; // ivar: _trialParameters
@property (readonly, nonatomic) BOOL usesLinguisticContext; // ivar: _usesLinguisticContext


+(id)knownClients;
+(id)recipientRecords;
+(id)sharedLanguageModelLoaderForInputMode:(id)arg0 customResourcePaths:(id)arg1 dynamicResourcePath:(id)arg2 mobileAssets:(id)arg3 usesLinguisticContext:(BOOL)arg4 isMultiLingualModeEnabled:(BOOL)arg5 trialParameters:(id)arg6 ;
+(struct shared_ptr<KB::LanguageModel> )modelForLocale:(id)arg0 adaptationContext:(id)arg1 staticResourcePaths:(id)arg2 dynamicResourcePath:(id)arg3 isMultiLingualModeEnabled:(BOOL)arg4 trialParameters:(id)arg5 ;
+(struct shared_ptr<KB::LanguageModel> )stubForLocale:(id)arg0 adaptationContext:(id)arg1 staticResourcePaths:(id)arg2 dynamicResourcePath:(id)arg3 isMultiLingualModeEnabled:(BOOL)arg4 ;
+(void)clearDynamicLearningCaches;
+(void)clearDynamicResourcesAtPath:(id)arg0 ;
+(void)contactStoreDidChange:(id)arg0 ;
+(void)dropResourcesExcludingInputModes:(id)arg0 flushCache:(BOOL)arg1 ;
+(void)flushDynamicLearningCaches;
+(void)flushDynamicResourcesForInputModes:(id)arg0 ;
+(void)performMaintenance;
+(void)resetClientAndRecipientCache;
+(void)setAsynchronousLoad:(BOOL)arg0 ;
+(void)setOfflineTrainingEnabled:(BOOL)arg0 ;
+(void)startObservingContactStore;
+(void)unwireAllLanguageModelMemory;
+(void)wireAllLanguageModelMemory;
-(BOOL)hasLanguageModelBundle;
-(id)initWithInputMode:(id)arg0 customResourcePaths:(id)arg1 dynamicResourcePath:(id)arg2 mobileAssets:(id)arg3 usesLinguisticContext:(BOOL)arg4 isMultiLingualModeEnabled:(BOOL)arg5 trialParameters:(id)arg6 ;
-(struct shared_ptr<KB::LanguageModel> )languageModelForAdaptationContext:(id)arg0 ;
-(struct shared_ptr<KB::LanguageModel> )lightweightLanguageModel;
-(struct shared_ptr<KB::LanguageModel> )newLanguageModel;
-(struct shared_ptr<KB::LanguageModel> )sharedLanguageModelForClient:(id)arg0 withRecipient:(id)arg1 ;
-(struct shared_ptr<KB::LanguageModel> )sharedLanguageModelForClient:(id)arg0 withRecipient:(id)arg1 completion:(id)arg2 ;
-(void)clearDynamicLearningCaches;
-(void)findRecordsMatchingRecipient:(id)arg0 completionHandler:(id)arg1 ;
-(void)flushDynamicLearningCaches;
-(void)lookupRecordForRecipientIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)performLearningIfNecessaryForClient:(id)arg0 withModel:(struct shared_ptr<KB::LanguageModel> )arg1 ;
-(void)setLanguageModelClientIdentifier:(id)arg0 ;
-(void)setLanguageModelRecipientIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)unwireLanguageModelMemory;
-(void)wireLanguageModelMemory;


@end


#endif