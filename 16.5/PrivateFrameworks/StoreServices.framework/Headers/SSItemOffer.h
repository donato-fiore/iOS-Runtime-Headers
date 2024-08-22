// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSITEMOFFER_H
#define SSITEMOFFER_H

@class NSMutableDictionary, NSArray, NSSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SSItem.h"
#import "SSDialog.h"
#import "SSNetworkConstraints.h"
#import "SSItemMedia.h"

@interface SSItemOffer : NSObject <NSCopying>

 {
    NSMutableDictionary *_offerDictionary;
    NSArray *_supportedDevices;
}


@property (nonatomic, getter=_offerItem, setter=_setOfferItem:) SSItem *_offerItem; // ivar: _item
@property (readonly, nonatomic) NSSet *accountIdentifiers;
@property (readonly, nonatomic) NSString *actionDisplayName;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSString *buyParameters;
@property (readonly, nonatomic) SSDialog *confirmationDialog;
@property (readonly, nonatomic) NSInteger estimatedDiskSpaceNeeded;
@property (readonly, nonatomic) SSNetworkConstraints *networkConstraints;
@property (readonly, nonatomic) NSString *offerIdentifier; // ivar: _offerIdentifier
@property (readonly, nonatomic) SSItemMedia *offerMedia;
@property (readonly, nonatomic, getter=isOneTapOffer) BOOL oneTapOffer;
@property (readonly, nonatomic, getter=isPreorder) BOOL preorder;
@property (readonly, nonatomic) NSString *priceDisplay;
@property (readonly, nonatomic) id *requiredSoftwareCapabilities;
@property (readonly, nonatomic) BOOL shouldShowPlusIcon;
@property (readonly, nonatomic) SSDialog *successDialog;
@property (readonly, nonatomic) NSArray *supportedDevices;


+(id)_preferredOfferIdentifiers;
-(id)allowedToneStyles;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)documentCannotOpenDialog;
-(id)documentRequiredHandlers;
-(id)documentUTI;
-(id)init;
-(id)initWithOfferIdentifier:(id)arg0 dictionary:(id)arg1 ;
-(id)playableMedia;
-(id)valueForProperty:(id)arg0 ;
-(void)dealloc;


@end


#endif