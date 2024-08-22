// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARNAMEITEM_H
#define _UISTATUSBARNAMEITEM_H

@class NSString;


#import "UIStatusBarItem.h"
#import "_UIStatusBarStringView.h"

@interface _UIStatusBarNameItem : UIStatusBarItem

@property (readonly, nonatomic) NSString *nameEntryKey; // ivar: _nameEntryKey
@property (retain, nonatomic) _UIStatusBarStringView *nameView; // ivar: _nameView


-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif