// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVSHADOWVIEWELEMENT_H
#define _TVSHADOWVIEWELEMENT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "_TVShadowViewElementID.h"
#import "_TVShadowViewElement.h"

@interface _TVShadowViewElement : NSObject

@property (copy, nonatomic) NSArray *children; // ivar: _children
@property (copy, nonatomic) _TVShadowViewElementID *elementID; // ivar: _elementID
@property (weak, nonatomic) _TVShadowViewElement *parent; // ivar: _parent
@property (copy, nonatomic) NSString *resourceName; // ivar: _resourceName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif