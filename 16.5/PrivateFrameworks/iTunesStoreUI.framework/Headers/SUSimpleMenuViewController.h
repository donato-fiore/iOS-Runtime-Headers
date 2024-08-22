// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSIMPLEMENUVIEWCONTROLLER_H
#define SUSIMPLEMENUVIEWCONTROLLER_H

@class NSString, NSArray;


#import "SUMenuViewController.h"

@interface SUSimpleMenuViewController : SUMenuViewController

@property (copy, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (copy, nonatomic) NSArray *titles; // ivar: _titles


-(BOOL)isMenuItemEnabledAtIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfMenuItems;
-(id)initWithTitles:(id)arg0 ;
-(id)titleOfMenuItemAtIndex:(NSInteger)arg0 ;
-(void)_cancelAction:(id)arg0 ;
-(void)dealloc;
-(void)reloadContentSizeForViewInPopover;


@end


#endif