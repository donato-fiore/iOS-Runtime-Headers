// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIDIVIDERPAGECOMPONENT_H
#define SKUIDIVIDERPAGECOMPONENT_H

@class NSString;


#import "SKUIPageComponent.h"
#import "SKUIDividerViewElement.h"

@interface SKUIDividerPageComponent : SKUIPageComponent

@property (readonly, nonatomic) NSString *dividerTitle; // ivar: _title
@property (readonly, nonatomic) SKUIDividerViewElement *viewElement;


-(NSInteger)componentType;
-(id)initWithCustomPageContext:(id)arg0 ;
-(id)initWithDividerTitle:(id)arg0 ;
-(id)initWithViewElement:(id)arg0 ;


@end


#endif