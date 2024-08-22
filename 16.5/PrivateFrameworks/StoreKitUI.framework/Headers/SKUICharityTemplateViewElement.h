// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICHARITYTEMPLATEVIEWELEMENT_H
#define SKUICHARITYTEMPLATEVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"

@interface SKUICharityTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) NSString *campaignIdentifier; // ivar: _campaignIdentifier
@property (readonly, nonatomic) NSString *charityMetadataURLString; // ivar: _charityMetadataURLString


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif