// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSTATICMENUELEMENTGROUP_H
#define WFSTATICMENUELEMENTGROUP_H

@class NSString, NSArray;
@protocol WFMenuElement, WFMenuElementGroup;

#import <Foundation/Foundation.h>


@interface WFStaticMenuElementGroup : NSObject <WFMenuElement, WFMenuElementGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *menuElements; // ivar: _menuElements
@property (nonatomic) BOOL onlyDisplayTitleWhenCollapsed; // ivar: onlyDisplayTitleWhenCollapsed
@property (nonatomic) NSUInteger style; // ivar: style
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: title


-(BOOL)shouldCollapse;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMenuElements:(id)arg0 ;


@end


#endif