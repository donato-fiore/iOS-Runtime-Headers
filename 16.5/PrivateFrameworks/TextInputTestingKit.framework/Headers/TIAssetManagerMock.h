// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIASSETMANAGERMOCK_H
#define TIASSETMANAGERMOCK_H

@class NSString;
@protocol TIAssetManaging;

#import <Foundation/Foundation.h>


@interface TIAssetManagerMock : NSObject <TIAssetManaging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *enabledInputModeIdentifiersProviderBlock; // ivar: enabledInputModeIdentifiersProviderBlock
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *preferencesProviderBlock; // ivar: preferencesProviderBlock
@property (readonly) Class superclass;


-(id)ddsAssetContentItemsWithContentType:(id)arg0 inputMode:(id)arg1 filteredWithRegion:(BOOL)arg2 ;
-(id)enabledInputModes;
-(id)topActiveRegions;
-(void)addLinguisticAssetsAssertionForLanguage:(id)arg0 assertionID:(id)arg1 region:(id)arg2 clientID:(id)arg3 withHandler:(id)arg4 ;
-(void)ddsAssetContentItemsWithContentType:(id)arg0 inputMode:(id)arg1 filteredWithRegion:(BOOL)arg2 completion:(id)arg3 ;
-(void)ddsAssetsForInputMode:(id)arg0 cachedOnly:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg0 forClientID:(id)arg1 withHandler:(id)arg2 ;
-(void)requestAssetDownloadForLanguage:(id)arg0 completion:(id)arg1 ;


@end


#endif