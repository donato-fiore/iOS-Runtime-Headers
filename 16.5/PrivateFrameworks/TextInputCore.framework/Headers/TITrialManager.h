// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITRIALMANAGER_H
#define TITRIALMANAGER_H

@class NSString, DDSTrialAsset;
@protocol DDSAssetCenterDelegate, TITrialManager, TITrialManagerDataSource, DDSTrialProvider, LMTrialProvider;

#import <Foundation/Foundation.h>


@interface TITrialManager : NSObject <DDSAssetCenterDelegate, TITrialManager>



@property (readonly) NSObject<TITrialManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) NSObject<DDSTrialProvider> *ddsTrialProvider; // ivar: _ddsTrialProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didStart; // ivar: _didStart
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<LMTrialProvider> *lmTrialProvider; // ivar: _lmTrialProvider
@property (readonly) Class superclass;
@property (copy) DDSTrialAsset *trialAsset; // ivar: _trialAsset
@property (copy) id *updateCallback; // ivar: _updateCallback


+(id)sharedInstance;
-(id)encodedCATrialParametersForLocale:(id)arg0 ;
-(id)encodedLMTrialParametersForLocale:(id)arg0 ;
-(id)initWithDatasource:(id)arg0 lmTrialProvider:(id)arg1 ddsTrialProvider:(id)arg2 ;
-(id)inputTranscoderAssetsDirectoryURLForLocale:(id)arg0 ;
-(id)urlForContentItemType:(id)arg0 asset:(id)arg1 locale:(id)arg2 ;
-(void)dealloc;
-(void)didUpdateAssetsWithType:(id)arg0 ;
-(void)handleReceivedTrialAsset:(id)arg0 ;
-(void)start;
-(void)trialDidReceiveAsset:(id)arg0 forQuery:(id)arg1 ;
-(void)trialDidStopForQuery:(id)arg0 ;


@end


#endif