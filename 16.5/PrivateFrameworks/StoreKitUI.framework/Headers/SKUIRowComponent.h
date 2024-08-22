// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIROWCOMPONENT_H
#define SKUIROWCOMPONENT_H

@class UIColor, NSArray;


#import "SKUIPageComponent.h"
#import "SKUIRowViewElement.h"

@interface SKUIRowComponent : SKUIPageComponent {
    NSInteger _missingItemCount;
}


@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) NSArray *childComponents; // ivar: _childComponents
@property (readonly, nonatomic) NSArray *columnWidths; // ivar: _columnWidths
@property (readonly, nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns
@property (readonly, nonatomic) BOOL shouldAutoFlow; // ivar: _shouldAutoFlow
@property (readonly, nonatomic) SKUIRowViewElement *viewElement;


-(BOOL)_isChildMissingItemData:(id)arg0 ;
-(BOOL)isMissingItemData;
-(NSInteger)componentType;
-(id)_childComponentWithContext:(id)arg0 ;
-(id)_updateWithMissingItems:(id)arg0 ;
-(id)description;
-(id)initWithCustomPageContext:(id)arg0 ;
-(id)initWithViewElement:(id)arg0 ;
-(id)metricsElementName;
-(void)enumerateMissingItemIdentifiersFromIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif