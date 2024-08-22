// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGIFTCONFIGURATION_H
#define SKUIGIFTCONFIGURATION_H

@class NSArray, NSMutableDictionary, NSHashTable, NSOperationQueue, NSString, NSURL;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUIGiftConfiguration : NSObject {
    NSArray *_charities;
    NSMutableDictionary *_charityImages;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
}


@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, nonatomic) NSString *currencySymbol; // ivar: _currencySymbol
@property (readonly, nonatomic) NSInteger currencySymbolPosition; // ivar: _currencySymbolPosition
@property (readonly, nonatomic) NSArray *fixedGiftAmountLabels; // ivar: _fixedGiftAmountLabels
@property (readonly, nonatomic) NSArray *fixedGiftAmountValues; // ivar: _fixedGiftAmountValues
@property (readonly, nonatomic) _NSRange giftAmountRange; // ivar: _giftAmountRange
@property (readonly, nonatomic) NSURL *giftPurchaseURL; // ivar: _giftPurchaseURL
@property (readonly, nonatomic) NSURL *giftValidationURL; // ivar: _giftValidationURL
@property (readonly, nonatomic) NSInteger maximumMessageLength; // ivar: _maximumMessageLength
@property (readonly, nonatomic) NSString *senderEmailAddress; // ivar: _senderEmailAddress
@property (readonly, nonatomic) NSString *senderName; // ivar: _senderName
@property (readonly, nonatomic) NSString *storeFrontName; // ivar: _storeFrontName
@property (readonly, nonatomic) NSArray *themes; // ivar: _themes


-(BOOL)loadCachedConfiguration;
-(id)charityForIdentifier:(id)arg0 ;
-(id)initWithOperationQueue:(id)arg0 clientContext:(id)arg1 ;
-(id)logoImageForCharity:(id)arg0 ;
-(void)_finishLoadAccountInfoWithResponse:(id)arg0 error:(id)arg1 block:(id)arg2 ;
-(void)_finishLoadWithResponse:(id)arg0 error:(id)arg1 block:(id)arg2 ;
-(void)_loadThemeImages;
-(void)_setHeaderImage:(id)arg0 forTheme:(id)arg1 ;
-(void)_setLogoImage:(id)arg0 forCharity:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)loadConfigurationWithCompletionBlock:(id)arg0 ;
-(void)loadLogoForCharity:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif