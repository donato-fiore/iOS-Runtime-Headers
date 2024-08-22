// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIDYNAMICSHELFVIEWELEMENT_H
#define SKUIDYNAMICSHELFVIEWELEMENT_H

@class NSString;
@protocol SKUIDynamicShelfViewElement, SKUIEntityProviding;


#import "SKUIShelfViewElement.h"
#import "SKUIViewElement.h"

@interface SKUIDynamicShelfViewElement : SKUIShelfViewElement <SKUIDynamicShelfViewElement>

 {
    SKUIViewElement *_cellTemplateViewElement;
}


@property (readonly, nonatomic) SKUIViewElement *cellTemplateViewElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SKUIEntityProviding> *entityProvider;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDynamicContainer;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(void)setShelfItemViewElementValidator:(id)arg0 ;


@end


#endif