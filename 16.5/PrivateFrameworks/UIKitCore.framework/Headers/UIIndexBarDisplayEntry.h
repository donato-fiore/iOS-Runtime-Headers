// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINDEXBARDISPLAYENTRY_H
#define UIINDEXBARDISPLAYENTRY_H


#import <Foundation/Foundation.h>

#import "UIIndexBarEntry.h"

@interface UIIndexBarDisplayEntry : NSObject

@property (nonatomic) NSInteger displayEntryIndex; // ivar: _displayEntryIndex
@property (retain, nonatomic) UIIndexBarEntry *entry; // ivar: _entry
@property (nonatomic) NSInteger entryIndex; // ivar: _entryIndex


-(id)description;


@end


#endif