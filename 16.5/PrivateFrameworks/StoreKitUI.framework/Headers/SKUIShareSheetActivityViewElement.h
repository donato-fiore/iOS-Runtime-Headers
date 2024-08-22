// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISHARESHEETACTIVITYVIEWELEMENT_H
#define SKUISHARESHEETACTIVITYVIEWELEMENT_H

@class NSString, NSURL;


#import "SKUIViewElement.h"
#import "SKUIURLViewElement.h"
#import "SKUIImageViewElement.h"
#import "SKUILabelViewElement.h"

@interface SKUIShareSheetActivityViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIURLViewElement *URL;
@property (readonly, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, nonatomic) NSURL *contentSourceURL; // ivar: _contentSourceURL
@property (readonly, nonatomic) SKUIImageViewElement *image;
@property (readonly, nonatomic) SKUILabelViewElement *message;
@property (readonly, nonatomic) SKUILabelViewElement *title;


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif