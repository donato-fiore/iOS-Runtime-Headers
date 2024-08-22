// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCALLPROVIDERMANAGER_H
#define TUCALLPROVIDERMANAGER_H

@class NSString, NSMapTable, NSArray, NSDictionary;
@protocol TUCallProviderManagerDataSourceDelegate, TUCallProviderManagerDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TUCallProvider.h"

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate>



@property (readonly, nonatomic) NSObject<TUCallProviderManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TUCallProvider *defaultProvider;
@property (retain, nonatomic) NSMapTable *delegateToQueue; // ivar: _delegateToQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TUCallProvider *emergencyProvider;
@property (readonly, nonatomic) TUCallProvider *faceTimeProvider;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *providers;
@property (readonly, copy, nonatomic) NSDictionary *providersByIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) TUCallProvider *telephonyProvider;
@property (readonly, nonatomic) TUCallProvider *tinCanProvider;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) TUCallProvider *voicemailProvider;


+(int)serviceForProvider:(id)arg0 video:(BOOL)arg1 ;
-(id)dialRequestForRecentCall:(id)arg0 ;
-(id)init;
-(id)initWithDataSource:(id)arg0 type:(NSUInteger)arg1 queue:(id)arg2 ;
-(id)initWithLocalProviders;
-(id)initWithPairedHostDeviceProviders;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)providerForFavoritesEntry:(id)arg0 ;
-(id)providerForFavoritesEntryActionBundleIdentifier:(id)arg0 ;
-(id)providerForRecentCall:(id)arg0 ;
-(id)providerWithIdentifier:(id)arg0 ;
-(id)providerWithService:(int)arg0 video:(*BOOL)arg1 ;
-(id)providersPassingTest:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)donateUserIntentForProviderWithIdentifier:(id)arg0 ;
-(void)launchAppForDialRequest:(id)arg0 completion:(id)arg1 ;
-(void)providersChangedForDataSource:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif