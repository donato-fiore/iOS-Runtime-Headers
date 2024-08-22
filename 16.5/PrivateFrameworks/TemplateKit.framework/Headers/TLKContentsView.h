// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKCONTENTSVIEW_H
#define TLKCONTENTSVIEW_H

@class NSMutableArray;


#import "TLKStackView.h"
#import "TLKLabel.h"

@interface TLKContentsView : TLKStackView

@property (retain, nonatomic) NSMutableArray *detailsLabels; // ivar: _detailsLabels
@property (retain, nonatomic) TLKLabel *titleLabel; // ivar: _titleLabel


+(id)detailsLabel;
-(id)init;
-(void)updateWithTitle:(id)arg0 contents:(id)arg1 ;


@end


#endif