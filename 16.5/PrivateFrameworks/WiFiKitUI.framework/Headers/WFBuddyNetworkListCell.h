// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFBUDDYNETWORKLISTCELL_H
#define WFBUDDYNETWORKLISTCELL_H

@class NSLayoutConstraint;


#import "WFNetworkListCell.h"

@interface WFBuddyNetworkListCell : WFNetworkListCell

@property (weak, nonatomic) NSLayoutConstraint *bottomLabelConstraint; // ivar: _bottomLabelConstraint
@property (weak, nonatomic) NSLayoutConstraint *topLabelConstraint; // ivar: _topLabelConstraint
@property (weak, nonatomic) NSLayoutConstraint *trailingImageViewConstraint; // ivar: _trailingImageViewConstraint


-(void)awakeFromNib;
-(void)layoutSubviews;
-(void)setSubtitle:(id)arg0 ;


@end


#endif