// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICALLOUTBARVISUALSTYLE_H
#define _UICALLOUTBARVISUALSTYLE_H


#import <Foundation/Foundation.h>

#import "_UICalloutBarMetrics.h"
#import "_UICalloutBarButtonMetrics.h"
#import "UICalloutBar.h"

@interface _UICalloutBarVisualStyle : NSObject

@property (readonly, nonatomic) _UICalloutBarMetrics *barMetrics; // ivar: _barMetrics
@property (readonly, nonatomic) _UICalloutBarButtonMetrics *buttonMetrics; // ivar: _buttonMetrics
@property (readonly, weak, nonatomic) UICalloutBar *calloutBar; // ivar: _calloutBar


-(id)initWithCalloutBar:(id)arg0 ;
-(void)calloutBarDidDisappear:(id)arg0 ;
-(void)calloutBarWillAppear:(id)arg0 ;
-(void)updateCalloutBar:(id)arg0 withContentButtons:(id)arg1 ;


@end


#endif