// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIJSOFFERINTERFACE_H
#define VUIJSOFFERINTERFACE_H

@protocol VUIJSOfferManageInterface;


#import "VUIJSObject.h"

@interface VUIJSOfferInterface : VUIJSObject <VUIJSOfferManageInterface>





-(void)clearOffers:(id)arg0 ;
-(void)fetchOffers:(BOOL)arg0 ;
-(void)saveOffer:(id)arg0 ;


@end


#endif