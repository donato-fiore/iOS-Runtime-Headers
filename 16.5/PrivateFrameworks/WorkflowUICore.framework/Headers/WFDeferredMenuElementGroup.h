// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDEFERREDMENUELEMENTGROUP_H
#define WFDEFERREDMENUELEMENTGROUP_H

@class NSString;
@protocol WFMenuElement, WFMenuElementGroup;

#import <Foundation/Foundation.h>


@interface WFDeferredMenuElementGroup : NSObject <WFMenuElement, WFMenuElementGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger estimatedItemCount; // ivar: _estimatedItemCount
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *itemProvider; // ivar: _itemProvider
@property (nonatomic) BOOL mayContainSelectedItem; // ivar: _mayContainSelectedItem
@property (nonatomic) BOOL onlyDisplayTitleWhenCollapsed; // ivar: onlyDisplayTitleWhenCollapsed
@property (nonatomic) NSUInteger style; // ivar: style
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: title


-(BOOL)shouldCollapse;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProvider:(id)arg0 ;


@end


#endif