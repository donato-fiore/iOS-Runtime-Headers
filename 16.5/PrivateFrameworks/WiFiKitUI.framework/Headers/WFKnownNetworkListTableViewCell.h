// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFKNOWNNETWORKLISTTABLEVIEWCELL_H
#define WFKNOWNNETWORKLISTTABLEVIEWCELL_H

@class UITableViewCell, NSLayoutConstraint, UIImageView, NSString, UILabel;



@interface WFKnownNetworkListTableViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *extraLeadingConstraints; // ivar: _extraLeadingConstraints
@property (nonatomic) BOOL hasLeadingPadding; // ivar: _hasLeadingPadding
@property (retain, nonatomic) UIImageView *lockImageView; // ivar: _lockImageView
@property (retain, nonatomic) NSString *networkName; // ivar: _networkName
@property (retain, nonatomic) UILabel *networkNameLabel; // ivar: _networkNameLabel
@property (retain, nonatomic) NSLayoutConstraint *normalLeadingConstraints; // ivar: _normalLeadingConstraints
@property (nonatomic) BOOL showLock; // ivar: _showLock


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif