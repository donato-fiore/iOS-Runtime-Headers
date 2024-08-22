// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLEVIEWCELLEDITINGDATA_H
#define UITABLEVIEWCELLEDITINGDATA_H


#import <Foundation/Foundation.h>

#import "UITableViewCell.h"
#import "UITableViewCellEditControl.h"
#import "UITableViewCellReorderControl.h"
#import "UIView.h"

@interface UITableViewCellEditingData : NSObject {
    UITableViewCell *_cell;
    NSInteger _editingStyle;
    UITableViewCellEditControl *_editControl;
    UITableViewCellReorderControl *_reorderControl;
    UIView *_reorderSeparatorView;
    ? _flags;
}


@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;


-(id)editControl:(BOOL)arg0 ;
-(id)initWithTableViewCell:(id)arg0 editingStyle:(NSInteger)arg1 ;
-(id)reorderControl:(BOOL)arg0 ;
-(id)reorderSeparatorView:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif