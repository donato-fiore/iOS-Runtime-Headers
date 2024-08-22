// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSSYNTHESISPROVIDERVOICEMANAGER_H
#define TTSSYNTHESISPROVIDERVOICEMANAGER_H

@protocol OS_dispatch_queue, TTSSynthesisProviderVoiceManagerDelegate;

#import <Foundation/Foundation.h>


@interface TTSSynthesisProviderVoiceManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *componentQueryQueue; // ivar: _componentQueryQueue
@property (weak, nonatomic) NSObject<TTSSynthesisProviderVoiceManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // ivar: _operationQueue


+(BOOL)_componentIsEqual:(struct AudioComponentDescription )arg0 to:(struct AudioComponentDescription )arg1 ;
+(BOOL)synthesizerHasEntitlement:(id)arg0 entitlement:(char *)arg1 ;
+(id)allSynthesisProviderTTSVoices;
+(id)allSynthesisProviderVoices;
+(id)componentCache;
+(id)macintalkAudioUnitProvider;
+(id)voiceCache;
+(void)resetInMemoryCache;
+(void)setComponentCache:(id)arg0 ;
-(BOOL)_loadVoicesForComponentWithTimeout:(id)arg0 timeout:(CGFloat)arg1 timedOut:(*BOOL)arg2 ;
-(id)_systemAudioUnitProviders;
-(id)init;
-(void)_loadVoicesForComponentRecord:(id)arg0 dispatchGroup:(id)arg1 ;
-(void)_loadVoicesForComponents:(id)arg0 ;
-(void)_reconcileCachedComponents:(id)arg0 ;
-(void)_reloadVoiceForBundleIdentifierHash:(id)arg0 ;
-(void)_reloadVoiceForBundleIdentifierPrefix:(id)arg0 ;
-(void)purgeAndReloadAllComponents;
-(void)reconcileCachedComponents;
-(void)reloadVoicesForBundleIdentifierHash:(id)arg0 ;
-(void)reloadVoicesForBundleIdentifierPrefix:(id)arg0 ;


@end


#endif