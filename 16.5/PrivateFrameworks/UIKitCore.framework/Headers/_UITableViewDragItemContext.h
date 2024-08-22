// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABLEVIEWDRAGITEMCONTEXT_H
#define _UITABLEVIEWDRAGITEMCONTEXT_H

@class NSIndexPath;

#import <Foundation/Foundation.h>

#import "UITableView.h"

@interface _UITableViewDragItemContext : NSObject

@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView


-(id)initWithIndexPath:(id)arg0 forTableView:(id)arg1 ;


@end


#endif